//luz amarilla 3 veces, luz roja 5 veces, luz amarilla 3 veces,luz roja 5 veces
//yo lo hice con azul y verde por que no tenia leds de esos colores y queria pobar mis nuevos leds rgb tipo anodo :D
int lBlue = 8;
int lGreen = 9;
int lRed = 10;
int ledType= LOW;//LOW for cathode(-), HIGH for anode(+) 
int delay1 = 50;
int delay2 = 2000;
void onOffLeds(int led, int type, int delayTime, int repeat) {
  //led pin del led, type HIGH(+) o LOW(-), repeat cuantas veces se va a repetir el ciclo
  type = (type == 'anode') ? HIGH : LOW;
  for (int i = 0; i < repeat; i++) {
    digitalWrite(led, type);
    delay(delayTime);
    digitalWrite(led, !type);
    delay(delayTime);
  }
}
void setup() {
  pinMode(lBlue, OUTPUT);
  pinMode(lGreen, OUTPUT);
  pinMode(lRed, OUTPUT);
};

void loop() {
    digitalWrite(lBlue, HIGH);//apaga los leds, por que mis leds rgb son de tipo catodo
    digitalWrite(lGreen, HIGH);
    digitalWrite(lRed, HIGH);

  onOffLeds(lBlue, "cathode", delay1, 3);
  onOffLeds(lGreen, "cathode", delay1, 5);
    onOffLeds(lBlue, "cathode", delay1, 3);
  onOffLeds(lGreen, "cathode", delay1, 5);
  delay(delay2);
};
