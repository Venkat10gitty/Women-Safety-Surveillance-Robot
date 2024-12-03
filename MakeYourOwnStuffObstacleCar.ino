const int trig = 13;
const int echo = 12;
const int in1 = 11;
const int in2 = 10;
const int in3 = 9;
const int in4 = 8;


void setup() 
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode (in1, OUTPUT);
  pinMode (in2, OUTPUT);
  pinMode (in3, OUTPUT);
  pinMode (in4, OUTPUT);
}
long dura, dis;

void loop()
{     
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);  
  dura = pulseIn(echo, HIGH);
  dis = dura/58.2;
  if(dis<40)
    {
      digitalWrite(in1, LOW); 
      digitalWrite(in2, HIGH); 
      digitalWrite(in3, HIGH); 
      digitalWrite(in4, LOW);
       delay(200);
      digitalWrite(in1, LOW); 
      digitalWrite(in3, LOW); 
      digitalWrite(in2, HIGH); 
      digitalWrite(in4, LOW);
      delay(500);
    }
    
  else
    {
      digitalWrite(in1, HIGH); 
      digitalWrite(in2, LOW); 
      digitalWrite(in4, HIGH); 
      digitalWrite(in3, LOW);
    }  
  delay(0);
}