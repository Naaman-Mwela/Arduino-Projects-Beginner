//This code is used to demonstrate the operation of the Motors of the Solar Panel Cleaning Robot
/*
***************************************Instructions************************************************
 1. Choose the type of board and connect the IDE Port to the microcontroller
 2. Compile and upload the code onto the micri-controller
 3. Connect the L298N motor driver, Voltage source and Motors to the pins below:

*/

//Digital Input pins
const int IN1 = 7; 
const int IN2 = 6;
const int IN3 = 5;
const int IN4 = 4;

//Analog Write pins
const int ENA = 10;
const int ENB = 9;

//Variables of Interest 
//The variables status1 and status2 are used to calibrate the motors to start rotating in a clockwise
//Direction/Forward direction
int motorSpeed = 255;

int status1 = HIGH;
int status2 = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite (ENA, motorSpeed);
  analogWrite (ENB, motorSpeed);
  
 // delay(5000);
  digitalWrite (IN1, status1);
  digitalWrite (IN2, status2);
  digitalWrite (IN3, status1);
  digitalWrite (IN4, status2);
  //delay (5000);

//Anticlockwise Direction
  status1 = LOW;
  status2 = HIGH;

  digitalWrite (IN1, status1);
  digitalWrite (IN2, status2);
  digitalWrite (IN3, status1);
  digitalWrite (IN4, status2);

//Clockwise Direction
  status1 = HIGH;
  status2 = LOW;

  delay(5000);

}
