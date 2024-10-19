#include<LiquidCrystal.h>
const int rs = 12, E = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs,E,d4,d5,d6,d7);
int wait=2000;
int n1;
int n2; 
int choice;
int ans;

void setup() {
Serial.begin(9600);  
lcd.begin(16,2);
}

void loop() {
lcd.setCursor(0,0);
lcd.print("WELCOME TO THE") ; 
lcd.setCursor(0,1);
lcd.print("LCD CALCULATOR");
delay(wait);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Pick operator");
lcd.setCursor(0,1);
lcd.print("+,-,*,/");
delay(wait);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("1 for +,2 for -");
lcd.setCursor(0,1);
lcd.print("3 for *,4 for /");
while(Serial.available()==0){
}
choice=Serial.parseInt();
lcd.clear();

lcd.setCursor(0,0);
lcd.print("Enter a number");
while(Serial.available()==0){
}
n1=Serial.parseInt();
lcd.clear();

lcd.setCursor(0,0);
lcd.print("Enter another");
lcd.setCursor(0,1);
lcd.print("number");
while(Serial.available()==0){
}
n2=Serial.parseInt();
lcd.clear();

int sum=n1+n2;
int diff=n1-n2;
int quo=n1/n2;
int pro=n1*n2;

if (choice==4){

  lcd.setCursor(0,0);
  lcd.print(n1);
  lcd.print(" / ");
  lcd.print(n2);
  lcd.print(" = ");
  lcd.print(quo);
  delay(wait);
  lcd.clear();
}

if (choice==2) {
  lcd.setCursor(0,0);
  lcd.print(n1);
  lcd.print(" - ");
  lcd.print(n2);
  lcd.print(" = ");
  lcd.print(diff);
  delay(wait);
  lcd.clear();
}

if (choice==1){
  
  lcd.setCursor(0,0);
  lcd.print(n1);
  lcd.print(" + ");
  lcd.print(n2);
  lcd.print(" = ");
  lcd.print(sum);
  delay(wait);
  lcd.clear();
}

if (choice==3){
  lcd.setCursor(0,0);
  lcd.print(n1);
  lcd.print(" * ");
  lcd.print(n2);
  lcd.print(" = ");
  lcd.print(pro);
  delay(wait);
  lcd.clear();
}


}
