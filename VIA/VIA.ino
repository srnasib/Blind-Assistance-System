


#define CUSTOM_SETTINGS
#define INCLUDE_TEXT_TO_SPEECH_SHIELD
#include <OneSheeld.h>

#include <Ultrasonic.h>
Ultrasonic topr(2,3); //2.3
Ultrasonic topm(4,5);
Ultrasonic topl(6,7);
Ultrasonic bottomr(8,9);
Ultrasonic bottomm(10,11);
Ultrasonic bottoml(12,13);
Ultrasonic rear(14,15); 



void setup() {
 
int msay1 = A0;
int msay2 = A1;
int msay3 = A2;
int rearbuz = 16;
int fallm = 17;
int fallbuz = 18;
 pinMode(A0,INPUT);
 pinMode(A1,INPUT);
 pinMode(A2,INPUT);
 pinMode(16,OUTPUT);
 pinMode(17,OUTPUT);
 pinMode(18,OUTPUT);
Serial.begin(9600);
 OneSheeld.begin();

   // Open serial monitor at 115200 baud to see ping results.

}

void loop() {
 if(analogRead(A0)>1000 || analogRead(A1)>1000 || analogRead(A2)>1000)
 {
         if(analogRead(A0)>1000)
        {
           TextToSpeech.say("Give me side please");
           delay(2000);
         }
         else if(analogRead(A1)>1000)
         {
           TextToSpeech.say("I am lost");
            delay(2000);
           }
           else if(analogRead(A2)>1000)
          {
           TextToSpeech.say("Can you help me ?");
             delay(2000);
           }
           else
            TextToSpeech.say("Ratul is a dog");
             delay(2000);
}
 
  /*  Serial.println(topr.Ranging(CM));
      Serial.println(topm.Ranging(CM));
        Serial.println(topl.Ranging(CM));
          Serial.println(bottomr.Ranging(CM));
            Serial.println(bottoml.Ranging(CM));
              Serial.println(bottomm.Ranging(CM));*/
 if (topr.Ranging(CM)<=2 || topm.Ranging(CM)<=2 || topl.Ranging(CM)<=2 || bottomr.Ranging(CM)<=2 || bottoml.Ranging(CM)<=2 ||bottomm.Ranging(CM)<=2)
  {
    int fallbuz = 18;
    digitalWrite(fallbuz,HIGH);
    TextToSpeech.say("please call to 01911358541 Mr.Masud");
             delay(2000);
   }
  
else 
{
 if(topr.Ranging(CM)>50 && topm.Ranging(CM)>50 && topl.Ranging(CM)>50 && bottomr.Ranging(CM)>50 && bottoml.Ranging(CM)>50 && bottomm.Ranging(CM)>50)
 {
   TextToSpeech.say("Minimum distance 50cm everywhere move any side");
             delay(2000);
 }

else if(topr.Ranging(CM)>50 && topm.Ranging(CM)>50 && topl.Ranging(CM)>50 && bottomr.Ranging(CM)>50 && bottoml.Ranging(CM)>50 && bottomm.Ranging(CM)<50)
{
  TextToSpeech.say("obstacle near 50cm at front of height 1 feet, left and right more than 50 cm.go left or right");
             delay(2000);
 }
else if(topr.Ranging(CM)>50 && topm.Ranging(CM)>50 && topl.Ranging(CM)>50 && bottomr.Ranging(CM)<50 && bottoml.Ranging(CM)>50 && bottomm.Ranging(CM)>50)
{
  TextToSpeech.say("obstacle near 50cm at right of height 1 feet, left and front more than 50 cm,go left or front");
             delay(2000);
 }

else if(topr.Ranging(CM)>50 && topm.Ranging(CM)>50 && topl.Ranging(CM)>50 && bottomr.Ranging(CM)>50 && bottoml.Ranging(CM)<50 && bottomm.Ranging(CM)>50)
{
  TextToSpeech.say("obstacle near 50cm at left of height 1 feet, right and front more than 50 cm,go right or front");
             delay(2000);
 }
 else if(topr.Ranging(CM)>50 && topm.Ranging(CM)>50 && topl.Ranging(CM)>50 && bottomr.Ranging(CM)<50 && bottoml.Ranging(CM)>50 && bottomm.Ranging(CM)<50)
{
  TextToSpeech.say("obstacle near 50cm at front and right of height 1 feet, left more than 50 cm,go left");
             delay(2000);
 }
 else if(topr.Ranging(CM)>50 && topm.Ranging(CM)>50 && topl.Ranging(CM)>50 && bottomr.Ranging(CM)>50 && bottoml.Ranging(CM)<50 && bottomm.Ranging(CM)<50)
{
  TextToSpeech.say("obstacle near 50cm at front and left of height 1 feet,right more than 50 cm,go right");
             delay(2000);
 }
 else if(topr.Ranging(CM)>50 && topm.Ranging(CM)>50 && topl.Ranging(CM)>50 && bottomr.Ranging(CM)<50 && bottoml.Ranging(CM)<50 && bottomm.Ranging(CM)<50)
{
  TextToSpeech.say("obstacle near 50cm at front,left and right of height of 1 feet,you should stop ");
             delay(2000);
 }
 else if(topr.Ranging(CM)>50 && topm.Ranging(CM)<50 && topl.Ranging(CM)>50 && bottomr.Ranging(CM)>50 && bottoml.Ranging(CM)>50 && bottomm.Ranging(CM)<50)
{
  TextToSpeech.say("obstacle near 50cm at front of height of 2 feet, left and right more than 50 cm.go left or right");
             delay(2000);
 }

else if(topr.Ranging(CM)<50 && topm.Ranging(CM)>50 && topl.Ranging(CM)>50 && bottomr.Ranging(CM)<50 && bottoml.Ranging(CM)>50 && bottomm.Ranging(CM)>50)
{
  TextToSpeech.say("obstacle near 50cm at right of height 2 feet, left and front more than 50 cm,go left or front");
             delay(2000);
 }

else if(topr.Ranging(CM)>50 && topm.Ranging(CM)>50 && topl.Ranging(CM)<50 && bottomr.Ranging(CM)>50 && bottoml.Ranging(CM)<50 && bottomm.Ranging(CM)>50)
{
  TextToSpeech.say("obstacle near 50cm at left of height 2 feet, right and front more than 50 cm,go right or front");
             delay(2000);
 }
 
 else if(topr.Ranging(CM)<50 && topm.Ranging(CM)<50 && topl.Ranging(CM)>50 && bottomr.Ranging(CM)<50 && bottoml.Ranging(CM)>50 && bottomm.Ranging(CM)<50)
{
  TextToSpeech.say("obstacle near 50cm at front and right of height 2 feet, left more than 50 cm,go left");
             delay(2000);
 }
 else if(topr.Ranging(CM)>50 && topm.Ranging(CM)<50 && topl.Ranging(CM)<50 && bottomr.Ranging(CM)>50 && bottoml.Ranging(CM)<50 && bottomm.Ranging(CM)<50)
{
  TextToSpeech.say("obstacle near 50cm at front and left of height 2 feet, right more than 50 cm,go right");
             delay(2000);
 }
 else if(topr.Ranging(CM)<50 && topm.Ranging(CM)<50 && topl.Ranging(CM)<50 && bottomr.Ranging(CM)<50 && bottoml.Ranging(CM)<50 && bottomm.Ranging(CM)<50)
{
  TextToSpeech.say("obstacle near 50cm at front,left and right of height 2 feet,you should stop ");
             delay(2000);
 }

delay(3000);}

  
}
