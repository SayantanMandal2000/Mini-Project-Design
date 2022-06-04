#include <ThingSpeak.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

#define sensorDigital 0
//float Turbidity_Sensor_Voltage;
//int samples = 600;
//float ntu;
#define sensorAnalog A0
int digital;
int analog = analogRead(sensorAnalog);

//int analog = analogRead(sensorAnalog);

//----------- Enter you Wi-Fi Details---------//
char ssid[] = "Redmi7A"; //SSID
char pass[] = "20032003"; // Password
//-------------------------------------------//



//-------------------------------------------//


//------------------//

//----------- Channel Details -------------//
unsigned long Channel_ID = 1757634; // Channel ID
const int Field_number1 = 1;// To which field to write data (don't change)
const int Field_number2 = 2;
const char * WriteAPIKey = "TL8O6G9HFEPRGIQ0"; // Your write API Key
// ----------------------------------------//

//#define trig D0
//#define echo D1

WiFiClient  client;


void setup()
{
  Serial.begin(115200);
  //pinMode(trig, OUTPUT);
  //pinMode(echo, INPUT);
  WiFi.mode(WIFI_STA);
  ThingSpeak.begin(client);
 
}
void loop()
{
  internet();
 
  measure();
 
  upload();
}
void upload()
{
  internet();
   ThingSpeak.writeField(Channel_ID, Field_number1,digital, WriteAPIKey);
   ThingSpeak.writeField(Channel_ID, Field_number2,analog, WriteAPIKey);
 
}

void measure()
{
 

int digital;
int analog = analogRead(sensorAnalog);

  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("\t");
  //Serial.print("Digital value :");
  //Serial.println(digital);

  if (analog > 350) 
  {
    //digitalWrite(LED, HIGH);
    //digitalWrite(buzzer, HIGH);

    //digitalWrite(motor1pin1, LOW);
    //digitalWrite(motor1pin2, LOW);

    //lcd.setCursor(0,0);
    Serial.println("Alcohol Detected ");
    //lcd.setCursor(1,1);
    Serial.print("Conc:");
    Serial.print(analog);
    Serial.print(" ppm");
    digital = 1;
  Serial.print("Digital value :");
  Serial.println(digital);
  } 
  
  else
  {
    //digitalWrite(LED, LOW);
    //digitalWrite(buzzer, LOW);

    //digitalWrite(motor1pin1, HIGH);
    //digitalWrite(motor1pin2, LOW);
    
    //lcd.setCursor(0,0);
    Serial.print("No Alcohol ");
    digital = 0;
    Serial.print("Digital value :");
  Serial.println(digital);
  }
  
}


void internet()
{
  if (WiFi.status() != WL_CONNECTED)
  {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    while (WiFi.status() != WL_CONNECTED)
    {
      WiFi.begin(ssid, pass);
      Serial.print(".");
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
}
