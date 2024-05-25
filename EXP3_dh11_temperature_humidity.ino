#include <dht.h>

dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop(){
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("\nTemperature = ");
  Serial.print(DHT.temperature);
  Serial.print(" C ");
  Serial.print("  Humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("%   ");
  delay(1000);
}

