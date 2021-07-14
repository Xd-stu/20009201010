// C++ code
//
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  Serial.println("I'm OK");
}
byte i=0;
void loop()
{
  while(Serial.available()>0)
  {
    i=Serial.read();
    Serial.println(i);
    i=i-'0';
   switch(i)
   {
    case 3:{
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
    }break;
    case 0:{
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
    }break;
    case 1:{
        digitalWrite(0, LOW);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
    }break;
    case 2:{
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
    }break;
    case 4:{
        digitalWrite(0, LOW);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
    }break;
    case 5:{
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
    }break;
    case 6:{
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
    }break;
    case 7:{
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
    }break;
    case 8:{
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
    }break;
  }
  }
}