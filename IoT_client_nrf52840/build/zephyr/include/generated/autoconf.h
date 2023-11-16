#define CONFIG_GPIO 1
#define CONFIG_GPIO_INIT_PRIORITY 40
#define CONFIG_REGULATOR 1
#define CONFIG_SENSOR 1
#define CONFIG_NET_IPV6 1
#define CONFIG_NET_CONFIG_NEED_IPV6 1
#define CONFIG_I2C 1
#define CONFIG_BOARD "xiao_ble"
#define CONFIG_USB_DEVICE_INITIALIZE_AT_BOOT 1
#define CONFIG_SOC "nRF52840_QIAA"
#define CONFIG_SOC_SERIES "nrf52"
#define CONFIG_NUM_IRQS 48
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 32768
#define CONFIG_CLOCK_CONTROL_INIT_PRIORITY 30
#define CONFIG_FLASH_SIZE 1024
#define CONFIG_FLASH_BASE_ADDRESS 0x0
#define CONFIG_ICACHE_LINE_SIZE 32
#define CONFIG_DCACHE_LINE_SIZE 32
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_PINCTRL 1
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_SOC_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_CUSTOM_BUSY_WAIT 1
#define CONFIG_PM 1
#define CONFIG_PM_DEVICE 1
#define CONFIG_IEEE802154_NRF5 1
#define CONFIG_NRF_RTC_TIMER 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 32768
#define CONFIG_BUILD_OUTPUT_HEX 1
#define CONFIG_MAIN_STACK_SIZE 2560
#define CONFIG_NET_UDP_CHECKSUM 1
#define CONFIG_MP_MAX_NUM_CPUS 1
#define CONFIG_PLATFORM_SPECIFIC_INIT 1
#define CONFIG_HAS_DTS 1
#define CONFIG_DT_HAS_ARM_ARMV7M_ITM_ENABLED 1
#define CONFIG_DT_HAS_ARM_CORTEX_M4F_ENABLED 1
#define CONFIG_DT_HAS_ARM_CRYPTOCELL_310_ENABLED 1
#define CONFIG_DT_HAS_ARM_V7M_NVIC_ENABLED 1
#define CONFIG_DT_HAS_FIXED_PARTITIONS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_KEYS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_LEDS_ENABLED 1
#define CONFIG_DT_HAS_MMIO_SRAM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_ACL_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CC310_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CCM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CLOCK_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_ECB_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_EGU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_FICR_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPIO_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPIOTE_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPREGRET_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_IEEE802154_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_MWU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_NFCT_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PINCTRL_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_POWER_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PPI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PWM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_QSPI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_RADIO_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_RNG_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SAADC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SPI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SWI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_TEMP_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_TWI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_TWIM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_UARTE_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_UICR_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_USBD_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_WDT_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF52_FLASH_CONTROLLER_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_QSPI_NOR_ENABLED 1
#define CONFIG_DT_HAS_PWM_LEDS_ENABLED 1
#define CONFIG_DT_HAS_REGULATOR_FIXED_ENABLED 1
#define CONFIG_DT_HAS_SEEED_XIAO_GPIO_ENABLED 1
#define CONFIG_DT_HAS_SOC_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ST_LSM6DSL_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_BT_HCI_ENTROPY_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_CDC_ACM_UART_ENABLED 1
#define CONFIG_NEWLIB_LIBC_NANO 1
#define CONFIG_NUM_METAIRQ_PRIORITIES 1
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 1120
#define CONFIG_INIT_STACKS 1
#define CONFIG_NET_PKT_RX_COUNT 10
#define CONFIG_NET_PKT_TX_COUNT 16
#define CONFIG_MBEDTLS_SSL_PROTO_DTLS 1
#define CONFIG_MBEDTLS_ENTROPY_C 1
#define CONFIG_MBEDTLS_HEAP_SIZE 10240
#define CONFIG_OPENTHREAD_PING_SENDER 1
#define CONFIG_NRF_802154_ENCRYPTION 1
#define CONFIG_IEEE802154_2015 1
#define CONFIG_NET_PKT_TXTIME 1
#define CONFIG_NET_PKT_TIMESTAMP 1
#define CONFIG_OPENTHREAD_PLATFORM_CSL_UNCERT 12
#define CONFIG_IEEE802154_NRF5_DELAY_TRX_ACC 20
#define CONFIG_IEEE802154_CSL_ENDPOINT 1
#define CONFIG_OPENTHREAD_CSL_RECEIVE_TIME_AHEAD 5000
#define CONFIG_OPENTHREAD_MIN_RECEIVE_ON_AHEAD 104
#define CONFIG_OPENTHREAD_MIN_RECEIVE_ON_AFTER 0
#define CONFIG_OPENTHREAD_CSL_TIMEOUT 20
#define CONFIG_MBEDTLS_LIBRARY_NRF_SECURITY 1
#define CONFIG_WARN_EXPERIMENTAL 1
#define CONFIG_PRIVILEGED_STACK_SIZE 1024
#define CONFIG_ENTROPY_GENERATOR 1
#define CONFIG_INIT_ARCH_HW_AT_BOOT 1
#define CONFIG_NORDIC_QSPI_NOR 1
#define CONFIG_NORDIC_QSPI_NOR_FLASH_LAYOUT_PAGE_SIZE 4096
#define CONFIG_NORDIC_QSPI_NOR_STACK_WRITE_BUFFER_SIZE 4
#define CONFIG_PM_PARTITION_SIZE_PROVISION 0x1000
#define CONFIG_PM_PARTITION_SIZE_B0_IMAGE 0x8000
#define CONFIG_SB_VALIDATION_INFO_MAGIC 0x86518483
#define CONFIG_SB_VALIDATION_POINTER_MAGIC 0x6919b47e
#define CONFIG_SB_VALIDATION_INFO_CRYPTO_ID 1
#define CONFIG_SB_VALIDATION_INFO_VERSION 2
#define CONFIG_SB_VALIDATION_METADATA_OFFSET 0
#define CONFIG_SB_VALIDATE_FW_SIGNATURE 1
#define CONFIG_NRF_CLOUD_CLIENT_ID_SRC_COMPILE_TIME 1
#define CONFIG_NRF_CLOUD_CLIENT_ID "my-client-id"
#define CONFIG_NRF_CLOUD_LOG_OUTPUT_LEVEL 1
#define CONFIG_NRF_CLOUD_LOG_BUF_SIZE 256
#define CONFIG_NORDIC_SECURITY_PROMPTLESS 1
#define CONFIG_OPENTHREAD_NRF_SECURITY_CHOICE 1
#define CONFIG_OPENTHREAD_NRF_SECURITY 1
#define CONFIG_OPENTHREAD_MBEDTLS_LIB_NAME "mbedtls_external"
#define CONFIG_OPENTHREAD_THREAD_STACK_SIZE 6240
#define CONFIG_OPENTHREAD_RADIO_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_MPSL_FEM_API_AVAILABLE 1
#define CONFIG_MPSL_THREAD_COOP_PRIO 0
#define CONFIG_MPSL_WORK_STACK_SIZE 1024
#define CONFIG_MPSL_TIMESLOT_SESSION_COUNT 0
#define CONFIG_SRAM_SIZE 256
#define CONFIG_SRAM_BASE_ADDRESS 0x20000000
#define CONFIG_PM_PARTITION_SIZE_SETTINGS_STORAGE 0x2000
#define CONFIG_PM_PARTITION_ALIGN_SETTINGS_STORAGE 0x1000
#define CONFIG_PM_EXTERNAL_FLASH_HAS_DRIVER 1
#define CONFIG_PM_EXTERNAL_FLASH_BASE 0x0
#define CONFIG_PM_SRAM_BASE 0x20000000
#define CONFIG_PM_SRAM_SIZE 0x40000
#define CONFIG_NRF_802154_RADIO_CONFIG 1
#define CONFIG_NRF_802154_RADIO_CONFIG_PRIO 91
#define CONFIG_NRF_802154_ACK_TIMEOUT_CUSTOM_US 0
#define CONFIG_TFM_CONN_HANDLE_MAX_NUM 8
#define CONFIG_NRF_ACL_FLASH_REGION_SIZE 0x1000
#define CONFIG_FPROTECT_BLOCK_SIZE 0x1000
#define CONFIG_MULTITHREADING_LOCK 1
#define CONFIG_RESET_ON_FATAL_ERROR 1
#define CONFIG_HW_UNIQUE_KEY_PARTITION_SIZE 0x1000
#define CONFIG_ENTROPY_CC3XX 1
#define CONFIG_HW_CC3XX 1
#define CONFIG_NRFX_GPIOTE_NUM_OF_EVT_HANDLERS 1
#define CONFIG_NET_CONFIG_INIT_TIMEOUT 30
#define CONFIG_CLOCK_CONTROL_MPSL 1
#define CONFIG_SOC_FLASH_NRF_RADIO_SYNC_MPSL 1
#define CONFIG_SOC_FLASH_NRF_RADIO_SYNC_MPSL_TIMESLOT_SESSION_COUNT 1
#define CONFIG_TEMP_NRF5_MPSL 1
#define CONFIG_ZTEST_MULTICORE_DEFAULT_SETTINGS 1
#define CONFIG_ZEPHYR_NRF_MODULE 1
#define CONFIG_POSIX_MAX_FDS 4
#define CONFIG_ZEPHYR_HOSTAP_MODULE 1
#define CONFIG_BOOT_SIGNATURE_KEY_FILE ""
#define CONFIG_DT_FLASH_WRITE_BLOCK_SIZE 4
#define CONFIG_MCUBOOT_USB_SUPPORT 1
#define CONFIG_ZEPHYR_MCUBOOT_MODULE 1
#define CONFIG_ZEPHYR_MBEDTLS_MODULE 1
#define CONFIG_MBEDTLS_PROMPTLESS 1
#define CONFIG_MBEDTLS_CFG_FILE "nrf-config.h"
#define CONFIG_MBEDTLS_SSL_EXPORT_KEYS 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_ECDSA_ENABLED 1
#define CONFIG_MBEDTLS_ECDSA_DETERMINISTIC 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECJPAKE_ENABLED 1
#define CONFIG_MBEDTLS_ECDH_C 1
#define CONFIG_MBEDTLS_ECDSA_C 1
#define CONFIG_MBEDTLS_ECJPAKE_C 1
#define CONFIG_MBEDTLS_ECP_C 1
#define CONFIG_MBEDTLS_ECP_DP_SECP256R1_ENABLED 1
#define CONFIG_MBEDTLS_MAC_SHA256_ENABLED 1
#define CONFIG_MBEDTLS_USER_CONFIG_FILE "nrf-config-user.h"
#define CONFIG_MBEDTLS_PK_WRITE_C 1
#define CONFIG_MBEDTLS_PKCS5_C 1
#define CONFIG_MBEDTLS_SSL_EXTENDED_MASTER_SECRET 1
#define CONFIG_MBEDTLS_PSA_CRYPTO_C 1
#define CONFIG_MBEDTLS_ENABLE_HEAP 1
#define CONFIG_PSA_WANT_GENERATE_RANDOM 1
#define CONFIG_PSA_WANT_ALG_CTR_DRBG 1
#define CONFIG_PSA_WANT_ALG_HMAC_DRBG 1
#define CONFIG_PSA_HAS_KEY_SUPPORT 1
#define CONFIG_PSA_WANT_KEY_TYPE_DERIVE 1
#define CONFIG_PSA_WANT_KEY_TYPE_HMAC 1
#define CONFIG_PSA_WANT_KEY_TYPE_AES 1
#define CONFIG_PSA_WANT_KEY_TYPE_CHACHA20 1
#define CONFIG_PSA_WANT_KEY_TYPE_ECC_KEY_PAIR 1
#define CONFIG_PSA_WANT_KEY_TYPE_ECC_PUBLIC_KEY 1
#define CONFIG_PSA_HAS_AEAD_SUPPORT 1
#define CONFIG_PSA_WANT_ALG_CCM 1
#define CONFIG_PSA_WANT_ALG_GCM 1
#define CONFIG_PSA_WANT_ALG_CHACHA20_POLY1305 1
#define CONFIG_PSA_HAS_MAC_SUPPORT 1
#define CONFIG_PSA_WANT_ALG_CMAC 1
#define CONFIG_PSA_WANT_ALG_HMAC 1
#define CONFIG_PSA_HAS_HASH_SUPPORT 1
#define CONFIG_PSA_WANT_ALG_SHA_1 1
#define CONFIG_PSA_WANT_ALG_SHA_224 1
#define CONFIG_PSA_WANT_ALG_SHA_256 1
#define CONFIG_PSA_WANT_ALG_SHA_384 1
#define CONFIG_PSA_WANT_ALG_SHA_512 1
#define CONFIG_PSA_HAS_CIPHER_SUPPORT 1
#define CONFIG_PSA_WANT_ALG_ECB_NO_PADDING 1
#define CONFIG_PSA_WANT_ALG_CBC_NO_PADDING 1
#define CONFIG_PSA_WANT_ALG_CBC_PKCS7 1
#define CONFIG_PSA_WANT_ALG_CTR 1
#define CONFIG_PSA_HAS_KEY_DERIVATION 1
#define CONFIG_PSA_WANT_ALG_HKDF 1
#define CONFIG_PSA_WANT_ALG_TLS12_PRF 1
#define CONFIG_PSA_WANT_ALG_TLS12_PSK_TO_MS 1
#define CONFIG_PSA_HAS_ASYM_SIGN_SUPPORT 1
#define CONFIG_PSA_HAS_ECC_SUPPORT 1
#define CONFIG_PSA_WANT_ALG_ECDH 1
#define CONFIG_PSA_WANT_ALG_ECDSA 1
#define CONFIG_PSA_WANT_ALG_DETERMINISTIC_ECDSA 1
#define CONFIG_PSA_WANT_ECC_SECP_R1_256 1
#define CONFIG_PSA_WANT_ALG_STREAM_CIPHER 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_M_MODULE 1
#define CONFIG_MBEDTLS_MD_C 1
#define CONFIG_MBEDTLS_TLS_LIBRARY 1
#define CONFIG_MBEDTLS_X509_LIBRARY 1
#define CONFIG_MBEDTLS_CTR_DRBG_C 1
#define CONFIG_MBEDTLS_CMAC_C 1
#define CONFIG_MBEDTLS_CCM_C 1
#define CONFIG_MBEDTLS_LEGACY_CRYPTO_C 1
#define CONFIG_ZEPHYR_CJSON_MODULE 1
#define CONFIG_ZEPHYR_AZURE_SDK_FOR_C_MODULE 1
#define CONFIG_ZEPHYR_CIRRUS_LOGIC_MODULE 1
#define CONFIG_OPENTHREAD 1
#define CONFIG_OPENTHREAD_THREAD_VERSION_1_3 1
#define CONFIG_OPENTHREAD_THREAD_VERSION "1.3"
#define CONFIG_OPENTHREAD_COAP 1
#define CONFIG_OPENTHREAD_CSL_RECEIVER 1
#define CONFIG_OPENTHREAD_DHCP6_CLIENT 1
#define CONFIG_OPENTHREAD_DNS_CLIENT 1
#define CONFIG_OPENTHREAD_DUA 1
#define CONFIG_OPENTHREAD_ECDSA 1
#define CONFIG_OPENTHREAD_EXTERNAL_HEAP 1
#define CONFIG_OPENTHREAD_IP6_FRAGM 1
#define CONFIG_OPENTHREAD_JOINER 1
#define CONFIG_OPENTHREAD_LINK_METRICS_INITIATOR 1
#define CONFIG_OPENTHREAD_MLR 1
#define CONFIG_OPENTHREAD_NETDIAG_CLIENT 1
#define CONFIG_OPENTHREAD_POWER_SUPPLY_EXTERNAL 1
#define CONFIG_OPENTHREAD_POWER_SUPPLY "EXTERNAL"
#define CONFIG_OPENTHREAD_SLAAC 1
#define CONFIG_OPENTHREAD_SNTP_CLIENT 1
#define CONFIG_OPENTHREAD_SRP_CLIENT 1
#define CONFIG_OPENTHREAD_PANID 4660
#define CONFIG_OPENTHREAD_CHANNEL 15
#define CONFIG_OPENTHREAD_NETWORK_NAME "lantern"
#define CONFIG_OPENTHREAD_XPANID "de:ad:00:be:00:00:ca:fe"
#define CONFIG_OPENTHREAD_NETWORKKEY "00:11:22:33:44:55:66:77:88:99:aa:bb:cc:dd:ee:ff"
#define CONFIG_OPENTHREAD_MTD 1
#define CONFIG_OPENTHREAD_MTD_SED 1
#define CONFIG_OPENTHREAD_POLL_PERIOD 236000
#define CONFIG_OPENTHREAD_MAX_CHILDREN 1
#define CONFIG_OPENTHREAD_CONFIG_PLATFORM_INFO "Zephyr"
#define CONFIG_OPENTHREAD_RADIO_LINK_IEEE_802_15_4_ENABLE 1
#define CONFIG_OPENTHREAD_CSL_AUTO_SYNC 1
#define CONFIG_OPENTHREAD_MAC_SOFTWARE_TX_SECURITY_ENABLE 1
#define CONFIG_OPENTHREAD_CLI_MAX_LINE_LENGTH 384
#define CONFIG_OPENTHREAD_IP6_MAX_EXT_UCAST_ADDRS 4
#define CONFIG_OPENTHREAD_IP6_MAX_EXT_MCAST_ADDRS 2
#define CONFIG_OPENTHREAD_DEFAULT_TX_POWER 0
#define CONFIG_ZEPHYR_OPENTHREAD_MODULE 1
#define CONFIG_ZEPHYR_MEMFAULT_FIRMWARE_SDK_MODULE 1
#define CONFIG_ZEPHYR_CANOPENNODE_MODULE 1
#define CONFIG_ZEPHYR_CHRE_MODULE 1
#define CONFIG_ZEPHYR_FATFS_MODULE 1
#define CONFIG_ZEPHYR_HAL_NORDIC_MODULE 1
#define CONFIG_HAS_NORDIC_DRIVERS 1
#define CONFIG_NRF_802154_RADIO_DRIVER 1
#define CONFIG_NRF_802154_MULTIPROTOCOL_SUPPORT 1
#define CONFIG_NRF_802154_CCA_MODE_ED 1
#define CONFIG_NRF_802154_CCA_ED_THRESHOLD 45
#define CONFIG_NRF_802154_CCA_CORR_THRESHOLD 45
#define CONFIG_NRF_802154_CCA_CORR_LIMIT 2
#define CONFIG_NRF_802154_PENDING_SHORT_ADDRESSES 16
#define CONFIG_NRF_802154_PENDING_EXTENDED_ADDRESSES 16
#define CONFIG_NRF_802154_RX_BUFFERS 16
#define CONFIG_NRF_802154_TEMPERATURE_UPDATE 1
#define CONFIG_NRF_802154_TEMPERATURE_UPDATE_INIT_PRIO 91
#define CONFIG_NRF_802154_TEMPERATURE_UPDATE_PERIOD 60000
#define CONFIG_HAS_NRFX 1
#define CONFIG_NRFX_GPIOTE 1
#define CONFIG_NRFX_NVMC 1
#define CONFIG_NRFX_POWER 1
#define CONFIG_NRFX_PPI 1
#define CONFIG_NRFX_QSPI 1
#define CONFIG_NRFX_TWI 1
#define CONFIG_NRFX_TWI1 1
#define CONFIG_NRFX_TWIM 1
#define CONFIG_NRFX_TWIM0 1
#define CONFIG_NRFX_USBD 1
#define CONFIG_ZEPHYR_LIBLC3_MODULE 1
#define CONFIG_ZEPHYR_LITTLEFS_MODULE 1
#define CONFIG_ZEPHYR_LORAMAC_NODE_MODULE 1
#define CONFIG_ZEPHYR_LVGL_MODULE 1
#define CONFIG_ZEPHYR_LZ4_MODULE 1
#define CONFIG_ZEPHYR_NANOPB_MODULE 1
#define CONFIG_ZEPHYR_PICOLIBC_MODULE 1
#define CONFIG_ZEPHYR_SEGGER_MODULE 1
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_ZEPHYR_TRACERECORDER_MODULE 1
#define CONFIG_ZEPHYR_UOSCORE_UEDHOC_MODULE 1
#define CONFIG_ZEPHYR_ZCBOR_MODULE 1
#define CONFIG_ZEPHYR_ZSCILIB_MODULE 1
#define CONFIG_NRF_MODEM_SHMEM_CTRL_SIZE 0x4e8
#define CONFIG_MPSL 1
#define CONFIG_MPSL_BUILD_TYPE_LIB 1
#define CONFIG_NRFXLIB_CRYPTO 1
#define CONFIG_CRYPTOCELL_CC310_USABLE 1
#define CONFIG_CRYPTOCELL_USABLE 1
#define CONFIG_NRF_OBERON 1
#define CONFIG_NRF_CC3XX_PLATFORM 1
#define CONFIG_CC3XX_MUTEX_LOCK 1
#define CONFIG_NORDIC_SECURITY_BACKEND 1
#define CONFIG_NRF_SECURITY 1
#define CONFIG_GENERATE_MBEDTLS_CFG_FILE 1
#define CONFIG_MBEDTLS_X509_USE_C 1
#define CONFIG_MBEDTLS_X509_CHECK_KEY_USAGE 1
#define CONFIG_MBEDTLS_X509_CHECK_EXTENDED_KEY_USAGE 1
#define CONFIG_MBEDTLS_X509_CRL_PARSE_C 1
#define CONFIG_MBEDTLS_X509_CSR_PARSE_C 1
#define CONFIG_MBEDTLS_X509_CRT_PARSE_C 1
#define CONFIG_MBEDTLS_X509_REMOVE_INFO 1
#define CONFIG_MBEDTLS_SSL_CLI_C 1
#define CONFIG_MBEDTLS_SSL_SRV_C 1
#define CONFIG_MBEDTLS_SSL_TLS_C 1
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_2 1
#define CONFIG_MBEDTLS_SSL_ENCRYPT_THEN_MAC 1
#define CONFIG_MBEDTLS_SSL_COOKIE_C 1
#define CONFIG_MBEDTLS_SSL_DTLS_ANTI_REPLAY 1
#define CONFIG_MBEDTLS_SSL_DTLS_HELLO_VERIFY 1
#define CONFIG_MBEDTLS_SSL_ALL_ALERT_MESSAGES 1
#define CONFIG_MBEDTLS_SSL_CONTEXT_SERIALIZATION 1
#define CONFIG_MBEDTLS_SSL_KEEP_PEER_CERTIFICATE 1
#define CONFIG_MBEDTLS_SSL_OUT_CONTENT_LEN 900
#define CONFIG_MBEDTLS_SSL_IN_CONTENT_LEN 900
#define CONFIG_MBEDTLS_SSL_CIPHERSUITES ""
#define CONFIG_MBEDTLS_HAS_CBC_CIPHERSUITE_REQUIREMENTS 1
#define CONFIG_MBEDTLS_HAS_GCM_CIPHERSUITE_REQUIREMENT 1
#define CONFIG_MBEDTLS_HAS_CBC_OR_GCM_CIPHERSUITE_REQUIREMENTS 1
#define CONFIG_MBEDTLS_HAS_ECDH_CIPHERSUITE_REQUIREMENTS 1
#define CONFIG_MBEDTLS_HAS_ECDSA_CIPHERSUITE_REQUIREMENTS 1
#define CONFIG_MBEDTLS_HAS_ECJPAKE_CIPHERSUITE_REQUIREMENTS 1
#define CONFIG_PSA_CORE_OBERON 1
#define CONFIG_MBEDTLS_PSA_CRYPTO_DRIVERS 1
#define CONFIG_PSA_CRYPTO_ACCELERATOR_DRIVER_PRESENT 1
#define CONFIG_MBEDTLS_PSA_CRYPTO_CLIENT 1
#define CONFIG_MBEDTLS_PSA_ACCEL_KEY_TYPE_SUPPORT 1
#define CONFIG_MBEDTLS_PSA_ACCEL_KEY_TYPE_ECC_KEY_PAIR 1
#define CONFIG_MBEDTLS_PSA_ACCEL_KEY_TYPE_ECC_PUBLIC_KEY 1
#define CONFIG_MBEDTLS_PSA_ACCEL_KEY_TYPE_AES 1
#define CONFIG_MBEDTLS_PSA_ACCEL_KEY_TYPE_CHACHA20 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_PRNG_CC3XX_PLATFORM 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_CTR_DRBG_CC3XX_PLATFORM 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_HMAC_DRBG_CC3XX_PLATFORM 1
#define CONFIG_PSA_CRYPTO_DRIVER_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_HAS_CIPHER_SUPPORT_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_HAS_AEAD_SUPPORT_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_HAS_MAC_SUPPORT_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_HAS_HASH_SUPPORT_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_HAS_KDF_SUPPORT_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_HAS_ASYM_SIGN_SUPPORT_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_HAS_ECC_SUPPORT_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_HAS_ACCEL_KEY_TYPES_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_CBC_NO_PADDING_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_CBC_PKCS7_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_CCM_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_CHACHA20_POLY1305_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_CMAC_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_CTR_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_DETERMINISTIC_ECDSA_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_ECB_NO_PADDING_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_ECDH_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_ECDSA_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_GCM_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_HKDF_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_HMAC_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_SHA_1_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_SHA_224_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_SHA_256_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_SHA_384_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_SHA_512_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_TLS12_PRF_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_TLS12_PSK_TO_MS_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ALG_STREAM_CIPHER_OBERON 1
#define CONFIG_PSA_CRYPTO_DRIVER_ECC_SECP_R1_256_OBERON 1
#define CONFIG_MBEDTLS_USE_PSA_CRYPTO 1
#define CONFIG_MBEDTLS_PLATFORM_MEMORY 1
#define CONFIG_MBEDTLS_PLATFORM_C 1
#define CONFIG_MBEDTLS_MEMORY_C 1
#define CONFIG_MBEDTLS_MEMORY_BUFFER_ALLOC_C 1
#define CONFIG_MBEDTLS_ENTROPY_HARDWARE_ALT 1
#define CONFIG_MBEDTLS_PLATFORM_ZEROIZE_ALT 1
#define CONFIG_MBEDTLS_AES_SETKEY_ENC_ALT 1
#define CONFIG_MBEDTLS_AES_SETKEY_DEC_ALT 1
#define CONFIG_MBEDTLS_AES_ENCRYPT_ALT 1
#define CONFIG_MBEDTLS_AES_DECRYPT_ALT 1
#define CONFIG_MBEDTLS_CHACHA20_ALT 1
#define CONFIG_MBEDTLS_POLY1305_ALT 1
#define CONFIG_MBEDTLS_ECDH_GEN_PUBLIC_ALT 1
#define CONFIG_MBEDTLS_ECDH_COMPUTE_SHARED_ALT 1
#define CONFIG_MBEDTLS_ECDSA_GENKEY_ALT 1
#define CONFIG_MBEDTLS_ECDSA_SIGN_ALT 1
#define CONFIG_MBEDTLS_ECDSA_VERIFY_ALT 1
#define CONFIG_MBEDTLS_ECJPAKE_ALT 1
#define CONFIG_MBEDTLS_SHA1_ALT 1
#define CONFIG_MBEDTLS_SHA224_ALT 1
#define CONFIG_MBEDTLS_SHA256_ALT 1
#define CONFIG_MBEDTLS_ENTROPY_FORCE_SHA256 1
#define CONFIG_MBEDTLS_ENTROPY_MAX_SOURCES 1
#define CONFIG_MBEDTLS_NO_PLATFORM_ENTROPY 1
#define CONFIG_NRF_SECURITY_ADVANCED 1
#define CONFIG_OBERON_ONLY_PSA_ENABLED 1
#define CONFIG_OBERON_ONLY_ENABLED 1
#define CONFIG_MBEDTLS_MPI_WINDOW_SIZE 6
#define CONFIG_MBEDTLS_MPI_MAX_SIZE 256
#define CONFIG_OBERON_BACKEND 1
#define CONFIG_MBEDTLS_CTR_DRBG_USE_128_BIT_KEY 1
#define CONFIG_MBEDTLS_HMAC_DRBG_C 1
#define CONFIG_MBEDTLS_AES_C 1
#define CONFIG_MBEDTLS_HKDF_C 1
#define CONFIG_MBEDTLS_SHA256_C 1
#define CONFIG_MBEDTLS_CIPHER_C 1
#define CONFIG_MBEDTLS_PK_C 1
#define CONFIG_MBEDTLS_PK_PARSE_C 1
#define CONFIG_OPENTHREAD_NORDIC_LIBRARY_MTD 1
#define CONFIG_NRF_802154_SOURCE_NRFXLIB 1
#define CONFIG_NRF_802154_SL 1
#define CONFIG_NRF_802154_SL_LPTIMER_RTC 1
#define CONFIG_NRF_802154_SL_HPTIMER 1
#define CONFIG_LC3_ENC_CHAN_MAX 1
#define CONFIG_LC3_DEC_CHAN_MAX 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_8KHZ_SUPPORT 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_16KHZ_SUPPORT 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_24KHZ_SUPPORT 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_32KHZ_SUPPORT 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_441KHZ_SUPPORT 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_48KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_8KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_16KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_24KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_32KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_441KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_48KHZ_SUPPORT 1
#define CONFIG_ZEPHYR_NRFXLIB_MODULE 1
#define CONFIG_ZEPHYR_CONNECTEDHOMEIP_MODULE 1
#define CONFIG_HAS_CMSIS_CORE 1
#define CONFIG_HAS_CMSIS_CORE_M 1
#define CONFIG_BOARD_REVISION "$BOARD_REVISION"
#define CONFIG_BOARD_XIAO_BLE 1
#define CONFIG_BOARD_ENABLE_DCDC 1
#define CONFIG_BOARD_ENABLE_DCDC_HV 1
#define CONFIG_SOC_SERIES_NRF52X 1
#define CONFIG_CPU_HAS_ARM_MPU 1
#define CONFIG_HAS_SWO 1
#define CONFIG_SOC_FAMILY "nordic_nrf"
#define CONFIG_SOC_FAMILY_NRF 1
#define CONFIG_HAS_HW_NRF_ACL 1
#define CONFIG_HAS_HW_NRF_CC310 1
#define CONFIG_HAS_HW_NRF_CCM 1
#define CONFIG_HAS_HW_NRF_CCM_LFLEN_8BIT 1
#define CONFIG_HAS_HW_NRF_CLOCK 1
#define CONFIG_HAS_HW_NRF_ECB 1
#define CONFIG_HAS_HW_NRF_EGU0 1
#define CONFIG_HAS_HW_NRF_EGU1 1
#define CONFIG_HAS_HW_NRF_EGU2 1
#define CONFIG_HAS_HW_NRF_EGU3 1
#define CONFIG_HAS_HW_NRF_EGU4 1
#define CONFIG_HAS_HW_NRF_EGU5 1
#define CONFIG_HAS_HW_NRF_GPIO0 1
#define CONFIG_HAS_HW_NRF_GPIO1 1
#define CONFIG_HAS_HW_NRF_GPIOTE 1
#define CONFIG_HAS_HW_NRF_MWU 1
#define CONFIG_HAS_HW_NRF_NFCT 1
#define CONFIG_HAS_HW_NRF_NVMC_PE 1
#define CONFIG_HAS_HW_NRF_POWER 1
#define CONFIG_HAS_HW_NRF_PPI 1
#define CONFIG_HAS_HW_NRF_PWM0 1
#define CONFIG_HAS_HW_NRF_QSPI 1
#define CONFIG_HAS_HW_NRF_RADIO_BLE_2M 1
#define CONFIG_HAS_HW_NRF_RADIO_BLE_CODED 1
#define CONFIG_HAS_HW_NRF_RADIO_IEEE802154 1
#define CONFIG_HAS_HW_NRF_RADIO_TX_PWR_HIGH 1
#define CONFIG_HAS_HW_NRF_RNG 1
#define CONFIG_HAS_HW_NRF_SAADC 1
#define CONFIG_HAS_HW_NRF_SPI2 1
#define CONFIG_HAS_HW_NRF_SWI0 1
#define CONFIG_HAS_HW_NRF_SWI1 1
#define CONFIG_HAS_HW_NRF_SWI2 1
#define CONFIG_HAS_HW_NRF_SWI3 1
#define CONFIG_HAS_HW_NRF_SWI4 1
#define CONFIG_HAS_HW_NRF_SWI5 1
#define CONFIG_HAS_HW_NRF_TEMP 1
#define CONFIG_HAS_HW_NRF_TWI1 1
#define CONFIG_HAS_HW_NRF_TWIM0 1
#define CONFIG_HAS_HW_NRF_UARTE0 1
#define CONFIG_HAS_HW_NRF_USBD 1
#define CONFIG_HAS_HW_NRF_WDT0 1
#define CONFIG_SOC_NRF52840 1
#define CONFIG_SOC_NRF52840_QIAA 1
#define CONFIG_SOC_DCDC_NRF52X 1
#define CONFIG_SOC_DCDC_NRF52X_HV 1
#define CONFIG_GPIO_AS_PINRESET 1
#define CONFIG_NRF_ENABLE_ICACHE 1
#define CONFIG_NRF_RTC_TIMER_USER_CHAN_COUNT 3
#define CONFIG_NRF_SOC_SECURE_SUPPORTED 1
#define CONFIG_NRF_APPROTECT_USE_UICR 1
#define CONFIG_SOC_COMPATIBLE_NRF 1
#define CONFIG_SOC_COMPATIBLE_NRF52X 1
#define CONFIG_ARCH "arm"
#define CONFIG_CPU_CORTEX 1
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_ASSEMBLER_ISA_THUMB2 1
#define CONFIG_COMPILER_ISA_THUMB2 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_ARM_STACK_PROTECTION 1
#define CONFIG_CPU_CORTEX_M4 1
#define CONFIG_CPU_CORTEX_M_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M_HAS_DWT 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV7_M_ARMV8_M_FP 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_ZERO_LATENCY_IRQS 1
#define CONFIG_ZERO_LATENCY_LEVELS 1
#define CONFIG_NULL_POINTER_EXCEPTION_DETECTION_NONE 1
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_ARM_MPU 1
#define CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE 32
#define CONFIG_MPU_STACK_GUARD 1
#define CONFIG_MPU_ALLOW_FLASH_WRITE 1
#define CONFIG_CUSTOM_SECTION_MIN_ALIGN_SIZE 32
#define CONFIG_ARM 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_LITTLE_ENDIAN 1
#define CONFIG_HW_STACK_PROTECTION 1
#define CONFIG_KOBJECT_TEXT_AREA 256
#define CONFIG_KOBJECT_DATA_AREA_RESERVE_EXTRA_PERCENT 100
#define CONFIG_KOBJECT_RODATA_AREA_EXTRA_BYTES 16
#define CONFIG_GEN_PRIV_STACKS 1
#define CONFIG_DYNAMIC_INTERRUPTS 1
#define CONFIG_ARCH_IRQ_VECTOR_TABLE_ALIGN 4
#define CONFIG_IRQ_VECTOR_TABLE_JUMP_BY_ADDRESS 1
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_ARCH_SW_ISR_TABLE_ALIGN 4
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_ARCH_HAS_SINGLE_THREAD_SUPPORT 1
#define CONFIG_ARCH_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_USERSPACE 1
#define CONFIG_ARCH_HAS_EXECUTABLE_PAGE_BIT 1
#define CONFIG_ARCH_HAS_RAMFUNC_SUPPORT 1
#define CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP 1
#define CONFIG_ARCH_SUPPORTS_ARCH_HW_INIT 1
#define CONFIG_ARCH_HAS_EXTRA_EXCEPTION_INFO 1
#define CONFIG_ARCH_HAS_THREAD_LOCAL_STORAGE 1
#define CONFIG_ARCH_HAS_SUSPEND_TO_RAM 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_ARCH_HAS_CODE_DATA_RELOCATION 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_MPU 1
#define CONFIG_MPU_REQUIRES_POWER_OF_TWO_ALIGNMENT 1
#define CONFIG_SRAM_REGION_PERMISSIONS 1
#define CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING -127
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_THREAD_STACK_INFO 1
#define CONFIG_ERRNO 1
#define CONFIG_SCHED_DUMB 1
#define CONFIG_WAITQ_DUMB 1
#define CONFIG_BOOT_DELAY 0
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_POLL 1
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_EVENTS 1
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_SWAP_NONATOMIC 1
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_SYS_CLOCK_MAX_TIMEOUT_DAYS 365
#define CONFIG_XIP 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_STACK_POINTER_RANDOM 0
#define CONFIG_MP_NUM_CPUS 1
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_CLOCK_CONTROL_NRF_FORCE_ALT 1
#define CONFIG_CLOCK_CONTROL_NRF 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_XTAL 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_50PPM 1
#define CONFIG_CLOCK_CONTROL_NRF_ACCURACY 50
#define CONFIG_ENTROPY_INIT_PRIORITY 50
#define CONFIG_ENTROPY_NRF5_RNG 1
#define CONFIG_ENTROPY_NRF5_THR_POOL_SIZE 8
#define CONFIG_ENTROPY_NRF5_THR_THRESHOLD 4
#define CONFIG_ENTROPY_NRF5_ISR_POOL_SIZE 16
#define CONFIG_ENTROPY_NRF5_ISR_THRESHOLD 12
#define CONFIG_ENTROPY_HAS_DRIVER 1
#define CONFIG_FLASH_HAS_DRIVER_ENABLED 1
#define CONFIG_FLASH_HAS_PAGE_LAYOUT 1
#define CONFIG_FLASH_JESD216 1
#define CONFIG_FLASH 1
#define CONFIG_FLASH_PAGE_LAYOUT 1
#define CONFIG_FLASH_INIT_PRIORITY 50
#define CONFIG_SOC_FLASH_NRF 1
#define CONFIG_SOC_FLASH_NRF_TIMEOUT_MULTIPLIER 10
#define CONFIG_NORDIC_QSPI_NOR_INIT_PRIORITY 80
#define CONFIG_GPIO_NRFX 1
#define CONFIG_HWINFO 1
#define CONFIG_HWINFO_NRF 1
#define CONFIG_I2C_NRFX 1
#define CONFIG_I2C_NRFX_TRANSFER_TIMEOUT 500
#define CONFIG_I2C_0_NRF_TWIM 1
#define CONFIG_I2C_1_NRF_TWI 1
#define CONFIG_I2C_INIT_PRIORITY 50
#define CONFIG_IEEE802154 1
#define CONFIG_IEEE802154_NRF5_RX_STACK_SIZE 800
#define CONFIG_IEEE802154_NRF5_INIT_PRIO 80
#define CONFIG_IEEE802154_NRF5_EXT_IRQ_MGMT 1
#define CONFIG_IEEE802154_NRF5_FCS_IN_LENGTH 1
#define CONFIG_IEEE802154_NRF5_CALLOUT_TIMEOUT_MS 10000
#define CONFIG_IEEE802154_NRF5_RX_THREAD_HEARTBEAT_PERIOD_MS 0
#define CONFIG_INTC_INIT_PRIORITY 40
#define CONFIG_PINCTRL_STORE_REG 1
#define CONFIG_PINCTRL_NRF 1
#define CONFIG_REGULATOR_FIXED 1
#define CONFIG_REGULATOR_FIXED_INIT_PRIORITY 75
#define CONFIG_SENSOR_INIT_PRIORITY 90
#define CONFIG_LSM6DSL 1
#define CONFIG_LSM6DSL_TRIGGER_NONE 1
#define CONFIG_LSM6DSL_GYRO_FS 0
#define CONFIG_LSM6DSL_GYRO_ODR 0
#define CONFIG_LSM6DSL_ACCEL_FS 0
#define CONFIG_LSM6DSL_ACCEL_ODR 0
#define CONFIG_TEMP_NRF5_FORCE_ALT 1
#define CONFIG_TEMP_NRF5 1
#define CONFIG_TMP112_FULL_SCALE_RUNTIME 1
#define CONFIG_TMP112_SAMPLING_FREQUENCY_RUNTIME 1
#define CONFIG_VCMP_IT8XXX2_INIT_PRIORITY 90
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_SYSTEM_TIMER_HAS_DISABLE_SUPPORT 1
#define CONFIG_NRF_RTC_TIMER_LOCK_ZERO_LATENCY_IRQS 1
#define CONFIG_SYSTEM_CLOCK_WAIT_FOR_STABILITY 1
#define CONFIG_USB_DEVICE_DRIVER 1
#define CONFIG_USB_DEVICE_REMOTE_WAKEUP 1
#define CONFIG_USB_NRFX 1
#define CONFIG_USB_NRFX_EVT_QUEUE_SIZE 32
#define CONFIG_USB_NRFX_WORK_QUEUE_STACK_SIZE 1024
#define CONFIG_USB_NRFX_ATTACHED_EVENT_DELAY 0
#define CONFIG_SUPPORT_MINIMAL_LIBC 1
#define CONFIG_PICOLIBC_SUPPORTED 1
#define CONFIG_NEWLIB_LIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_NEWLIB_LIBC_MIN_REQUIRED_HEAP_SIZE 2048
#define CONFIG_CPP 1
#define CONFIG_STD_CPP11 1
#define CONFIG_MINIMAL_LIBCPP 1
#define CONFIG_CPP_STATIC_INIT_GNU 1
#define CONFIG_NOTIFY 1
#define CONFIG_CRC 1
#define CONFIG_ONOFF 1
#define CONFIG_REBOOT 1
#define CONFIG_CBPRINTF_COMPLETE 1
#define CONFIG_CBPRINTF_FULL_INTEGRAL 1
#define CONFIG_CBPRINTF_N_SPECIFIER 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_SYS_HEAP_SMALL_ONLY 1
#define CONFIG_MAX_TIMER_COUNT 5
#define CONFIG_TIMER_CREATE_WAIT 100
#define CONFIG_PRINTK 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_NVS 1
#define CONFIG_NET_BUF 1
#define CONFIG_NETWORKING 1
#define CONFIG_NET_L2_PHY_IEEE802154 1
#define CONFIG_NET_L2_OPENTHREAD 1
#define CONFIG_OPENTHREAD_SOURCES 1
#define CONFIG_OPENTHREAD_LOG_LEVEL 0
#define CONFIG_OPENTHREAD_L2_LOG_LEVEL 0
#define CONFIG_OPENTHREAD_THREAD_PRIORITY 8
#define CONFIG_OPENTHREAD_PKT_LIST_SIZE 10
#define CONFIG_OPENTHREAD_PLATFORM_INFO "ZEPHYR"
#define CONFIG_OPENTHREAD_CUSTOM_PARAMETERS ""
#define CONFIG_OPENTHREAD_NUM_MESSAGE_BUFFERS 128
#define CONFIG_OPENTHREAD_MESSAGE_BUFFER_SIZE 128
#define CONFIG_OPENTHREAD_MAX_STATECHANGE_HANDLERS 2
#define CONFIG_OPENTHREAD_TMF_ADDRESS_CACHE_ENTRIES 20
#define CONFIG_OPENTHREAD_MAC_SOFTWARE_ACK_TIMEOUT_ENABLE 1
#define CONFIG_OPENTHREAD_MAC_SOFTWARE_RETRANSMIT_ENABLE 1
#define CONFIG_OPENTHREAD_MAC_SOFTWARE_CSMA_BACKOFF_ENABLE 1
#define CONFIG_NET_IP 1
#define CONFIG_NET_NATIVE 1
#define CONFIG_NET_NATIVE_IPV6 1
#define CONFIG_NET_NATIVE_UDP 1
#define CONFIG_NET_INIT_PRIO 90
#define CONFIG_NET_IP_DSCP_ECN 1
#define CONFIG_NET_IF_MAX_IPV6_COUNT 1
#define CONFIG_NET_IF_UNICAST_IPV6_ADDR_COUNT 6
#define CONFIG_NET_IF_MCAST_IPV6_ADDR_COUNT 8
#define CONFIG_NET_IF_IPV6_PREFIX_COUNT 2
#define CONFIG_NET_INITIAL_HOP_LIMIT 64
#define CONFIG_NET_IPV6_MAX_NEIGHBORS 8
#define CONFIG_NET_IPV6_LOG_LEVEL 0
#define CONFIG_NET_ICMPV6_LOG_LEVEL 0
#define CONFIG_NET_IPV6_NBR_CACHE_LOG_LEVEL 0
#define CONFIG_NET_TC_TX_COUNT 0
#define CONFIG_NET_TC_RX_COUNT 1
#define CONFIG_NET_TC_THREAD_COOPERATIVE 1
#define CONFIG_NET_TC_NUM_PRIORITIES 16
#define CONFIG_NET_TC_MAPPING_STRICT 1
#define CONFIG_NET_TX_DEFAULT_PRIORITY 1
#define CONFIG_NET_RX_DEFAULT_PRIORITY 0
#define CONFIG_NET_IP_ADDR_CHECK 1
#define CONFIG_NET_MAX_ROUTERS 1
#define CONFIG_NET_UDP 1
#define CONFIG_NET_UDP_LOG_LEVEL 0
#define CONFIG_NET_MAX_CONN 4
#define CONFIG_NET_MAX_CONTEXTS 6
#define CONFIG_NET_CONTEXT_SYNC_RECV 1
#define CONFIG_NET_CONTEXT_CHECK 1
#define CONFIG_NET_CONTEXT_DSCP_ECN 1
#define CONFIG_NET_BUF_RX_COUNT 16
#define CONFIG_NET_BUF_TX_COUNT 16
#define CONFIG_NET_BUF_FIXED_DATA_SIZE 1
#define CONFIG_NET_BUF_DATA_SIZE 128
#define CONFIG_NET_PKT_BUF_USER_DATA_SIZE 4
#define CONFIG_NET_DEFAULT_IF_FIRST 1
#define CONFIG_NET_TX_STACK_SIZE 1200
#define CONFIG_NET_RX_STACK_SIZE 1500
#define CONFIG_NET_PKT_LOG_LEVEL 0
#define CONFIG_NET_DEBUG_NET_PKT_EXTERNALS 0
#define CONFIG_NET_CORE_LOG_LEVEL 0
#define CONFIG_NET_IF_LOG_LEVEL 0
#define CONFIG_NET_TC_LOG_LEVEL 0
#define CONFIG_NET_UTILS_LOG_LEVEL 0
#define CONFIG_NET_CONTEXT_LOG_LEVEL 0
#define CONFIG_NET_CONN_LOG_LEVEL 0
#define CONFIG_NET_ROUTE_LOG_LEVEL 0
#define CONFIG_NET_HTTP_LOG_LEVEL 0
#define CONFIG_NET_CONFIG_AUTO_INIT 1
#define CONFIG_NET_CONFIG_INIT_PRIO 95
#define CONFIG_NET_CONFIG_LOG_LEVEL 0
#define CONFIG_PM_S2RAM 1
#define CONFIG_PM_POLICY_DEFAULT 1
#define CONFIG_PM_DEVICE_POWER_DOMAIN 1
#define CONFIG_PM_DEVICE_RUNTIME 1
#define CONFIG_PM_DEVICE_RUNTIME_EXCLUSIVE 1
#define CONFIG_ENTROPY_DEVICE_RANDOM_GENERATOR 1
#define CONFIG_CSPRING_ENABLED 1
#define CONFIG_HARDWARE_DEVICE_CS_GENERATOR 1
#define CONFIG_SETTINGS 1
#define CONFIG_SETTINGS_DYNAMIC_HANDLERS 1
#define CONFIG_SETTINGS_NVS 1
#define CONFIG_SETTINGS_NVS_SECTOR_SIZE_MULT 1
#define CONFIG_SETTINGS_NVS_SECTOR_COUNT 8
#define CONFIG_FLASH_MAP 1
#define CONFIG_COVERAGE_GCOV_HEAP_SIZE 16384
#define CONFIG_USB_DEVICE_STACK 1
#define CONFIG_USB_DEVICE_VID 0x2FE3
#define CONFIG_USB_DEVICE_PID 0x0100
#define CONFIG_USB_DEVICE_MANUFACTURER "ZEPHYR"
#define CONFIG_USB_DEVICE_PRODUCT "USB-DEV"
#define CONFIG_USB_DEVICE_SN "0123456789ABCDEF"
#define CONFIG_USB_MAX_NUM_TRANSFERS 4
#define CONFIG_USB_REQUEST_BUFFER_SIZE 128
#define CONFIG_USB_MAX_ALT_SETTING 8
#define CONFIG_USB_NUMOF_EP_WRITE_RETRIES 3
#define CONFIG_USB_SELF_POWERED 1
#define CONFIG_USB_MAX_POWER 50
#define CONFIG_TOOLCHAIN_ZEPHYR_0_16 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_USE_DT_CODE_PARTITION 1
#define CONFIG_FLASH_LOAD_OFFSET 0x27000
#define CONFIG_FLASH_LOAD_SIZE 0xc5000
#define CONFIG_LD_LINKER_SCRIPT_SUPPORTED 1
#define CONFIG_LD_LINKER_TEMPLATE 1
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_SRAM_OFFSET 0x0
#define CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT 1
#define CONFIG_LINKER_LAST_SECTION_ID 1
#define CONFIG_LINKER_LAST_SECTION_ID_PATTERN 0xE015E015
#define CONFIG_LINKER_USE_RELAX 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_COLOR_DIAGNOSTICS 1
#define CONFIG_FORTIFY_SOURCE_COMPILE_TIME 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_DISASSEMBLY 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_BUILD_OUTPUT_UF2 1
#define CONFIG_BUILD_OUTPUT_UF2_FAMILY_ID "0xada52840"
#define CONFIG_BUILD_OUTPUT_STRIP_PATHS 1
#define CONFIG_WARN_DEPRECATED 1
#define CONFIG_ENFORCE_ZEPHYR_STDINT 1
#define CONFIG_COMPAT_INCLUDES 1
