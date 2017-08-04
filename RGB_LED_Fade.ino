  int rpin1 = 3;
  int gpin1 = 5;
  int bpin1 = 6;
  int rpin2 = 9;
  int gpin2 = 10;
  int bpin2 = 11;
  int count1;
  int count2;
  int count3;
  int count4;
  int count5;
  int count6;



void setup() {

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
  

  

}

void loop() {
  
  for (int count = 0; count <= 255; count ++) {
    count1 = 0;
    count2 = 255 - count;
    count3 = 255;
    count4 = 0;
    count5 = 255;
    count6 = 255 - count;
    analogWrite(rpin1, count1);
    analogWrite(gpin1, count2);
    analogWrite(bpin1, count3);
    analogWrite(rpin2, count4);
    analogWrite(gpin2, count5);
    analogWrite(bpin2, count6);
    delay(30);
  }
  for (int count = 255; count >= 0; count --) {
    count1 = 255 - count;
    count2 = 0;
    count3 = 255;
    count4 = 255 - count;
    count5 = 255;
    count6 = 0;
    analogWrite(rpin1, count1);
    analogWrite(gpin1, count2);
    analogWrite(bpin1, count3);
    analogWrite(rpin2, count4);
    analogWrite(gpin2, count5);
    analogWrite(bpin2, count6);
    delay(30);
  }
  for (int count = 0; count <= 255; count ++) {
    count1 = 255;
    count2 = 0;
    count3 = 255 - count;
    count4 = 255;
    count5 = 255 - count;
    count6 = 0;
    analogWrite(rpin1, count1);
    analogWrite(gpin1, count2);
    analogWrite(bpin1, count3);
    analogWrite(rpin2, count4);
    analogWrite(gpin2, count5);
    analogWrite(bpin2, count6);
    delay(30);
  }
  for (int count = 255; count >= 0; count --) {
    count1 = 255;
    count2 = 255 - count;
    count3 = 0;
    count4 = 255;
    count5 = 0;
    count6 = 255 - count;
    analogWrite(rpin1, count1);
    analogWrite(gpin1, count2);
    analogWrite(bpin1, count3);
    analogWrite(rpin2, count4);
    analogWrite(gpin2, count5);
    analogWrite(bpin2, count6);
    delay(30);
  }
  for (int count = 0; count <= 255; count ++) {
    count1 = 255 - count;
    count2 = 255;
    count3 = 0;
    count4 = 255 - count;
    count5 = 0;
    count6 = 255;
    analogWrite(rpin1, count1);
    analogWrite(gpin1, count2);
    analogWrite(bpin1, count3);
    analogWrite(rpin2, count4);
    analogWrite(gpin2, count5);
    analogWrite(bpin2, count6);
    delay(30);
  }
  for (int count = 255; count >= 0; count --){
    count1 = 0;
    count2 = 255;
    count3 = 255 - count;
    count4 = 0;
    count5 = 255 - count;
    count6 = 255;
    analogWrite(rpin1, count1);
    analogWrite(gpin1, count2);
    analogWrite(bpin1, count3);
    analogWrite(rpin2, count4);
    analogWrite(gpin2, count5);
    analogWrite(bpin2, count6);
    delay(30);
  }

}
