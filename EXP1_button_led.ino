int ledpin=13;
int btnpin=2;

volatile int state = LOW;

void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(btnpin, INPUT);
}

void loop()
{
  if(digitalRead(btnpin)==LOW)
     {
       delay(10);
       if(digitalRead(btnpin)==LOW)
       {
         while(digitalRead(btnpin)==LOW);
         delay(10);
         while(digitalRead(btnpin)==LOW);
         state = !state;
         digitalWrite(ledpin,state);
       }
  }
}

