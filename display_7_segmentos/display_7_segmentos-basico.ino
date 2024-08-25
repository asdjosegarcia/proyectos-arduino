int aPin=2;// pin A of ic-display-controler
int bPin=5;
int cPin=4;
int dPin=3;

void setup() {
  Serial.begin(9600);
  pinMode(aPin,OUTPUT);
  pinMode(bPin,OUTPUT);
  pinMode(cPin,OUTPUT);
  pinMode(dPin,OUTPUT);
}

void loop() {
  digitalWrite(dPin,1); 
  digitalWrite(cPin,0);
  digitalWrite(bPin,0);
  digitalWrite(aPin,1);
  


}
