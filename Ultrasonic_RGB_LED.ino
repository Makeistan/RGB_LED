// defines variables
const int trigPin = 12;
const int echoPin = 13;
long duration;
int distance;
int rpin1 = 3;
int gpin1 = 5;
int bpin1 = 6;
int rpin2 = 9;
int gpin2 = 10;
int bpin2 = 11;
int count;
int count1;
int count2;
int count3;
int count4;
int count5;
int count6;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(rpin1, OUTPUT);
  pinMode(gpin1, OUTPUT);
  pinMode(bpin1, OUTPUT);
  pinMode(rpin2, OUTPUT);
  pinMode(gpin2, OUTPUT);
  pinMode(bpin2, OUTPUT);
  count1 = 0;
  count2 = 255;
  count3 = 255;
  count4 = 0;
  count5 = 255;
  count6 = 255;
  analogWrite(rpin1, count1);
  analogWrite(gpin1, count2);
  analogWrite(bpin1, count3);
  analogWrite(rpin2, count4);
  analogWrite(gpin2, count5);
  analogWrite(bpin2, count6);
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
distance = distance * 4;  /* optional to include. It will fade quicker for a lower distance
as getting to a distance of 255 can be hard.*/
distance = distance % 256;
Serial.println(distance);
if(distance < 42.5){
  count = distance * 6;
  count1 = 0;
  count2 = 255-count;
  count3 = 255;
  count4 = 0;
  count5 = 255;
  count6 = 255 - count;
}
else if(distance >= 42.5 && distance < 85){
  count = (distance-42.5) * 6;
  count1 = count;
  count2 = 0;
  count3 = 255;
  count4 = count;
  count5 = 255;
  count6 = 0;
}
else if(distance >= 85 && distance < 127.5){
  count = (distance-85) * 6;
  count1 = 255;
  count2 = 0;
  count3 = 255-count;
  count4 = 255;
  count5 = 255-count;
  count6 = 0;
}
else if(distance >= 127.5 && distance < 170){
  count = (distance-127.5) * 6;
  count1 = 255;
  count2 = count;
  count3 = 0;
  count4 = 255;
  count5 = 0;
  count6 = count;
}
else if(distance >= 170 && distance < 212.5){
  count = (distance-170) * 6;
  count1 = 255-count;
  count2 = 255;
  count3 = 0;
  count4 = 255-count;
  count5 = 0;
  count6 = 255;
}
else if(distance >= 212.5 && distance <= 255){
  count = (distance-212.5) * 6;
  count1 = 0;
  count2 = 255;
  count3 = count;
  count4 = 0;
  count5 = count;
  count6 = 255;
}
  analogWrite(rpin1, count1);
  analogWrite(gpin1, count2);
  analogWrite(bpin1, count3);
  analogWrite(rpin2, count4);
  analogWrite(gpin2, count5);
  analogWrite(bpin2, count6);
  delay(100);

}


