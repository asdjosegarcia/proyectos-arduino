#include <LiquidCrystal.h> // libreria

LiquidCrystal lcd(13,12,11,10,9,8); // pines conectados

  int   Pin_de_medicion = 5; // Pin analogico 5
  int   R1 = 2200; // Cambiar por el valor de la resistencia conocida (Resistencia de clibracion)
  long  lectura; // Lectura en el pin analogico 5
  float Tension_de_trabajo = 5.0; // VCC (tension con la que va a trabajar el arduino)
  float Voltaje_R2; // Valor que calculamos
  float Resistencia; // Valor que calculamos

  void setup()
{
  lcd.begin(16, 2);  // Fijamos el numero de caracteres y filas
  Serial.begin(9600);
  Serial.println("Medición de resistencia:");
  Serial.println();
}

  void loop()
{
    // Leemos el valor en el pin A5
  lectura=0;
  for(int i=0;i<5;i++){
    lectura+=analogRead(Pin_de_medicion);
  }
  lectura=trunc(lectura/5);
  
  // Colculamos el voltaje en la resistencia desconocida
  Voltaje_R2=(Tension_de_trabajo/1023.0)*lectura;
  
  // Lo imprimimos en el Monitor Serie
  Serial.print("Voltaje en R2: ");
  Serial.print(Voltaje_R2,2);
  Serial.println(" Voltios");
  
  //Calculamos la resistencia desconocida con las fórmulas
  // (V1/R1=V2/R2) y (V1=+5V-V2)
  Resistencia=R1*Voltaje_R2/(Tension_de_trabajo-Voltaje_R2);
  Serial.print("La resistencia tiene ");
  Serial.print(Resistencia,2);
  Serial.println(" Ohm.");
  Serial.println();
  delay(500);//tienpo en el que se va a presentar la informacion en pantalla
    //LCD
     lcd.setCursor(0,0);
     lcd.print("Resistencia de ");
    lcd.setCursor(1,1);
    lcd.print(Resistencia,2);
 lcd.setCursor(6,1);
    lcd.print(" Ohm");

}
