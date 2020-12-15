// give it a name:
int led01 = 11;           //gertboard PB3
const int pingpin01 = 12; //gertboard PB4
const int echopin01 = 13; //gertboard PB5
int led02 = 10;           //gertboard PB2
const int pingpin02 = 8;  //gertboard PB0
const int echopin02 = 7;  //gertboard PD7
int led03 = 6;            //gertboard PD6
const int pingpin03 = 4;  //gertboard PD4
const int echopin03 = 2;  //gertboard PD2
int led04 = 5;            //gertboard PD5
const int pingpin04 = A1;  //gertboard PD1
const int echopin04 = A0;  //gertboard PD0
int led05 = 3;            //gertboard PD3
const int pingpin05 = A5; //gertboard PC5
const int echopin05 = A4; //gertboard PC4
int led06 = 9;            //gertboard PB1
const int pingpin06 = A3; //gertboard PC3
const int echopin06 = A2; //gertboard PC2


// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(echopin01, INPUT);
  pinMode(led01, OUTPUT);
  pinMode(pingpin01, OUTPUT);
  pinMode(echopin02, INPUT);
  pinMode(led02, OUTPUT);
  pinMode(pingpin02, OUTPUT);
  pinMode(echopin03, INPUT);
  pinMode(led03, OUTPUT);
  pinMode(pingpin03, OUTPUT);
  pinMode(echopin04, INPUT);
  pinMode(led04, OUTPUT);
  pinMode(pingpin04, OUTPUT);
  pinMode(echopin05, INPUT);
  pinMode(led05, OUTPUT);
  pinMode(pingpin05, OUTPUT);
  pinMode(echopin06, INPUT);
  pinMode(led06, OUTPUT);
  pinMode(pingpin06, OUTPUT);
 // Serial.begin(25600);
}

// the loop routine runs over and over again forever:
void loop() {
  //sensor 1
  digitalWrite(pingpin01, LOW);   // set trigger low
  delay(1);
  digitalWrite(pingpin01, HIGH); //send trigger voltage
  delay(2);
  digitalWrite(pingpin01, LOW); //end trigger voltage
  long duration = pulseIn(echopin01, HIGH); //read from SR04 echo
  int cm = microsecondsToCentimeters(duration);
  int brightness01 = map(cm, 50, 0, 0, 255);
  analogWrite(11, brightness01);  //set led to mapped brightness of inverted distance
  delay(45);
  //sensor 2
  digitalWrite(pingpin02, LOW);   // set trigger low
  delay(1);
  digitalWrite(pingpin02, HIGH); //send trigger voltage
  delay(2);
  digitalWrite(pingpin02, LOW); //end trigger voltage
  long duration02 = pulseIn(echopin02, HIGH); //read from SR04 echo
  int cm02 = microsecondsToCentimeters(duration02);
  int brightness02 = map(cm02, 50, 0, 0, 255);
  analogWrite(10, brightness02);  //set led2 to mapped brightness of inverted distance2
  delay(45);

  //sensor 3
  digitalWrite(pingpin03, LOW);   // set trigger low
  delay(1);
  digitalWrite(pingpin03, HIGH); //send trigger voltage
  delay(2);
  digitalWrite(pingpin03, LOW); //end trigger voltage
  long duration03 = pulseIn(echopin03, HIGH); //read from SR04 echo
  int cm03 = microsecondsToCentimeters(duration03);
  int brightness03 = map(cm03, 50, 0, 0, 255);
  analogWrite(6, brightness03);  //set led3 to mapped brightness of inverted distance
  delay(45);
  //sensor 4
  digitalWrite(pingpin04, LOW);   // set trigger low
  delay(1);
  digitalWrite(pingpin04, HIGH); //send trigger voltage
  delay(2);
  digitalWrite(pingpin04, LOW); //end trigger voltage
  long duration04 = pulseIn(echopin04, HIGH); //read from SR04 echo
  int cm04 = microsecondsToCentimeters(duration04);
  int brightness04 = map(cm04, 50, 0, 0, 255);
  analogWrite(5, brightness04);  //set led4 to mapped brightness of inverted distance2
  delay(45);

  //sensor 5
  digitalWrite(pingpin05, LOW);   // set trigger low
  delay(1);
  digitalWrite(pingpin05, HIGH); //send trigger voltage
  delay(2);
  digitalWrite(pingpin05, LOW); //end trigger voltage
  long duration05 = pulseIn(echopin05, HIGH); //read from SR04 echo
  int cm05 = microsecondsToCentimeters(duration05);
  int brightness05 = map(cm05, 50, 0, 0, 255);
  analogWrite(3, brightness05);  //set led5 to mapped brightness of inverted distance
  delay(45);

  //sensor 6
  digitalWrite(pingpin06, LOW);   // set trigger low
  delay(1);
  digitalWrite(pingpin06, HIGH); //send trigger voltage
  delay(2);
  digitalWrite(pingpin06, LOW); //end trigger voltage
  long duration06 = pulseIn(echopin06, HIGH); //read from SR04 echo
  int cm06 = microsecondsToCentimeters(duration06);
  int brightness06 = map(cm06, 50, 0, 0, 255);
  analogWrite(9, brightness06);  //set led6 to mapped brightness of inverted distance2
  delay(45);

}

long microsecondsToCentimeters(long microseconds) {
  /*the speed of sound is 29 microseconds per centimeter[340m/s]
    the ping has to travel to the target and back
    so we devide the distance by 2*/

  return microseconds / 29 / 2;

}
