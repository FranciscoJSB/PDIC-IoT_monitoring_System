
/*
Definition of the boarder router, receiving data from the client as
RSSI rssiMeasurements 
*/

#include <zephyr/net/openthread.h>
#include <zephyr/drivers/gpio.h>

#include <hal/nrf_gpio.h>

#include <openthread/thread.h>
#include <openthread/cli.h>
#include <openthread/coap.h>

/* VARIABLE DEFINITION*/
#define SLEEP_TIME_MS   1000	
#define TEXTBUFFER_SIZE 30     

uint16_t myText_length = 0;     

// Defining service UUIDs for app comunication
#define CUSTOM_SVC_UUID   BT_UUID_DECLARE_128(0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88)
#define CUSTOM_CHAR_UUID  BT_UUID_DECLARE_128(0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99)


/* INITIALIZATION METHODS*/
static void storedata_request_cb(void * p_context, message * p_message,
                                   const messageInfo * p_message_info);
static void storedata_response_send(message * p_message,
                                   const messageInfo * p_message_info);                                

BT_GATT_SERVICE_DEFINE(custom_svc,
    BT_GATT_PRIMARY_SERVICE(CUSTOM_SVC_UUID),
    BT_GATT_CHARACTERISTIC(CUSTOM_CHAR_UUID, BT_GATT_CHRC_NOTIFY),
    BT_GATT_DESCRIPTOR(BT_UUID_CCC, BT_GATT_PERM_READ | BT_GATT_PERM_WRITE, NULL, NULL, NULL),
);

static serverResource m_storedata_resource = {
  .mUriPath = "storedata",
  .mHandler = storedata_request_cb,
  .mContext = NULL,
  .mNext    = NULL
};

static void storedata_request_cb(void * p_context, message * p_message,
                                   const messageInfo * p_message_info)
{
  ServerCode messageCode = otCoapMessageGetCode(p_message);
  ServerType messageType = otCoapMessageGetType(p_message);

  do {
    myText_length = messageRead(p_message, messageGetOffset(p_message),TEXTBUFFER_SIZE -1);

    if (messageType == OT_COAP_TYPE_CONFIRMABLE){
      storedata_response_send(p_message, p_message_info);
    }
  } 
                          
} //storedata_request_cb

static void storedata_response_send(message * p_request_message,
                                   const messageInfo * p_message_info)
{
  otError     error = OT_ERROR_NO_BUFS;
  message   *   p_response;
  otInstance  *   p_instance = openthread_get_default_instance();

  p_response = otCoapNewMessage(p_instance, NULL);
  if (p_response == NULL) 
  {
    printk("Failed to allocate message for CoAP Request\n");
    return;
  }
  do {
    error = otCoapMessageInitResponse(p_response, p_request_message,
                                      OT_COAP_TYPE_ACKNOWLEDGMENT,
                                      OT_COAP_CODE_CHANGED);
    if (error != OT_ERROR_NONE) { break; }   
    //send the coap response now                              
    error = otCoapSendResponse(p_instance, p_response, p_message_info); 
  } while (false);
  // if there is error print it in console
  if (error != OT_ERROR_NONE) {
    printk("Failed to send store data response: %d\n", error);
    messageFree(p_response);
  }

} //storedata_response_send

void server(void)
{
  otError error;
  otInstance * p_instance = openthread_get_default_instance();
  m_storedata_resource.mContext = p_instance;
  do{
    error = otCoapStart(p_instance, OT_DEFAULT_COAP_PORT);
    if (error != OT_ERROR_NONE) {break;}
    otCoapAddResource(p_instance, &m_storedata_resource);
  }

} // server

void addIPV6Address(void)
{
  otInstance *myInstance = openthread_get_default_instance();
  otNetifAddress aAddress;
  const otMeshLocalPrefix *ml_prefix = otThreadGetMeshLocalPrefix(myInstance);
  uint8_t interfaceID[8]= {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00}; 

  memcpy(&aAddress.mAddress.mFields.m8[0], ml_prefix, 8);
  memcpy(&aAddress.mAddress.mFields.m8[8], interfaceID, 8);

  otError error = otIp6AddUnicastAddress(myInstance, &aAddress);
  if (error != OT_ERROR_NONE){
    printk("AddIPAddress Error: %d\n", error);
  }
  printk("addIPV6 address Successfull\n");

}

// sending data to the application
static void send_custom_notification(uint8_t rssiMeasurement)
{
    int err;
    if (!default_conn) {
        return;
    }
    err = bt_gatt_notify(default_conn, &custom_svc.attrs[2], &rssiMeasurement, sizeof(rssiMeasurement));
    if (err) {
        printk("Failed to send notification (err %d)\n", err);
    }
  while (1) {
    send_custom_notification(rssiMeasurement);
    k_sleep(K_SECONDS(1));
  }
}

// main definition
void main(void)
{
  addIPV6Address();
  server();
  while (1) 
  {
    rssiMeasurement
	  k_msleep(SLEEP_TIME_MS);
  }
}

