#include <ArduinoJson.h>

const int joyStickHor = 27;
const int joyStickVer = 26;
const int potenPin = 15;
const int buttonPin = 13;

int X = 0;
int Y = 0;
int P = 0;
int B = 0;


void setup() {
  Serial.begin(115200);
  delay(3000); //time to bring up serial monitor

  pinMode(buttonPin, INPUT_PULLUP);



}

void loop() {
  X = map(analogRead(joyStickHor), 0, 4095, 0, 100);
  Y = map(analogRead(joyStickVer), 0, 4095, 100, 0);
  P = analogRead(potenPin);
  B = digitalRead(buttonPin);

  Serial.print(X);
  Serial.print(" ");
  Serial.print(Y);
  Serial.print(" ");
  Serial.print(P);
  Serial.print(" ");
  Serial.println(B);


  delay(300);

}
