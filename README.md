***************************************************************************************************************************************************************************
 Monitoring System based on IoT network mesh with NRF52840 devices
***************************************************************************************************************************************************************************
The system is developed using Zephyr and the OpenThread protocol alongside the Nordic Semiconductor SDK, the system takes the RSSI measurements from the 
"client" devices carried by the users of the system, these values will be send to the application developed using React under the MobileApp folder, and connects into 
Azure IoT Central for easier visualization of the data, if tirggered, an alert will be send to your email so you can take actions immediatly. 

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
A. System requirements:

    1. Terraform, please use the following link for further reference (https://developer.hashicorp.com/terraform/tutorials/aws-get-started/install-cli)

    2. Connection to WiFi

    3. An Azure Account, preferably pay as you go setup
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
B. Components (physical)

The system is intended to have the fewest manual interaction, for the correct usage please make sure to have the following components

    1. At least 2 Xiao BLE Sense devices - NRF52840

    2. The respective power source attached to the identification badge

    3. Device for centralized management with Bluetooth, (eg. Mobile phone or Laptop)

    C. Deployment of the Azure IoT Central Resources
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

C. Azure Environment Setup

Developed in Terraform, under the folder Azure_Iot_Central_Terraform_deployment is the main.tf file that allows the user to deploy the resources into an Azure subscription.
To setup the environment please follow the following steps:

    1. open a command prompt and navigate to the path where you have downloaded the project

    2. verify you have Terraform install (refer to the install part on section A)

    3. Log into your subscription

    4. at the command prompt use the command <Terraform plan> , this will instantly create a plan of your desired state configuration, please verify all is in place

    5. If eveything is alright, use the command <Terraform apply> , this will set up your resources in place at your subscription

    If needed, you can delete your resources simply using <Terraform Destoy> , WARNING: this will delete all your resources and everything contained in it.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

D. App Installation (Android)

    1. Run the following command <npx react-native run-android --variant=release>

    2. After a successful build, navigate to the android/app/build/outputs/apk/release directory. You'll find an APK file with a name like app-release.apk.

    3. Transfer the APK file to your Android phone. You can use email, cloud storage, or a direct USB connection.

    4. On your Android phone, open a file explorer, navigate to the location of the APK file, and tap on it to install.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

E. App Installation (iOS)

    1. Run the following command in your React Native project directory to build the app for iOS <npx react-native run-ios --configuration=release>

    2. Navigate to the ios directory in your project and open the .xcworkspace file in Xcode.

    3. In Xcode, configure the code signing settings for release. Select your development team and ensure that a valid provisioning profile is selected.

    4. Build the app in Xcode. You can do this by selecting your connected iOS device as the target and clicking the "Build" button.

    5. The app will be installed on the connected iOS device. If the app is distributed through the App Store, you can download it from there.



    Ensure that your phone allows installations from unknown sources (Android) or that the app is signed with a valid development or distribution certificate (iOS).

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

F. Installation of the program on each NRF52840 device

   I. Server:

    1. Choose which of the devices will be the Server (the one in charged of monitoring the area) 

    2. Navigate into the path of the project and under the IoT_server_nrf52840/build/Zephyr/ locate the file "zephyr.uf2"

    3. Plug your device to the computer via an usb-c cable

    4. Press twice the reset button to open the configurations 

    5. Copy and paste the "zephyr.uf2" into the configurations

    6. Ready to go!

    II. Client: 

    1. Choose which of the devices will be the Client (the one carried by the users) 

    2. Navigate into the path of the project and under the IoT_client_nrf52840/build/Zephyr/ locate the file "zephyr.uf2"

    3. Plug your device to the computer via an usb-c cable

    4. Press twice the reset button to open the configurations 

    5. Copy and paste the "zephyr.uf2" into the configurations

    6. Ready to go!

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Congratulations, after setting the steps above you can start using the IoT monitoring system, simply open your Azure IoT Central dashboard and start looking at the data, also you can receive this inputs 
in your application. 

Thanks your choosing us!

