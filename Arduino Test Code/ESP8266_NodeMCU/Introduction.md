![image](https://user-images.githubusercontent.com/83362170/164504682-7f9d74c3-e34f-4234-b525-a475ba933bf6.png)

**NodeMCU ESP8266 Specifications & Features**
Microcontroller: Tensilica 32-bit RISC CPU Xtensa LX106
Operating Voltage: 3.3V
Input Voltage: 7-12V
Digital I/O Pins (DIO): 16
Analog Input Pins (ADC): 1
UARTs: 1
SPIs: 1
I2Cs: 1
Flash Memory: 4 MB
SRAM: 64 KB
Clock Speed: 80 MHz
USB-TTL based on CP2102 is included onboard, Enabling Plug n Play
PCB Antenna
Small Sized module to fit smartly inside your IoT projects

**The NodeMCU ESP8266** development board comes with the ESP-12E module containing the ESP8266 chip having Tensilica Xtensa 32-bit LX106 RISC microprocessor. This microprocessor supports RTOS and operates at 80MHz to 160 MHz adjustable clock frequency. NodeMCU has 128 KB RAM and 4MB of Flash memory to store data and programs. Its high processing power with in-built Wi-Fi / Bluetooth and Deep Sleep Operating features make it ideal for IoT projects.
NodeMCU can be powered using a Micro USB jack and VIN pin (External Supply Pin). It supports UART, SPI, and I2C interface.

![image](https://user-images.githubusercontent.com/83362170/164504513-996cc388-125a-4085-b033-21c4e438ac69.png)

How to program NodeMCU using Arduino IDE
In order to use Arduino IDE to program the NodeMCU, you have to introduce it to the software at first.

To do this copy the following code and follow the steps below:

http://arduino.esp8266.com/stable/package_esp8266com_index.json

step1. Choose Preferences in the File menu and enter the copied code in Additional Board Manager URLs part. Then press OK.

![image](https://user-images.githubusercontent.com/83362170/164505423-c03a1cef-715e-4aaa-87a7-f79732114201.png)

![image](https://user-images.githubusercontent.com/83362170/164982212-bde7b003-bee6-484b-9cbc-98c7298ed657.png)

https://www.hackster.io/RoboticaDIY/send-data-from-arduino-to-nodemcu-and-nodemcu-to-arduino-17d47a



Step2. Search the word ESP8266 in Boards>boards manager from Tools menu. Then install ESP8266 boards. After complete installation, you will see the INSTALLED label on ESP8266 boards.

![image](https://user-images.githubusercontent.com/83362170/164505508-6d01dc29-b623-4d66-9486-e9ac397fa1e2.png)

After these two steps, you can see ESP8266 based boards such as NodeMCU in your Arduino IDE boards list, and you can choose your desired board to upload the code.

![image](https://user-images.githubusercontent.com/83362170/164505570-376e91f3-656d-44ad-ad43-583b675ec815.png)

![image](https://user-images.githubusercontent.com/83362170/164505596-3c97e477-12c6-413c-81a7-a69f3b963141.png)

Controlling LED through an HTTP page Using NodeMCU
You can connect the internet through Wi-Fi using NodeMCU, and apply your desired commands by creating an HTTP page.

In this example, you can control an LED by pressing the ON and OFF key.

Enter your modems SSID and password in the provided part and upload it on your NodeMCU board using Arduino IDE. (Leave other settings to the default)

![image](https://user-images.githubusercontent.com/83362170/164982347-2b2a980a-8923-4811-a028-d70a043ad692.png)

![image](https://user-images.githubusercontent.com/83362170/164982358-81dffff7-9e74-400e-88e7-1d38510359f0.png)

![image](https://user-images.githubusercontent.com/83362170/164982369-67792361-52bd-416f-88c0-90a2f0b65a8d.png)

https://www.hackster.io/RoboticaDIY/send-data-from-arduino-to-nodemcu-and-nodemcu-to-arduino-17d47a

![image](https://user-images.githubusercontent.com/83362170/165785578-ab93c30b-d9d1-4310-845e-a08769ce52bc.png)

https://create.arduino.cc/projecthub/PatelDarshil/how-to-communicate-with-esp8266-via-arduino-uno-f6e92f

![uno_esp_connection_hO79gxjiVX](https://user-images.githubusercontent.com/83362170/166961875-7e265633-9c62-482d-b3dd-1be5a2457461.png)
