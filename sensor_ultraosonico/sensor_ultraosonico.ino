  int trigPin=11; //pin de envio de sonido
int echoPin=12; //ping recepcion de sonido
int pingTravelTime; //tiempo de viaje?

void setup() {
  pinMode(trigPin,OUTPUT);//establecemos el pin 12 como salida de sonido
  pinMode(echoPin,INPUT); //establecemos el pin 11 como entrada de sonido
  Serial.begin(9600); //velocidad en baudios (bits por segundo) con los que se transmitiran datos a la pc

}

void loop() {
  digitalWrite(trigPin,HIGH);//activamos el ping envio sonido
  delayMicroseconds(10); //tiempo de delay en microsegundo 1ms=1000microsegundos
  pingTravelTime=pulseIn(echoPin,HIGH); //pulseIn HIGH almacena el tiempo en el que echoPing este en HIGH, devuelve el tiempo en microsegundos
  delay(25); //tiempo delay 25ms
  digitalWrite(trigPin,LOW);//apagamos el pin envio sonido
  Serial.println(pingTravelTime);//nos muestra los datos en la pc cada pingTravelTime de tiempo

}
