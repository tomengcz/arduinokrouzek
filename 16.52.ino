int led1 = 8;
int led2 = 9;
int blinkTime11 = 200;
int blinkTime12 = 200;      
int blinkTime21 = 200;
int blinkTime22 = 200;
int pinButton = 7;

void setup() {
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
}

void loop() {
  if(digitalRead(pinButton) == HIGH){
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH); 
  }else{
    digitalWrite(led2, HIGH); 
    digitalWrite(led1, LOW);
  }
}
