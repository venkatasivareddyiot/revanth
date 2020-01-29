int led=13;
int butto1n=A0;
int button=2;
int count=0;
int ledState=HIGH;
int buttoncurrent;
int buttonPrevious=LOW;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
}
void loop()
{
 buttoncurrent=digitalRead(button);
   if(buttoncurrent==HIGH && buttonPrevious==LOW)
   {
    count=count+1;
    if(ledState==HIGH)
    {
    ledState=LOW;
   }
   else
   {
    ledState=HIGH;
   }
   }
   digitalWrite(led,ledState);
   buttonPrevious=buttoncurrent;
   Serial.println(count);
   delay(1000);
}
