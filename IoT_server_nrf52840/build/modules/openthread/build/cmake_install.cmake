# Install script for directory: C:/ncs/Toolchains/v2.4.2/modules/lib/openthread

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/Zephyr-Kernel")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/ncs/Toolchains/toolchains/31f4403e35/opt/zephyr-sdk/arm-zephyr-eabi/bin/arm-zephyr-eabi-objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/TEC/PDIC/Proyecto/PDIC-IoT_monitoring_System/coap_server_52840dk/build/modules/openthread/build/examples/platforms/zephyr/cmake_install.cmake")
  include("E:/TEC/PDIC/Proyecto/PDIC-IoT_monitoring_System/coap_server_52840dk/build/modules/openthread/build/examples/cmake_install.cmake")
  include("E:/TEC/PDIC/Proyecto/PDIC-IoT_monitoring_System/coap_server_52840dk/build/modules/openthread/build/src/cmake_install.cmake")
  include("E:/TEC/PDIC/Proyecto/PDIC-IoT_monitoring_System/coap_server_52840dk/build/modules/openthread/build/tests/cmake_install.cmake")
  include("E:/TEC/PDIC/Proyecto/PDIC-IoT_monitoring_System/coap_server_52840dk/build/modules/openthread/build/tools/cmake_install.cmake")

endif()

