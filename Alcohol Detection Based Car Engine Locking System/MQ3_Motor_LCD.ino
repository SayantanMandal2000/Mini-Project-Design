#include <LiquidCrystal.h> 

#define sensorDigital 10
#define LED 13
#define buzzer 12
#define sensorAnalog A1

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int motor1pin1 = 6;
int motor1pin2 = 7;

void setup() 
{
  pinMode(sensorDigital, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);

  lcd.begin(16,2); 
  lcd.setCursor(0,0);
  lcd.print("Intelligent");
  lcd.setCursor(0,1);
  lcd.print("Engine Locking");
  Serial.begin(9600);
}

void loop() 
{
  bool digital = digitalRead(sensorDigital);
  int analog = analogRead(sensorAnalog);

  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("\t");
  Serial.print("Digital value :");
  Serial.println(digital);

  if (digital == 0) 
  {
    digitalWrite(LED, HIGH);
    digitalWrite(buzzer, HIGH);

    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);

    lcd.setCursor(0,0);
    lcd.print("Alcohol Detected");
    lcd.setCursor(1,1);
    lcd.print("Conc:");
    lcd.print(analog);
    lcd.print(" ppm");
  } 
  
  else 
  {
    digitalWrite(LED, LOW);
    digitalWrite(buzzer, LOW);

    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
    
    lcd.setCursor(0,0);
    lcd.print("No Alcohol");
  
  }
  
}
