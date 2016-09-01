int MP1 = 4;
int MP2 = 5;
int PWM1 = 6;
int MP3 = 7;
int MP4 = 8;
int PWM2 = 9;
int btInput = 0;
int LED1 = 13;


void setup() {
  // put your setup code here, to run once:
Serial1.begin(9600);
pinMode(MP1, OUTPUT);//RHS
pinMode(MP2, OUTPUT);//RHS
pinMode(MP3, OUTPUT);//LHS
pinMode(MP4, OUTPUT);//LHS
pinMode(PWM1, OUTPUT);//RHS
pinMode(PWM2, OUTPUT);//LHS
pinMode(LED1, OUTPUT);//BlueLED
Serial1.println(btInput);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial1.available()>0){
btInput = Serial1.parseInt();
Serial1.println(btInput);
  }
 switch (btInput){
case 8:
digitalWrite(MP1, HIGH);
digitalWrite(MP2, LOW);
digitalWrite(MP3, LOW);
digitalWrite(MP4, HIGH);
digitalWrite(LED1, HIGH);
break;
case 2:
digitalWrite(MP1, LOW);
digitalWrite(MP2, HIGH);
digitalWrite(MP3, HIGH);
digitalWrite(MP4, LOW);
digitalWrite(LED1, LOW);
break;
case 4:
digitalWrite(MP1, HIGH);
digitalWrite(MP2, LOW);
digitalWrite(MP3, HIGH);
digitalWrite(MP4, LOW);
digitalWrite(LED1, LOW);
break;
case 6:
digitalWrite(MP1, LOW);
digitalWrite(MP2, HIGH);
digitalWrite(MP3, LOW);
digitalWrite(MP4, HIGH);
digitalWrite(LED1, LOW);
break;
default:
digitalWrite(MP1, LOW);
digitalWrite(MP2, LOW);
digitalWrite(MP3, LOW);
digitalWrite(MP4, LOW);
digitalWrite(LED1, LOW);
break;
}
}

