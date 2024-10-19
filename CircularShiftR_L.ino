//Circular Shift Right

int LatchPin=11;
int ClockPin =9;
int DataPin=8;
byte Leds=0b11111110;
int dt =1000;

void setup() {
Serial.begin(9600);
pinMode(DataPin,OUTPUT);
pinMode(ClockPin,OUTPUT);
pinMode(LatchPin,OUTPUT);
}

void loop() {
  
digitalWrite(LatchPin,LOW);
shiftOut(DataPin,ClockPin,LSBFIRST,Leds);//send data out through pin 12 on register to 14,clock to synchronise,3rd part order n which you send bits,data packet you sendng?
digitalWrite(LatchPin,HIGH);
Serial.println(Leds,BIN);
delay(dt);
Leds=Leds*128 + Leds/2;

}
