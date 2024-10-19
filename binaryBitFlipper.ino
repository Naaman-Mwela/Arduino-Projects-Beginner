//Circular Shift Right

int LatchPin=11;
int ClockPin =9;
int DataPin=8;
byte myByte=0b11110000;
int dt =1000;
byte myByteFlipped;

void setup() {
Serial.begin(9600);
pinMode(DataPin,OUTPUT);
pinMode(ClockPin,OUTPUT);
pinMode(LatchPin,OUTPUT);
}

void loop() {
 
digitalWrite(LatchPin,LOW);
shiftOut(DataPin,ClockPin,LSBFIRST,myByte);//send data out through pin 12 on register to 14,clock to synchronise,3rd part order n which you send bits,data packet you sendng?
digitalWrite(LatchPin,HIGH);
Serial.println(myByte,BIN);
delay(dt);
myByteFlipped=255-myByte; 

digitalWrite(LatchPin,LOW);
shiftOut(DataPin,ClockPin,LSBFIRST,myByteFlipped);//send data out through pin 12 on register to 14,clock to synchronise,3rd part order n which you send bits,data packet you sendng?
digitalWrite(LatchPin,HIGH);
Serial.println(myByteFlipped,BIN);
delay(dt);

}
