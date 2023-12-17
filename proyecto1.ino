int tiempo1=50;//declaramos tiempo como 50
int tiempo2=500;//declaramos tiempo como 500
int ledPin=8;
int endDelay=1500;//declaramos endDelay como 2000

void setup(){//ejecuta 1 vez
  pinMode(8,OUTPUT);//salida por el pin 8
}

void loop(){//ejecuta de manera repetida

for(int i = 0; i <= 2; i = i + 1){//ejecuta 3 veces
digitalWrite(ledPin,HIGH); //digitalWrite salida digital, 8 el pin, HIGHT encendido
delay(tiempo1);//50 ms
digitalWrite(ledPin,LOW);//LOW apagado
delay(tiempo1);//50 ms      
}

for(int i = 0; i <= 2; i = i + 1){
digitalWrite(ledPin,HIGH); //digitalWrite salida digital, 8 el pin, HIGHT encendido
delay(tiempo2);//500 ms
digitalWrite(ledPin,LOW);//LOW apagado
delay(tiempo2);//500 ms      
}
delay(endDelay);
}
