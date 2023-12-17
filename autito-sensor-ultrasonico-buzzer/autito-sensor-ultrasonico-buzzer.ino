/////ardu-movil de conduccion autonoma, con buzzer y sensor ultrasonico
//motor derecho
int motorRight1 = 2;
int motorRight2 = 3;
int motorRight3 = 4;

//motor derecho v2
int motorRightInvert1 = 5;
int motorRightInvert2 = 6;
int motorRightInvert3 = 7;

//motor izquierdo
int motorLeft1 = 11;
int motorLeft2 = 12;
int motorLeft3 = 13;

//motor derecho giro invertido
//int motorRightReverse1=5;/
//int motorRightReverse1=6;/
//int motorRightReverse1=7;/

//buzzer
int buzzer = 8;

//sensor ultrasonico
int ultrasonicTrig = 9;
int ultrasonicEcho = 10;
int ultrasonicTravelTime;



void setup() {
  //configuracion motor derecho como salida
  pinMode(motorRight1, OUTPUT);
  pinMode(motorRight2, OUTPUT);
  pinMode(motorRight3, OUTPUT);

  //configuracion pin 2 motor derecho
  pinMode(motorRightInvert1, OUTPUT);
  pinMode(motorRightInvert2, OUTPUT);
  pinMode(motorRightInvert3, OUTPUT);

  //configuracion motor izquierdo
  pinMode(motorLeft1, OUTPUT);
  pinMode(motorLeft2, OUTPUT);
  pinMode(motorLeft3, OUTPUT);

  //buzzer
  pinMode(buzzer, OUTPUT);

  //sensor ultrasonico
  pinMode(ultrasonicEcho, INPUT);
  pinMode(ultrasonicTrig, OUTPUT);
  Serial.begin(9600);  //velocidad con la que se transmitiran los datos en bits por segundos(baudios) a la pc, no se si cambia en algo con los
}

void motorLeft(int status) {  //funcion motor izquierdo
  digitalWrite(motorLeft1, status);
  digitalWrite(motorLeft2, status);
  digitalWrite(motorLeft3, status);
};

void motorRight(int status) {  //funcion
  digitalWrite(motorRight1, status);
  digitalWrite(motorRight2, status);
  digitalWrite(motorRight3, status);
};
void motorRightv2(int status) {  //funcion
  digitalWrite(motorRightInvert1, status);
  digitalWrite(motorRightInvert2, status);
  digitalWrite(motorRightInvert3, status);
};


void turnRight() {
  motorRight(LOW);

  motorLeft(HIGH);
};


void loop() {

  while (ultrasonicTravelTime == 0 || ultrasonicTravelTime > 800) {
    digitalWrite(ultrasonicTrig, HIGH);                    //activamos el ping envio sonido
    delayMicroseconds(10);                                 //tiempo de delay en microsegundo 1ms=1000microsegundos
    ultrasonicTravelTime = pulseIn(ultrasonicEcho, HIGH);  //pulseIn HIGH almacena el tiempo en el que echoPing este en HIGH, devuelve el tiempo en microsegundos
    delay(25);                                             //tiempo delay 25ms
    digitalWrite(ultrasonicTrig, LOW);                     //apagamos el pin envio sonido
    Serial.println(ultrasonicTravelTime);                  //nos muestra los datos en la pc cada pingTravelTime de tiempo
    if (ultrasonicTravelTime > 800) {
      Serial.println("derecho");
      motorRight(HIGH);
      motorRightv2(LOW);
      motorLeft(HIGH);
    }
  }
  // Serial.println(ultrasonicTravelTime);

  Serial.println("giros");
  //tiempo de espera para evitar que el motor se trabe
  //giro a la derecha
  motorRight(LOW);
  motorRightv2(HIGH);
  motorLeft(HIGH);
  delay(400);
  ultrasonicTravelTime = 0;


  // if (ultrasonicTravelTime >= 2000) {
  // } else {
  //   turnRight();
  // }
}
