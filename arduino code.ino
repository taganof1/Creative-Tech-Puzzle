int ldr=A0;//Pin A0 for the LDR
int value=0; //Sets value automatically at 0

void setup() {
pinMode(3,OUTPUT);
}

void loop() {
if(value<300)
  {
    digitalWrite(3,HIGH);//Makes the LED glow in Dark.
  }
  else
  {
    digitalWrite(3,LOW);//Turns the LED OFF in Light.
  }
}
