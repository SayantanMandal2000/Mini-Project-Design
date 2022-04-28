#include <dht.h>
#include <LiquidCrystal.h>  // Include LiquidCrystal Library
//MQ-3 sensor with arduino.
#define sensorDigital 2
#define sensorAnalog A1

#define dht_apin A0 // Analog Pin sensor is connected to for DHT11
dht DHT;

 LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Create an LCD object.

 
void setup()
{
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing DHT11 Sensor
  //MQ3 Sensor
  pinMode(sensorDigital, INPUT);
  Serial.begin(9600);
  //LCD 16x2
  lcd.begin(16,2); // Initialize the LCD

   lcd.setCursor(1,0);
    lcd.print("SmarT Food");
   lcd.setCursor(3,1);
    lcd.print("Monitoring");

  Serial.begin(9600);
}//end "setup()"
 
void loop()
{
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
    delay(5000);//Wait 5 seconds before accessing sensor again.
 
  //Fastest should be once every two seconds.
  // MQ3 Sensor
  bool digital = digitalRead(sensorDigital);
  int analog = analogRead(sensorAnalog);

  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("\t");
  Serial.print("Digital value :");
  Serial.println(digital);
  if (digital) 
  {
    Serial.println(" Alcohol: -");
  } 
  else
  {
    Serial.println("  Alcohol: Detected!");
  }
  
  //LCD 16x2
  int readData = DHT.read11(dht_apin);
  
  float t = DHT.temperature;
  float h = DHT.humidity;
  
  lcd.setCursor(0,0);
  lcd.print("Temp.: ");
  lcd.print(t);
  lcd.print((char)223); //shows degrees character
  lcd.print("C");

  lcd.setCursor(15,0);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");

  lcd.setCursor(0,1);
  lcd.print("Alcoohol conc,:");
  lcd.print(analog);
  lcd.print(" ppm");

  
  delay(2000);

  
}// end loop
