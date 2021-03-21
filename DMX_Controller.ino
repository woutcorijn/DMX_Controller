#include <DmxSimple.h>

int Potmeter;
int Delay = 0;
int scanner_position = 0;
int Slidebar_value  = 0;
int Slidebar_value1  = 0;
int Slidebar_value2  = 0;
int Slidebar_value3  = 0;
int Spot_1 = 255;
int Spot_2 = 0;
int Spot_3 = 0;
int setNumber;
  
void setup() {
  DmxSimple.usePin(12);
  DmxSimple.maxChannel(25);
  Serial.begin(9600);

    for(int i = 2; i<10;i++) {
   pinMode(i, OUTPUT);
   digitalWrite(i, LOW);
  }
}

void loop() {
  Potmeter = analogRead(A0);
  
switch(Potmeter) {
  case 0 ... 100:
  if(setNumber != 0) {
    setNumber = 0;
    Digit(setNumber);
  }
  reset(); 
  break;   
  case 101 ... 200:
  if(setNumber != 1) {
    setNumber = 1;
    Digit(setNumber);
  }
  White(); 
  break;
  case 201 ... 300:
  if(setNumber != 2) {
    setNumber = 2;
    Digit(setNumber);
  }
  Random_Colors1();
  break;
  case 301 ... 400:
  if(setNumber != 3) {
    setNumber = 3;
    Digit(setNumber);
  }
  Fade(); 
  break;
  case 401 ... 500:
  if(setNumber != 4) {
    setNumber = 4;
    Digit(setNumber);
  }
  Spot_Step_RGB(); 
  break;
  case 501 ... 600:
  if(setNumber != 5) {
    setNumber = 5;
    Digit(setNumber);
  }
  Strobe_White(); 
  break;
  case 601 ... 700:
  if(setNumber != 6) {
    setNumber = 6;
    Digit(setNumber);
  }
  Strobe_Red(); 
  break;
  case 701 ... 800:
  if(setNumber != 7) {
    setNumber = 7;
    Digit(setNumber);
  }
  Spot_Step_White(); 
  break;
  case 801 ... 1023:
  if(setNumber != 8) {
    setNumber = 8;
    Digit(setNumber);
  }
  Standalone(); //8
  break;
}
}

//lights out
void reset() {
    for (int i = 1; i <= 25; i++) {
      DmxSimple.write(i, 0);
    }
}
