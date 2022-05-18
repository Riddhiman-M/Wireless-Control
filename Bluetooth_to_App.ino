#include <SoftwareSerial.h>
#define trig 3
#define echo 4

//SoftwareSerial BTserial(10, 11); // RX | TX

long duration = 0;
int dist = 0;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  //BTserial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig,HIGH);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);
  
  dist = duration * 0.034/ 2;
  byte val = map(dist,0,1024.0,0,255);
  Serial.println(dist);
  Serial.write(val);
  
  //BTserial.print(dist);

  /*BTserial.print(",");
  
  BTserial.print("1234.0");
  
  BTserial.print(",");
  
  BTserial.print("1234 hPa");
  
  BTserial.print(",");
  
  BTserial.print("500 ml/s");
  
  BTserial.print(";");*/
  
  delay(1000);

}
