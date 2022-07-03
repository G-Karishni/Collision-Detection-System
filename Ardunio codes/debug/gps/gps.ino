#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);

void setup()

{

  mySerial.begin(9600);   // Setting the baud rate of GSM Module 

  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)

  delay(100);

}

void loop()

{

  if (Serial.available()>0)

   switch(Serial.read())

  {

    case 's':

      SendMessage();

      break;

    case 'd':

      DialCall();

      break;

  }

 if (mySerial.available()>0)

   Serial.write(mySerial.read());

}

 void SendMessage()


{

  mySerial.println("AT+CMGF=1\r");    //Sets the GSM Module in Text Mode

  delay(1000);  // Delay of 1000 milli seconds or 1 second

  mySerial.println("AT+CMGS=\"8825413527\"\r"); // Replace x with mobile number

  delay(1000);

  mySerial.println("I am SMS from GSM");// The SMS text you want to send

  delay(100);

  mySerial.println((char)26);// ASCII code of CTRL+Z

  delay(1000);

}

 /*void RecieveMessage()

{

  mySerial.println("AT+CNMI=2,2,0,0,0"); // AT Command to recieve a live SMS

  delay(1000);

}

*/

  void DialCall()

 {

  mySerial.println("ATD8248469940;"); // ATDxxxxxxxxxx; -- watch out here for semicolon at the end!!

  delay(100);

 }
