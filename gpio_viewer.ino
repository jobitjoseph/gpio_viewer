#include <WiFi.h>
#include "src/gpio_viewer.h"
#include "secrets.h"

// You can view GPIO pins of choice using defaults:  50ms interval and showed on port 8080
// const int gpioPins[] = {13,9,10,11}; // Example GPIO pins
// const int numPins = sizeof(gpioPins) / sizeof(gpioPins[0]);
// GPIOViewer gpio_viewer(gpioPins,4);

// All GPIO Pins monitored using defaults : 50ms interval and showed on port 8080
GPIOViewer gpio_viewer(ESP32_D1_R32);

int test_pins[] = {5,4};
const int testPinsCount = sizeof(test_pins) / sizeof(test_pins[0]);

void setup()
{
  Serial.begin(115200);

  gpio_viewer.connectToWifi(ssid, password); // If your code aleady include connection to Wifi, you can comment this line
  // gpio_viewer.setPort(5555);             // You can set the http port
  gpio_viewer.setSamplingInterval(100); // You can set the sampling interval in ms
  gpio_viewer.begin();

  // Your own setup code start here
  for (int i = 0; i < testPinsCount; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for (int i = 0; i < testPinsCount; i++)
  {
    digitalWrite(test_pins[i], HIGH);
  }
  delay(500);
  for (int i = 0; i < testPinsCount; i++)
  {
    digitalWrite(test_pins[i], LOW);
  }
  delay(500);
}
