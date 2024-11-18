//*This code is for displaying the LDR through the use of the Servo motor. The motor will fluxuate bewtween 0-180 degrees. 
//This is using the analog input

#include <Servo.h>//Include the librairy

Servo myServo;//create a servo object to control a servo

int potpin=A0;


void setup(){
  myServo.attach(9);//Servo connected to pin 9
  Serial.begin(9600);//Serial communication


}

void loop(){
  int value=analogRead(potpin);//LDR connected to pin A0

  Serial.println(value);//print out the LDR value it recieves

  int position=map(value,25,715,180,0);//When at 0-180 degrees this is the min and max values given by the LDR

  myServo.write(position);//The servo moves to the position

  delay(200);//delay for stability 

}

