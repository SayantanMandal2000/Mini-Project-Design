**LCD Code on Arduino**

16×2(1602) but any character LCDs (for example, 16×4, 16×1, 20×4 etc.) that are based on parallel interface LCD controller chip from Hitachi called the HD44780. Because, the Arduino community has already developed a library to handle HD44780 LCDs; so we’ll have them interfaced in no time.
[An LCD is short for Liquid Crystal Display. It is basically a display unit which uses liquid crystals to produce a visible image.
When current is applied to this special kind of crystal, it turns opaque blocking the backlight that lives behind the screen. As a result that particular area will become dark compared to other. And that’s how characters are displayed on the screen.]

![image](https://user-images.githubusercontent.com/83362170/162798879-3e7cb553-2665-45db-9eb7-331515685f6e.png)

GND should be connected to the ground of Arduino.

VCC is the power supply for the LCD which we connect the 5 volts pin on the Arduino.

Vo (LCD Contrast) controls the contrast and brightness of the LCD. Using a simple voltage divider with a potentiometer, we can make fine adjustments to the contrast.

RS (Register Select) pin lets the Arduino tell the LCD whether it is sending commands or the data. Basically this pin is used to differentiate commands from the data.

For example, when RS pin is set to LOW, then we are sending commands to the LCD (like set the cursor to a specific location, clear the display, scroll the display to the right and so on). And when RS pin is set on HIGH we are sending data/characters to the LCD.

R/W (Read/Write) pin on the LCD is to control whether or not you’re reading data from the LCD or writing data to the LCD. Since we’re just using this LCD as an OUTPUT device, we’re going to tie this pin LOW. This forces it into the WRITE mode.

E (Enable) pin is used to enable the display. Meaning, when this pin is set to LOW, the LCD does not care what is happening with R/W, RS, and the data bus lines; when this pin is set to HIGH, the LCD is processing the incoming data.

D0-D7 (Data Bus) are the pins that carries the 8 bit data we send to the display. For example, if we want to see the uppercase ‘A’ character on the display we will set these pins to 0100 0001(according to the ASCII table) to the LCD.

A-K (Anode & Cathode) pins are used to control the backlight of the LCD.

**Circuit Diagram**

![image](https://user-images.githubusercontent.com/83362170/162799220-6528cd4d-40ac-4940-a887-bf1b78ac2f96.png)

To move the cursor, just call setCursor() with a row and column position. For example, for a 2x16 display:

lcd.setCursor(0, 0); // top left

lcd.setCursor(15, 0); // top right

lcd.setCursor(0, 1); // bottom left

lcd.setCursor(15, 1); // bottom right

![image](https://user-images.githubusercontent.com/83362170/165798358-408d990b-4bf8-4fef-aae0-d94ff870bb87.png)

