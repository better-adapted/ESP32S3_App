# CMakeFiles.txt inside "ESP32S3_App" folder
cmake_minimum_required(VERSION 3.5)
idf_component_register(SRCS ""
                    INCLUDE_DIRS "."
                    REQUIRES "arduino" "wifi_provisioning" "nvs_flash" "qrcode"
                    )

project(ESP32S3_App)