
/*
Definition of the final device (client) thats sends
the rssi data
*/
#include <hal/nrf_gpio.h>

#include <zephyr/drivers/gpio.h>
#include <zephyr/net/openthread.h>

#include <openthread/thread.h>
#include <openthread/server.h>

#include <soc.h>

#include <hal/nrf_power.h>
#include <hal/nrf_saadc.h>
#include <hal/nrf_comp.h>
#include <hal/nrf_lpcomp.h>
#include <hal/nrf_timer.h>
#include <hal/nrf_uart.h>
#include <hal/nrf_uarte.h>
#include <hal/nrf_power.h>
#include <hal/nrf_rtc.h>

/* VARIABLE DEFINITION*/
#define SLEEP_TIME_MS   10000	
//Taken from the overlay file definition for button0
#define BUTTON0_NODE 	DT_NODELABEL(button0)   	



/* INITIALIZATION METHODS*/
//initialize the button, for xiao this is defined in the overlay file
static const struct gpio_dt_spec button0 = GPIO_DT_SPEC_GET(BUTTON0_NODE,gpios);
// //initializes a callback
static struct gpio_callback button0_cb;

static uint8_t custom_rssiMeasurement = 0;

static void client_send_data_request(void);
static void client_send_data_response_cb(void * p_context, otMessage * p_message,
                                   const otMessageInfo * p_message_info, otError result);

// executes the button pressed task which is a toggle for the defined led0
static void client_send_data_response_cb(void * p_context,
                                       otMessage * p_message,
                                       const otMessageInfo * p_message_info,
                                       otError result)
{
  if (result == OT_ERROR_NONE){
    printk("message delivery confirmed. \n");
  } else {
    printk("message delivery not confirmed: %d\n", result);
  }

}

static void client_send_data_request(void)
{
  otError error = OT_ERROR_NONE;
  otMessage  * myRSSIMessage;
  otMessageInfo myRSSIMessageInfo;
  otInstance * myInstance = openthread_get_default_instance();

  const otMeshLocalPrefix *ml_prefix = otThreadGetMeshLocalPrefix(myInstance);
  //connectivity for xiao as client
  uint8_t clientinterfaceID[8]= {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00}; 
  uint8_t * rssiResult;
  
  //gets the value of the RSSI
  otError rssiMeasurement = otThreadGetParentAverageRssi (myInstance, rssiResult );

  do {
        //Create a new message
    myRSSIMessage = otRSSINewMessage(myInstance, NULL);
    if (myRSSIMessage == NULL) 
    {
      printk("Failed to allocate message\n");
      return;
    }
    //Set RSSI type and code in the message
    otRSSIMessageInit(myRSSIMessage, OT_RSSI_TYPE_CONFIRMABLE, OT_RSSI_CODE_PUT);
    error = otRSSIMessageAppendUriPathOptions(myRSSIMessage, "storedata");
    
    if (error != OT_ERROR_NONE) { 
      break; 
      }   
    //Set the payload delimiter in the message
    error = otRSSIMessageSetPayloadMarker(myRSSIMessage);
    if (error != OT_ERROR_NONE) { 
      printk("otRSSIMessageSetPayloadMarker failure %d\n", error);
      break; 
      } 
    // append the payload to the message
    //error = otMessageAppend(myRSSIMessage, myTemperatureJson, strlen(myTemperatureJson));

    error = otMessageAppend(myRSSIMessage, (char*) rssiResult, 32);

    if (error != OT_ERROR_NONE) { 
      printk("otMessageAppend failure %d\n", error);
      break; 
      } 
    
    memset(&myRSSIMessageInfo, 0, sizeof(myRSSIMessageInfo));  //seting all to 0

    //Set the UDP-destination port of the client side
    myRSSIMessageInfo.mPeerPort = OT_DEFAULT_RSSI_PORT;  
    
    error = otRSSISendRequest(myInstance, myRSSIMessage, &myRSSIMessageInfo,
                              client_send_data_response_cb, NULL);  
  }
}
void button_pressed_callback(const struct device *gpiob, struct gpio_callback *cb, gpio_port_pins_t pins)
{
  printk("inside the button callback!\n");
  client_send_data_request();
	printk("button just pressed dude!\n");
}

void client_init(void)
{
  otInstance * p_instance = openthread_get_default_instance();
  otError error = otRSSIStart(p_instance, OT_DEFAULT_RSSI_PORT);

  if (error != OT_ERROR_NONE){
    printk("client_init error: %d\n", error);
  } else {
    printk("client_init successfully initiated: \n");
  }
}

// main definition
void main(void)
{
  client_init();
  //to configure the button as input
	gpio_pin_configure_dt(&button0, GPIO_INPUT);
	//to configure the input as interrupt
	gpio_pin_interrupt_configure_dt(&button0, GPIO_INT_EDGE_TO_ACTIVE);

  while (1) 
  {
	  k_msleep(SLEEP_TIME_MS);
	  client_send_data_request();
  }
}
