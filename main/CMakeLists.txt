idf_component_register(
    SRCS
        "main.cpp"
        "BeaconFSM.cpp"
        "Settings.cpp"
        "WebServer.cpp"
    REQUIRES 
        cxx
        # ESP-IDF Framework Components
        esp_driver_gpio
        esp_driver_i2c
        esp_netif
        esp_system
        esp_timer
        esp_event
        esp_http_server
        esp_wifi 
        json
        lwip 
 	mbedtls
        mdns
        nvs_flash 
        spiffs

        # Local Project Components
        dns-server
        jtencode
        si5351
    INCLUDE_DIRS 
        "."
)
