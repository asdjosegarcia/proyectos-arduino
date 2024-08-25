int aPin=2;// pin A of ic-display-controler
int bPin=5;
int cPin=4;
int dPin=3;
const int btnPin=7;
int btn=0;
int num=0;

void setup() {
  pinMode(aPin,OUTPUT);
  pinMode(bPin,OUTPUT);
  pinMode(cPin,OUTPUT);
  pinMode(dPin,OUTPUT);
  pinMode(btnPin,INPUT);//
  Serial.begin(9600);
  
  
}

void loop() {
  btn = digitalRead(btnPin); 
  if(btn == HIGH){
    Serial.println(btn);
    num=num+1;
    delay(200);
    if(num == 10){
      num=0;
    }
    };
  

  switch (num) {
    case 0:
      digitalWrite(dPin, 0); 
      digitalWrite(cPin, 0);
      digitalWrite(bPin, 0);
      digitalWrite(aPin, 0);
      break;
    case 1:
      digitalWrite(dPin, 0); 
      digitalWrite(cPin, 0);
      digitalWrite(bPin, 0);
      digitalWrite(aPin, 1);
      break;
    case 2:
      digitalWrite(dPin, 0); 
      digitalWrite(cPin, 0);
      digitalWrite(bPin, 1);
      digitalWrite(aPin, 0);
      break;
    case 3:
      digitalWrite(dPin, 0); 
      digitalWrite(cPin, 0);
      digitalWrite(bPin, 1);
      digitalWrite(aPin, 1);
      
      break;
    case 4:
      digitalWrite(dPin, 0); 
      digitalWrite(cPin, 1);
      digitalWrite(bPin, 0);
      digitalWrite(aPin, 0);
      break;
    case 5:
      digitalWrite(dPin, 0); 
      digitalWrite(cPin, 1);
      digitalWrite(bPin, 0);
      digitalWrite(aPin, 1);
      break;
    case 6:
      digitalWrite(dPin, 0); 
      digitalWrite(cPin, 1);
      digitalWrite(bPin, 1);
      digitalWrite(aPin, 0);
      break;
    case 7:
      digitalWrite(dPin, 0); 
      digitalWrite(cPin, 1);
      digitalWrite(bPin, 1);
      digitalWrite(aPin, 1);
      break;
    case 8:
      digitalWrite(dPin, 1); 
      digitalWrite(cPin, 0);
      digitalWrite(bPin, 0);
      digitalWrite(aPin, 0);
      break;
    case 9:
      digitalWrite(dPin, 1); 
      digitalWrite(cPin, 0);
      digitalWrite(bPin, 0);
      digitalWrite(aPin, 1);
      break;
    default:
      // Apagar todo en caso de valor inválido
      digitalWrite(dPin, 1); 
      digitalWrite(cPin, 1);
      digitalWrite(bPin, 1);
      digitalWrite(aPin, 1);
      break;
  }
  


}
