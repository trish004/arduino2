int lightPin = A0;//pin connected to photoresistor 
int ledPin = 13 ; // pin connected to led 

void setup(){
  Serial.begin(9600);//serial communication 
  pinMode(ledPin, OUTPUT);// setting ledpin as output 
}

void loop(){
  Serial.println(analogRead(lightPin));// read the value from photoresistor
analogWrite(ledPin,analogRead(lightPin)/4);
delay(10);
}