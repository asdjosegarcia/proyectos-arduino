/////////////////////////////////////declaracion variables
int blueLed = 9; //pin de salida PWM
int brightness1= 0; //brillo del led 0 apagado, 124 tenue, 255 maximo
int brightness2= 125;
int brightness3= 255;
int dt = 500;//500ms


void setup() { //////////////////////no se repite
  pinMode(blueLed,OUTPUT);//pin 9 como salida
 

}
void loop() {////////////////////////se repite
  analogWrite(blueLed,brightness1); //cualquier valor entre 0 y 255
  delay(dt);
  analogWrite(blueLed,brightness2); 
  delay(dt);
  analogWrite(blueLed,brightness3); 
  delay(dt);
}
