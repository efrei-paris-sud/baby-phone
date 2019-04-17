int analogPin=A0;
int digitalPin=7;
//int LedPin=13;

int val = 0;

bool flag;

void setup() {
  Serial.begin(9600);
  pinMode (analogPin,INPUT);  
  pinMode (digitalPin,INPUT);
  //pinMode (LedPin,OUTPUT);  
}

void loop() {
  //int SensorData=digitalRead(digitalPin);
  int SensorData=analogRead(analogPin);   //pas bonne valeur ms c pas grave
  //if(SensorData==1){
    
    while (millis()<= 3000 ) {
      
      val = analogRead(analogPin);
      //Serial.print("Analog:");
      Serial.println(analogRead(analogPin));
    }
  //}       
  //SensorData = 0;
}
/*
int digitalPin=2;
int LED=4;
boolean LEDStatus=false;

void setup() {
 pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);

}

void loop() {

  int SensorData=digitalRead(soundSensor); 
  if(SensorData==1){

    if(LEDStatus==false){
        LEDStatus=true;
        digitalWrite(LED,HIGH);
    }
    else{
        LEDStatus=false;
        digitalWrite(LED,LOW);
    }
  }
 }*/
