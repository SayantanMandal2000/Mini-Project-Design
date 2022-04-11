**MQ3 alcohol sensor Arduino code**


**The structure of MQ3 sensor**


These sensors are made of iron mesh on the surface and a plastic cover on the outside. Also, these sensors are designed so that only gaseous elements can travel inside. These are also known as heater-driven sensors. If we talk about the interior of these sensors, there are 6 legs connected to the sensing element. Two of these six legs are used to heat the sensing element. Also, these are connected via a nickel-chromium coil. The other 4 legs are connected to the body of the sensing element using the platinum element. If we talk about this sensing element, it is made of ceramic containing aluminum oxide and coated with tin dioxide on the outside. Also, these tin dioxides are very sensitive to alcohol. The ceramic substrate here controls the heat as needed.
![image](https://user-images.githubusercontent.com/83362170/162793795-e772167e-d474-4388-a370-f3ce12dea762.png)

![image](https://user-images.githubusercontent.com/83362170/162793828-d45f108b-0703-4dee-8b2d-d3e5861b88b9.png)

![image](https://user-images.githubusercontent.com/83362170/162793839-0a75f8ec-aaed-4b35-8ef1-98cef9be5a49.png)

**Sensor activation on clean air**


The tin dioxide-coated sensing element (we talked about above) absorbs oxygen to the surface when heated to a high temperature. When fresh air enters the sensor, electrons are attracted to oxygen molecules from the tin dioxide zone. Then a layer of electron decay forms below the tin dioxide particles. Also, a potential barrier is created. The tin dioxide film then blocks the flow of electric current. So, the output voltage decreases.


**Sensor activation on alcohol.**


When the alcohol mixture is brought close to the air sensor, it reacts with the tin dioxide, reducing the surface absorption of oxygen. Then the potential barrier decreases. The electrons are then released into the tin dioxide. Then the current flows freely. So, the output voltage increases.
We can get this output voltage in the form of analog input and digital input. That task is performed by the module to which this sensor is connected. The Potentiometer in this module can also change the sensitivity of the digital input.


![image](https://user-images.githubusercontent.com/83362170/162794014-faf82fc5-0867-4924-803c-77f3b3abd94b.png)


**Circuit Diagram**


![image](https://user-images.githubusercontent.com/83362170/162794095-fb2f92c5-39db-46d3-b7fa-cff45731fb10.png)
