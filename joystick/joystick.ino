int btnLeft = 3;
int btnRight = 2;
//axis
int analogLeftX = A0;
int analogLeftY = A1;
int analogRightX = A2;
int analogRightY = A3;

// int analogBtnRight=A4;
//buttons
int digitalBtn1=0;
int digitalBtn2=2;
int digitalBtn3=3;
int digitalBtn4=4;
int digitalBtnUp=5;
int digitalBtnDown=6;
int digitalBtnLeft=7;
int digitalBtnRight=8;
int digitalBtnL1=9;
int digitalBtnL2=10;
int digitalBtnR1=11;
int digitalBtnR2=12;
int controlButons=A5; //start,select Analog





int digitalCounter;



int analogLeftValX;
int analogLeftValY;
int analogRightValX;
int analogRightValY;
int analogControlButonsVal;

int btn1Val;


void setup() {
  Serial.begin(9600);
  //axis
  pinMode(analogLeftX, INPUT);
  pinMode(analogLeftY, INPUT);
  pinMode(analogRightX, INPUT);
  pinMode(analogRightY, INPUT);

  //buttons
  pinMode(digitalBtn1,INPUT);
  digitalWrite(digitalBtn1, HIGH);

  // pinMode(pinBuzzer, OUTPUT);
}


void loop() {
  analogLeftValX = analogRead(analogLeftX);
  analogLeftValY = analogRead(analogLeftY);

  analogRightValX = analogRead(analogRightX);
  analogRightValY = analogRead(analogRightY);

  //butons
  analogControlButonsVal=analogRead(controlButons);
  int btn1Val = digitalRead(digitalBtn1);

  Serial.println(analogControlButonsVal);

  //control buttons
  // if(analogControlButonsVal>500){

  // }


  // //stick izquierdo
  // if (analogLeftValX > 570) {
  //   Serial.println("right");
  //   // Serial.println(analogLeftValX);
  // }
  // if (analogLeftValX < 500) {
  //   Serial.println("lef");
  //   // Serial.println(analogLeftValX);
  // }
  // if (analogLeftValY > 530) {
  //   Serial.println("down");
  //   // Serial.println(analogLeftValX);
  // }
  // if (analogLeftValY < 490) {
  //   Serial.println("top");
  //   // Serial.println(analogLeftValX);
  // }

  // //stick derecho
  //   if (analogRightValX > 550) {
  //   Serial.println("right");
  //   // Serial.println(analogRightValX);
  // }
  // if (analogRightValX < 480) {
  //   Serial.println("lef");
  //   // Serial.println(analogRightValX);
  // }
  // if (analogRightValY > 540) {
  //   Serial.println("down");
  //   // Serial.println(analogRightValX);
  // }
  // if (analogRightValY < 490) {
  //   Serial.println("top");
  //   // Serial.println(analogRightValX);
  // }

}
