int modulePin = A0;
int greenLED = 6;
int yellowLED = 7;
int thresholdValue = 800;

void setup() {
  pinMode(modulePin, INPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  Serial.begin(9600);
}

void loop() {

  // Initialize input taken from analog pin 0
  int sensorValue = analogRead(modulePin);

  Serial.print("Sensor value: ");
  Serial.print(sensorValue);

  // Prints high humidity on serial monitor if input is higher than initialized threshold value (800) + turns on green LED
  if(sensorValue < thresholdValue){
    Serial.println(" - High humidity");
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, HIGH);
  }
  // Prints low humidity on serial monitor + turns on yellow LED
  else {
    Serial.println(" - Low humidity");
    digitalWrite(yellowLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
  delay(500);
}


