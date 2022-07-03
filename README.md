# Collision Detection System

The incidence of road accidents has increased as technology and motor vehicle manufacture have advanced. Because proper emergency facilities are not available, the survival rate following an accident is extremely low. Our concept would assist in detecting an accident and determining its location, which would then be communicated to the rescue team and the rider’s emergency contacts.

## Components used
<img width="491" alt="components" src="https://user-images.githubusercontent.com/68386099/177051450-578e0bff-8737-46e0-bf3a-79bcebeaf728.PNG">

In this project we see collision detection in vehicles. In order to detect those collisions during the accident we use an impact sensor. The impact sensor is fitted on the bumper of the car. To detect the orientation of the vehicle we use ADXL335. ADXL335 gives complete 3-axis acceleration measurements. The output signals of this module are analog voltages that are proportional to the voltages. The input data from the ADXL335 is processed by the Arduino. The Arduino is an opensource microcontroller board. The board is equipped with sets of digital and analog input output pins that may be interfaced to various expansion boards and other circuits. With the help of the processed data obtained from the Arduino, the location can be detected using the GPS module and the alert messages can be sent to the personal contact or closest emergency locations or hospitals using the GSM module. Here we use 5V power supply for the GSM, impact sensor module and 3.3V for GPS, ADXL335 to work on. A GPS module is usually a small board on which a GPS sensor is mounted with additional components. And the GSM shield allows an Arduino board to connect to the internet, send and receive SMS, and make voice calls using the GSM library. GSM module is added on the receiver side so that it can send the messages to the emergency contacts during the collision. Impact sensor is designed to detect the instances of the sudden impact in order to output a value or, in the case of impact switches, activates or deactivates a circuit or a device.

## Design 

The working of impact sensor - used for detecting the collision. Therefore, it can also be called a collision signal sensor. In proteus software, we use TouchPad tool for impact sensor equivalent behavior for an input which we considered it as collision if tapped. Once the collision or flip happen we also used a buzzer to alert the passengers that an emergency message is sent. The ADXL335 use three linear potentiometers as a variable voltage source for each axis, as the acceleration in ADXL335 is directly proportional to the output voltage of each axis. Since ADXL sensor is not available in proteus (simulation tool) we  used three potentiometers in parallel as an equivalent model. We used GSM1 to send the message we coded it accordingly and Arduino is coded to receive readings from sensors,to find current location and to send those details to GSM code so that the message contains details /readings from the sensors.

![image](https://user-images.githubusercontent.com/68386099/177052180-c71f3243-ead7-4ce5-9860-06a04fa3f8b7.png)

## Flowchart
![image](https://user-images.githubusercontent.com/68386099/177052203-758e6a48-8534-440e-acab-ee13fcdc2990.png)

## Implementation

![image](https://user-images.githubusercontent.com/68386099/177052083-c3185a3a-2e7e-4aa0-9614-40968528ec96.png) </br>
Fig1. Side view of demo car

![image](https://user-images.githubusercontent.com/68386099/177052143-2fa68c8d-2d9c-41cd-8e86-a3f1540f5ac2.png) </br>
Fig2. Top view of demo car

## Collision Scenarios
A total of four possibilities provide different outcomes </br>

### Case1: No impact and no flip </br>
This case represents the normal proper functioning of the vehicle. Therefore, we need not send any emergency messages so no readings from GPS are required and GSM is not used here. </br>

### Case 2: Impact occurred and no flip </br>
This case represents the scenario when a collision happens but the automobile is not flipped. Once this happens we use GPS to find the current location, GSM to send message to emergency services. </br>

![image](https://user-images.githubusercontent.com/68386099/177051776-e8907d97-9276-4d89-aa73-be1bed253692.png)

### Case 3: No impact and flip occurred </br>
This case represents the situation when a collision does not happen but the vehicle is flipped. Once this happens we use GPS to find the current location, GSM to send message to emergency services. </br>

![image](https://user-images.githubusercontent.com/68386099/177051789-42ff2b07-89fb-425f-8727-960778e5e59d.png)

### Case 4: Impact and flip occurred </br>
This case represents the situation when a collision happens and the vehicle is flipped. Once this occurs we use GPS to find the current location, GSM to send message to emergency services, </br>

![image](https://user-images.githubusercontent.com/68386099/177051798-cc9dfc3f-8c7f-4cbd-b251-09c65b896315.png)

