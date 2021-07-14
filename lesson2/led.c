// C++ code
//
void setup(){
  Serial.begin(9600);
  for(int i=7;i<13;i++){
    pinMode(i,1);
  }
}
void loop(){
  for(int i=8;i<13;i++){
    digitalWrite(i,1);
    delay(500);
    digitalWrite(i,0);
  }
  for(int i=13;i>7;i--){
    digitalWrite(i,1);
    delay(500);
    digitalWrite(i,0);
  }
}