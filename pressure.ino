/*
 * Code measures temperature and controls valve. Follows 0.1 protocol
 */
bool valve1state = false;
bool valve2state = false;
bool valve3state = false;
bool valve4state = false;
bool valve5state = false;
bool valve6state = false;

const int valve1 = PB9;
const int valve2 = PB8;
const int valve3 = PB7;
const int valve4 = PB6;
const int valve5 = PB5;
const int valve6 = PB4;

void setup() {
  // put your setup code here, to run once:
pinMode(PB1, INPUT_ANALOG);
pinMode(PB0, INPUT_ANALOG);
pinMode(PA7, INPUT_ANALOG);
pinMode(PA6, INPUT_ANALOG);
pinMode(PA5, INPUT_ANALOG);
pinMode(PA4, INPUT_ANALOG);
pinMode(PA3, INPUT_ANALOG);
pinMode(PA2, INPUT_ANALOG);
pinMode(PA1, INPUT_ANALOG);
pinMode(PA0, INPUT_ANALOG);

Serial.begin(9600);
digitalWrite(PC13, HIGH);
delay(1000);
digitalWrite(PC13, LOW);

  // put your setup code here, to run once:
pinMode(valve1,OUTPUT);
pinMode(valve2,OUTPUT);
pinMode(valve3,OUTPUT);
pinMode(valve4,OUTPUT);
pinMode(valve5,OUTPUT);
pinMode(valve6,OUTPUT);

digitalWrite(valve1, LOW);
digitalWrite(valve2, LOW);
digitalWrite(valve1, LOW);
digitalWrite(valve2, LOW);
digitalWrite(valve1, LOW);
digitalWrite(valve2, LOW);

Serial.begin(9600);
}



void loop() {

int   sensorValue = analogRead(PB1);
Serial.print("P1: ");
Serial.print(sensorValue);
sensorValue = analogRead(PB0);
Serial.print(" ,P0: ");
Serial.println(sensorValue);
sensorValue = analogRead(PA7);
Serial.print("PA7: ");
Serial.print(sensorValue);
sensorValue = analogRead(PA6);
Serial.print("PA6: ");
Serial.print(sensorValue);
sensorValue = analogRead(PA5);
Serial.print("PA5: ");
Serial.print(sensorValue);
sensorValue = analogRead(PA4);
Serial.print("PA4: ");
Serial.print(sensorValue);
sensorValue = analogRead(PA3);
Serial.print("PA3: ");
Serial.print(sensorValue);
sensorValue = analogRead(PA2);
Serial.print("PA2: ");
Serial.print(sensorValue);
sensorValue = analogRead(PA1);
Serial.print("PA1: ");
Serial.print(sensorValue);
sensorValue = analogRead(PA0);
Serial.print("PA0: ");
Serial.println(sensorValue);

delay(100);
// put your main code here, to run repeatedly:
  int incoming;
if(Serial.available() >0){
  incoming = Serial.read();
  if (incoming == 65 ){
      valve1state =! valve1state;
      if valve1state == true
      digitalwrite(valve1, HIGH);
      else
      digitalwrite(valve1, LOW);
  }
  else  if (incoming == 66 ){
      valve2state =! valve2state;
      if valve2state == true
      digitalwrite(valve2, HIGH);
      else 
      digitalwrite(valve2, LOW);
  }
  
   else  if (incoming == 67 ){
      valve3state =! valve3state;
      if valve3state == true
      digitalwrite(valve3, HIGH);
      else 
      digitalwrite(valve3, LOW);
   }  
  
   else  if (incoming == 68 ){
      valve4state =! valve4state;
      if valve4state == true
      digitalwrite(valve4, HIGH);
      else 
      digitalwrite(valve4, LOW);
   }  
     else  if (incoming == 69 ){
      valve5state =! valve5state;
      if valve5state == true
      digitalwrite(valve5, HIGH);
      else 
      digitalwrite(valve5, LOW);
   }
      else  if (incoming == 70 ){
      valve6state =! valve6state;
      if valve6state == true
      digitalwrite(valve6, HIGH);
      else 
      digitalwrite(valve6, LOW);
   }  
       

delay(100);
}
