/* Obstacle Avoiding Robot Using Ultrasonic Sensor and Arduino NANO
 *  Circuit Digest(www.procreativehub.com)          Youtube 《Technical Tamizha》
 */
int trigPin = 3;
int echoPin = 2;
int revleft4 = 8;
int fwdleft5 = 9;
int revright6 = 10;
int fwdright7 = 11;

long duration, distance;
 
void setup() {
delay(random(500,2000));
Serial.begin(9600);
pinMode(revleft4, OUTPUT);
pinMode(fwdleft5, OUTPUT);
pinMode(revright6, OUTPUT);
pinMode(fwdright7, OUTPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
duration = pulseIn(echoPin, HIGH);
distance = duration / 58.2;
delay(10);
if (distance > 30)
{
digitalWrite(fwdright7, HIGH);
digitalWrite(revright6, LOW);
digitalWrite(fwdleft5, HIGH);
digitalWrite(revleft4, LOW);
}

if (distance < 30)
{
digitalWrite(fwdright7, LOW);
digitalWrite(revright6, LOW);
digitalWrite(fwdleft5, LOW);
digitalWrite(revleft4, LOW);
delay(500);
digitalWrite(fwdright7, LOW);
digitalWrite(revright6, HIGH);
digitalWrite(fwdleft5, LOW);
digitalWrite(revleft4, HIGH);
delay(500);
digitalWrite(fwdright7, LOW);
digitalWrite(revright6, LOW);
digitalWrite(fwdleft5, LOW);
digitalWrite(revleft4, LOW);
delay(100);
digitalWrite(fwdright7, HIGH);
digitalWrite(revright6, LOW);
digitalWrite(revleft4, LOW);
digitalWrite(fwdleft5, LOW);
delay(500);
}
}
