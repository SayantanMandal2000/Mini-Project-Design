
#include <LiquidCrystal.h>
#define sensorAnalog A1  //Analog Pin sensor is connected to for MQ3
#define dht_apin A0 // Analog Pin sensor is connected to for DHT11

const int Mq3_th=400;  //Threshold value accordingly from MQ3 Sensor


LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Create an LCD object.

 
void setup()
{
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing DHT11 Sensor
  //MQ3 Sensor
  //pinMode(sensorDigital, INPUT);
  Serial.begin(9600);
  //LCD 16x2
  lcd.begin(16,2); // Initialize the LCD

   lcd.setCursor(2,0);
    lcd.print("Smart Food");
   lcd.setCursor(3,1);
    lcd.print("Monitoring");

  Serial.begin(9600);
}


void loop()
{
    
  // MQ3 Sensor
  //bool digital = digitalRead(sensorDigital);
  int analog = analogRead(sensorAnalog);

  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("\t");
  //LCD 16x2
  /*
  lcd.setCursor(0,0);
  lcd.print("T:");
  lcd.print(t);
  lcd.print((char)223); //shows degrees character
  lcd.print("C");

  lcd.setCursor(15,0);
  lcd.print("H: ");
  lcd.print(h);
  lcd.print("%");

  lcd.setCursor(0,1);
  lcd.print("Alc:");
  lcd.print(analog);
  lcd.print("ppm");
*/

  if(analog>Mq3_th)
  {
    float mq3_diff=(float)(analog-Mq3_th)/Mq3_th;
    float avg=((float)mq3_diff)/2)*100;
    lcd.setCursor(3,0);
    lcd.print(" Rotten !!!! ");
    lcd.setCursor(1,1);
    lcd.print(avg);
    lcd.print("% Rotten");
  }


   else if(analog<Mq3_th)
  {
    float mq3_diff=(float)(Mq3_th-analog)/Mq3_th;
    float avg=((float)mq3_diff)/2)*100;
    lcd.setCursor(1,0);
    lcd.print(avg);
    lcd.print("% Fresh");
  }

  else if(analog<Mq3_th)
  {
    lcd.setCursor(1,0);
    lcd.print("Decomposition");
    lcd.setCursor(1,1);
    lcd.print("Started!!!!");
  }

  
  delay(2000);
  
}
