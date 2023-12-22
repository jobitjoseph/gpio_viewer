# GPIOViewer Arduino Library to see live GPIO Pins on ESP32 boards

**Transforms the way you troubleshoot your microcontroller projects**.

### Youtube Tutorial

### Installation

- Downnload the code and install the library in the Arduino IDE : `Sketch > Include Library > Add ZIP Library...`
- Install the [ESPAsyncWebServer](https://github.com/me-no-dev/ESPAsyncWebServer) library in the same way `Sketch > Include Library > Add ZIP Library...`
- Install the the [AsyncTCP](https://github.com/dvarrel/AsyncTCP) using the Arduino IDE Library Manager.

### Usage
>ℹ️ You can also use get examples provided with the library in the Arduino IDE through the menu `File > Examples > GPIOViewer`<br>
>ℹ️ You only need to include the library, declare the GPIOViewer and call begin() at the end of your setup, and that's it!<br>
>ℹ️ The URL to the web GPIO viewer application is printed on the serial monitor<br>
```c
#include <gpio_viewer.h> // Must me the first include in your project
GPIOViewer gpio_viewer;

void setup()
{
  Serial.begin(115200);

  // Comment the next line, If your code aleady include connection to Wifi
  gpio_viewer.connectToWifi("Your SSID network", "Your WiFi Password");
  // gpio_viewer.setPort(5555);   // You can set the http port, if not set default port is 8080

  // Your own setup code start here

  // Must be at the end of your setup
  // gpio_viewer.setSamplingInterval(25); // You can set the sampling interval in ms, if not set default is 50ms
  gpio_viewer.begin();
}
```
>ℹ️ The default HTTP port is **8080** and default sampling interval is **50ms**.

### Request an ESP32 board image addition

You can request an ESP32 board image addition by [creating a new issue](https://github.com/thelastoutpostworkshop/gpio_viewer/issues).

### Library Size

- The GPIOViewer Library adds 50 KB to your projects.
- No worries!  All the assets (ex. board images) of the web application are loaded from github pages and don't add to the size of your projects.

### GPIO Supported

- Digital
- PWM

### ESP32 Boards Supported
| Description        | Image                               |
|--------------------|-------------------------------------|
| ESP32 VROOM 32D  | ![](https://github.com/thelastoutpostworkshop/microcontroller_devkit/blob/main/gpio_viewer/assets/devboards_images/ESP32-VROOM-32D.png)              |
| Description of 2   | ![](URL_of_image2.png)              |
| Description of 3   | ![](URL_of_image3.png)              |
| ...                | ...                                 |


