void setup() 
{
  pinMode(3,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  digitalWrite (3,HIGH);
  digitalWrite (7,HIGH);
  digitalWrite (A3,HIGH);
  digitalWrite (9,HIGH);
  delay(1000);
  digitalWrite (3,LOW);
  digitalWrite (7,LOW);
  digitalWrite (A3,LOW);
  digitalWrite (9,LOW);
  delay(1000);
}
