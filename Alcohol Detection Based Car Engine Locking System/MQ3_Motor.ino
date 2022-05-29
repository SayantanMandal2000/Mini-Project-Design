#define sensorDigital 2
#define LED 3
#define buzzer 4
#define sensorAnalog A1

int motor1pin1 = 2;
int motor1pin2 = 3;

int motor2pin1 = 4;
int motor2pin2 = 5;

void setup() {
  pinMode(sensorDigital, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
}

void loop() {
  bool digital = digitalRead(sensorDigital);
  int analog = analogRead(sensorAnalog);

  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("\t");
  Serial.print("Digital value :");
  Serial.println(digital);

  if (digital == 0) {
    digitalWrite(LED, HIGH);
    digitalWrite(buzzer, HIGH);

    digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  } 
  
  else {
    digitalWrite(LED, LOW);
    digitalWrite(buzzer, LOW);

    digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  }
}