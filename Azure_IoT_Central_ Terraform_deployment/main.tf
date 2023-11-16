resource "azurerm_resource_group" "IoT_ResourceGroup" {
  name     = "IoT_ResourceGroup"
  location = "East US" 

resource "azurerm_iothub" "monitoringsystem-iothub" {
  name                = "iotmonitoringsystem-iothub"
  resource_group_name = IoT_ResourceGroup.name
  location            = IoT_ResourceGroup.location
  sku                 = "S1"
  partition_count     = 4
}

resource "azurerm_iothub_consumer_group" "consumergroup" {
  name                = "iotmonitoringsystem-consumer-group"
  iothub_name         = monitoringsystem-iothub.name
  resource_group_name = IoT_ResourceGroup.name
}

resource "azurerm_iothub_shared_access_policy" "monitoringsystem-policy" {
  name                = "monitoringsystem-policy"
  iothub_name         = monitoringsystem-iothub.name
  resource_group_name = IoT_ResourceGroup.name
  permissions         = ["iothubowner"]
}

resource "azurerm_iothub_route" "monitoringsystem-route" {
  name                = "monitoringsystem-route"
  iothub_name         = monitoringsystem-iothub.name
  resource_group_name = IoT_ResourceGroup.name

  source = "DeviceTelemetryMessages"
  condition = "true"
  endpoint_type = "ServiceBusQueue"

  endpoint_name {
    name = "monitoringsystem-queue-endpoint"
  }
}