/*
 * Code measures temperature and controls valve. Follows 0.1 protocol
 */

bool valve_state =false;
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
}
