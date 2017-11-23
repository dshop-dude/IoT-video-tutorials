#include <ESP8266WiFi.h>

const int mac_array_size = 6;
uint8_t MAC_array[mac_array_size];
char MAC_char[18];

void setup() {
    Serial.begin(115200);
    Serial.println();

    WiFi.macAddress(MAC_array);
    for (int i = 0; i < mac_array_size; ++i){
      sprintf(MAC_char,"%s%02x:",MAC_char,MAC_array[i]);
    }
    MAC_char[17] = '\0';

    Serial.print("Device MAC address is [");
    Serial.print(MAC_char);
    Serial.println("]");
}

void loop() {
  
} 
