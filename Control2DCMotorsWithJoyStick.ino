int Vy=A1;
int Vx=A0;
int Wvy;
int Wvx;
int Fw=10;
int Bw=9;
int Fw2=6;
int Bw2=5;
int Swpin=12;
float Mspeed;
float Mspeed2;
int joyvalx;
int joyvaly;
int Swval;
int wait =250;

void setup() {
Serial.begin(9600);
pinMode(Swpin,INPUT);
pinMode(Vx,INPUT);
pinMode(Vy,INPUT);
pinMode(Fw,OUTPUT);
pinMode(Bw,OUTPUT);
pinMode(Fw2,OUTPUT);
pinMode(Bw2,OUTPUT);
digitalWrite(Swpin,HIGH);

}

void loop() {
joyvalx=analogRead(Vx);  
Mspeed=255./1023 * joyvalx;

joyvaly=analogRead(Vy);  
Mspeed2=255./1023 * joyvaly;

Swval= digitalRead(Swpin);
Serial.print("vx value is: ");
Serial.print(joyvalx);
Serial.print(" ,vy value is: ");
Serial.print(joyvaly);
Serial.print(" and switch value is: ");
Serial.println(Swval);


 if (Swval==1){
  digitalWrite(Fw,HIGH);
  analogWrite(Bw,Mspeed);
  digitalWrite(Fw2,HIGH);
  analogWrite(Bw2,Mspeed2);  
delay(wait);
 }
 

 if (Swval==0){
  digitalWrite(Fw,LOW);
  digitalWrite(Fw2,LOW);
  digitalWrite(Bw,LOW);
  digitalWrite(Bw2,LOW);
  
 }








}
