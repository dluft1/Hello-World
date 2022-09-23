// I Darius Luft, 000798737, certify that all code submitted is my own work; that I have not copied it from any other source. I also certify that I have not allowed my work to be copied by others. 
#include <Arduino.h>

unsigned long myTime;
unsigned long flashID;
unsigned long espID;

void setup() {
  Serial.begin(115200);
  flashID = ESP.getFlashChipId();
  espID = ESP.getChipId();
  Serial.println("Darius Luft, 000798737\n");
  Serial.println("ESP8266 Chip id: ");
  Serial.println(espID);
  Serial.println("\n\nFlash Chip id: ");
  Serial.println(flashID);
}

void loop() {
  myTime = millis();

  Serial.println(myTime);
  Serial.println("Miliseconds");

  delay(2000);

}