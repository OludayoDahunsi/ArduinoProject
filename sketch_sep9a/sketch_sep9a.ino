int DELAY_TIME = 4000;
int DIGITAL_PIN_8 = 8;
int DIGITAL_PIN_2 = 2;
int DIGITAL_PIN_7 = 7;

void setup() {
  // put your setup code here, to run once:

pinMode(DIGITAL_PIN_8,OUTPUT);
pinMode(DIGITAL_PIN_2,OUTPUT);
pinMode(DIGITAL_PIN_7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//Greeen
digitalWrite(DIGITAL_PIN_8,HIGH);  //Turn to 5V
delay(DELAY_TIME);
digitalWrite(DIGITAL_PIN_8 ,LOW);  //Turn it to 0V or OFF
//High means 5V

//Yellow
digitalWrite(DIGITAL_PIN_2,HIGH);  //Turn to 5V
delay(DELAY_TIME);
digitalWrite(DIGITAL_PIN_2,LOW);  //Turn it to 0V or OFF
//High means 5V

//Red
digitalWrite(DIGITAL_PIN_7,HIGH);  //Turn to 5V
delay(DELAY_TIME);
digitalWrite(DIGITAL_PIN_7,LOW);  //Turn it to 0V or OFF
//High means 5V
}
