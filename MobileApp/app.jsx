
import React, { useEffect, useState } from 'react';
import { Text, View } from 'react-native';
import BleManager from 'react-native-ble-manager';
import { DeviceClient } from 'azure-iot-device';
import React, { useEffect, useState } from 'react';
import { View, Text, Button, StyleSheet } from 'react-native';
import BleManager from 'react-native-ble-manager';
import { DeviceClient } from 'azure-iot-device';
import AsyncStorage from '@react-native-async-storage/async-storage';

const Stack = createStackNavigator();

const HomeScreen = ({ navigation }) => {
    const [data, setData] = useState('No data received');
  
    useEffect(() => {
        useEffect(() => {
            const initBluetooth = async () => {
              // Initialize Bluetooth LE
              await BleManager.start({ showAlert: false });
        
              // Replace with your Zephyr device name
              const zephyrDeviceName = 'Client-NRF'+IdNumber;
            
              // Scan for BLE devices
              BleManager.scan([], 5, true).then(() => {
                // Connect to the Zephyr device
                BleManager.connect(zephyrDeviceName).then(async () => {
                  // Listen for characteristic notifications
                  BleManager.startNotification(zephyrDeviceName, 'ClientUUID').then(() => {
                    BleManager.addListener('BleManagerDidUpdateValueForCharacteristic', handleBleData);
                  });
                });
              });
            const connectionString = await AsyncStorage.getItem('azureIoTConnectionString');
            // Create an Azure IoT Central device client
            const client = DeviceClient.fromConnectionString(connectionString, TransportType.Mqtt);
            setDeviceClient(client);
            
            // Open the connection
            await client.open();
            };
        
            initBluetooth();
        
            return () => {
              BleManager.stopNotification('Client-NRF'+IdNumber, 'ClientUUID');
              BleManager.disconnect('Client-NRF'+IdNumber);
            };
            

          }, []);
  
      return () => {
        // Cleanup code when the component is unmounted
        // Disconnect from BLE, close IoT Central connection, etc.
      };
    }, []);
    initAzureIoT();


  const handleBleData = async (data) => {
    // Handle received data from Zephyr
    const receivedData = Buffer.from(data.value, 'base64').toString('utf-8');
    console.log('Received data from Zephyr device:', receivedData);

    // Send data of the RSSI and name of the device to Azure IoT Central
    sendToAzureIoT(receivedData);
  };

  const sendToAzureIoT = async (data) => {
    try {
      // Retrieve Azure IoT Central connection string from .env
      const connectionString = process.env.AZURE_IOT_CONNECTION_STRING;

      // Create an Azure IoT Central device client
      const deviceClient = DeviceClient.fromConnectionString(connectionString, TransportType.Mqtt);

      // Send telemetry data
      const telemetryData = {
        iotmonitoringsystem_Telemetry: data,
        
      };
      const message = new Message(JSON.stringify(telemetryData));
      await deviceClient.sendEvent(message);

      // Close the device client
      await deviceClient.close();
    } catch (error) {
      console.error('Error sending data to Azure IoT Central:', error);
    }
  };

  const sendTelemetryToAzureIoT = async (telemetryData) => {
    try {
      // Send telemetry data
      const message = new Message(JSON.stringify(telemetryData));
      await deviceClient.sendEvent(message);

    } catch (error) {
      console.error('Error sending telemetry to Azure IoT Central:', error);
    }
  };

  return (
    <View style={styles.container}>
      <Text style={styles.text}>{data}</Text>
      <Button
        title="Details"
        onPress={() => navigation.navigate('Details')}
      />
    </View>
  );
};

const DetailsScreen = () => {
  return (
    <View style={styles.container}>
      <Text style={styles.text}>Details Screen</Text>
    </View>
  );
};

const App = () => {
    const [connectedDevices, setConnectedDevices] = useState([]);
    
    BleManager.scan([], 5, true).then(() => {
        BleManager.start({ showAlert: false });
        BleManager.connectedDevices([]).then(devices => {
          setConnectedDevices(devices);
        });
      });
    
    return (
        <View style={styles.container}>
          <View style={styles.header}>
            <Text style={styles.devicesTag}>Devices</Text>
          </View>
          {connectedDevices.map(device => (
            <View key={device.id} style={styles.deviceItem}>
              <Text>{device.name}</Text>
            </View>
          ))}
        </View>
      );
    };

const styles = StyleSheet.create({
    container: {
      flex: 1,
      backgroundColor: 'white',
    },
    header: {
      backgroundColor: 'lightblue',
      padding: 10,
    },
    devicesTag: {
      fontSize: 20,
      color: 'white',
    },
    deviceItem: {
      padding: 10,
      borderBottomWidth: 1,
      borderBottomColor: '#ddd',
    },
  });

export default App;