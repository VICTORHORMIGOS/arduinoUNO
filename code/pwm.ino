byte nivell_PWM=0;

void setup() 
{
  // put your setup code here, to run once:
    pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    analogWrite(3,nivell_PWM);
    delay(100);
    nivell_PWM=nivell_PWM+1;
}
