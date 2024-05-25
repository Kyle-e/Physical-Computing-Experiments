int redPin= 7;
int greenPin = 6;
int bluePin = 5;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  setColor(0, 255, 0); // Green Color
  delay(3000);
  setColor(235, 235, 0); // Yellow Color
  delay(500);
  //Blink 
  setColor(0, 0, 0);
  delay(500);
  setColor(235, 235, 0);
  delay(500);
  setColor(0, 0, 0);
  delay(500);
  setColor(235, 235, 0);
  delay(500);
  setColor(0, 0, 0);
  delay(500);
  setColor(235, 235, 0);
  delay(500);
  setColor(255, 0, 0); // Red Color
  delay(5000);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}

