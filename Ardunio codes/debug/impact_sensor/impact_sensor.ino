int button=2;//Define pin for the OUT pin of the sensor
#define BUZ 7
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);
 
void setup() {
  pinMode(button,INPUT);//Set the sensor pin as INPUT
  Serial.begin(9600);//Set baud rate for serial communication
  Serial.println("Hello!");//print no collision
  
  mySerial.begin(9600);   // Setting the baud rate of GSM Module 

  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)

  delay(100);
  pinMode(BUZ, OUTPUT);
  
}
void loop() 
{
  if(digitalRead(button)==LOW)//If switch is not pressed 
  {
    Serial.println("Collision");//print collision
    delay(3);
    SendMessage();
    Serial.write(mySerial.read()); 
    buzzzzz();   
    exit(0);
      
  }
  else if(digitalRead(button)==HIGH)//If switch is pressed
  {
    Serial.println("No Collision");//print collision
    delay(100);
  }
  else
  Serial.println("No Data");
  delay(100);
}


void buzzzzz()
{
while(true){
digitalWrite(BUZ, HIGH);    
}
}
void SendMessage()


{

  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode

  delay(500);  // Delay of 1000 milli seconds or 1 second

  mySerial.println("AT+CMGS=\"8248469940\"\r"); // Replace x with mobile number

  delay(500);

  mySerial.println("I am dying please help me");// The SMS text you want to send

  delay(500);

  mySerial.println((char)26);// ASCII code of CTRL+Z

  delay(100);

}
