**DHT11 Sensor with Arduino Code**

![image](https://user-images.githubusercontent.com/83362170/162796335-58499f4d-a0c6-4a81-890d-995770da2a01.png)


The DHT11 humidity and temperature sensor make it really easy to add humidity and temperature data to your DIY electronics projects. It’s perfect for remote weather stations, home environmental control systems, and farm or garden monitoring systems.

**DHT11 Sensor**

![image](https://user-images.githubusercontent.com/83362170/162797709-afa4dda3-5ad0-479a-a6c4-55c44c8b9f63.png)

![image](https://user-images.githubusercontent.com/83362170/162797741-ab7204bf-d3f1-4f1d-86df-0fbe4e40b858.png)


The DHT11 is a basic, ultra low-cost digital temperature and humidity sensor. It uses a capacitive humidity sensor and a thermistor to measure the surrounding air and spits out a digital signal on the data pin (no analog input pins needed). Its fairly simple to use, but requires careful timing to grab data. The only real downside of this sensor is you can only get new data from it once every 2 seconds, the sensor readings can be up to 2 seconds old.
*Technical Details
Low cost
3 to 5V power and I/O
2.5mA max current use during conversion (while requesting data)
Good for 20-80% humidity readings with 5% accuracy
Good for 0-50°C temperature readings ±2°C accuracy
No more than 1 Hz sampling rate (once every second)
Body size 15.5mm x 12mm x 5.5mm
4 pins with 0.1" spacing*

**How the DHT11 Measures Humidity and Temperature**

The DHT11 detects water vapor by measuring the electrical resistance between two electrodes. The humidity sensing component is a moisture holding substrate with electrodes applied to the surface. When water vapor is absorbed by the substrate, ions are released by the substrate which increases the conductivity between the electrodes. The change in resistance between the two electrodes is proportional to the relative humidity. Higher relative humidity decreases the resistance between the electrodes, while lower relative humidity increases the resistance between the electrodes.
The DHT11 measures temperature with a surface mounted NTC temperature sensor (thermistor) built into the unit. To learn more about how thermistors work and how to use them on the Arduino, check out this Arduino Thermistor Temperature Sensor Tutorial.With the plastic housing removed, you can see the electrodes applied to the substrate:
An IC mounted on the back of the unit converts the resistance measurement to relative humidity. It also stores the calibration coefficients, and controls the data signal transmission between the DHT11 and the Arduino:
The DHT11 uses just one signal wire to transmit data to the Arduino. Power comes from separate 5V and ground wires. A 10K Ohm pull-up resistor is needed between the signal line and 5V line to make sure the signal level stays high by default (see the datasheet for more info).
There are two different versions of the DHT11 you might come across. One type has four pins, and the other type has three pins and is mounted to a small PCB. The PCB mounted version is nice because it includes a surface mounted 10K Ohm pull up resistor for the signal line. Here are the pinouts for both versions:

![image](https://user-images.githubusercontent.com/83362170/162795965-8b5925ea-0e3f-4706-84cf-8a10e878c7bc.png)

**Circuit Diagram**

![image](https://user-images.githubusercontent.com/83362170/162796089-a3766790-3663-4a96-b08f-0a6221acfff9.png)

*with LCD*

![image](https://user-images.githubusercontent.com/83362170/162798039-676aa832-42fe-41a2-89b5-985d1681d416.png)
