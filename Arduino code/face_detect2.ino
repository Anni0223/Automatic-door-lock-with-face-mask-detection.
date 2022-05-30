int led = 13;
int entry = 0;
int lock = A3;


void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(lock,OUTPUT);

}

void loop() {

  if(Serial.available()>0)
  {
    entry = Serial.read();
    if(entry=='y')
    {
      digitalWrite(led,HIGH);
      digitalWrite(lock,HIGH);
      
    }
    else if(entry=='n')
    {
      digitalWrite(led,LOW);
      digitalWrite(lock,LOW);
    }
  }

    
}
