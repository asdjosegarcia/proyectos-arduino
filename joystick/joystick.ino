int btnLeft = 3;
int btnRight = 2;
//axis assignment
int analogLeftX = A0;
int analogLeftY = A1;
int analogRightX = A2;
int analogRightY = A3;

//buttons assignment
int digitalBtn1 = 0;
int digitalBtn2 = 2;
int digitalBtn3 = 3;
int digitalBtn4 = 4;
int digitalBtnUp = 5;
int digitalBtnDown = 6;
int digitalBtnLeft = 7;
int digitalBtnRight = 8;
int digitalBtnL1 = 9;
int digitalBtnL2 = 10;
int digitalBtnR1 = 11;
int digitalBtnR2 = 12;
int analogBtnRight = A4;
int controlButons = A5;  //start,select Analog

//motors assignment
int motorRight = 1;
int motorLeft = 13;


int digitalCounter;



int analogLeftValX;
int analogLeftValY;
int analogRightValX;
int analogRightValY;
int analogControlButonsVal;

int btn1Val;


void setup() {
  Serial.begin(9600);
  Serial.end();//desactuvamos la comuncacion serial de los pines 0 y 1, como consecuencia no tendremos comunicacion serial hacia la pc
  //axis
  pinMode(analogLeftX, INPUT);
  pinMode(analogLeftY, INPUT);
  pinMode(analogRightX, INPUT);
  pinMode(analogRightY, INPUT);

  //buttons
  pinMode(digitalBtn1, INPUT);
  digitalWrite(digitalBtn1, HIGH);

  //motors
  pinMode(motorRight, OUTPUT);
  pinMode(motorLeft, OUTPUT);
}


void loop() {
  //motors
  // digitalWrite(motorRight, LOW);
  digitalWrite(motorRight, HIGH);  // Turn digital pin 1 on
  delay(1000);            // Wait for 1 second
  digitalWrite(motorRight, LOW);   // Turn digital pin 1 off
  delay(1000);            // Wait for 1 second
  // digitalWrite(motorLeft, LOW);






  analogLeftValX = analogRead(analogLeftX);
  analogLeftValY = analogRead(analogLeftY);

  analogRightValX = analogRead(analogRightX);
  analogRightValY = analogRead(analogRightY);

  //butons
  analogControlButonsVal = analogRead(controlButons);
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
