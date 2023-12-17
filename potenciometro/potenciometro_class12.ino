//diagrama conexion:
//A 5V
//B A0 (la del medio)
//C GND 
float vOut;//voltageOutpu
int vReadPin=A0;//pin donde se leera el voltataje entrante
int dt= 100;//delay
float analogVal;//almacenaje temporal de voltaje entrate

void setup() {
  pinMode(vReadPin, INPUT);//configuramos el pin'vRead' como entrada
  Serial.begin(9600);//iniciamos la comunicacion serial con una velocidad de 9600 baudios
}

void loop() {
  analogVal=analogRead(vReadPin);//leemos el voltaje y lo alamcenamos 
  vOut=(5.*analogVal)/1023;//transformamos la señal analogica 0(0v) a 1023(5v) a el voltaje exacto
  Serial.print(vOut);//imprimimos la variable que recivimos en la PC por el puerto serial
  Serial.println("V");
  delay(dt);  
}
