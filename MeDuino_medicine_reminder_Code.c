/* MediCinuino: Automatic Medicine reminder.
 *  By Ashraf Minhaj www.ashrafminhajfb.blogspot.com
 *  For any query mail at ashraf_minhaj@yahoo.com
 *  
 *  Use this and you'll never miss your medicine.
 *  
 *  This is made for my Mother - Sahida Rahman.
 *  I LOVE YOU MOM.
 */

const int blue = 3;     // Connect BLUE LED to pin 3
int buz = 2;            // Buzzer on pin 2

void setup() 
{
   // initialize the LED & Buzzer pin as Output:
   
  pinMode(blue, OUTPUT);
  pinMode(buz,OUTPUT);
}

void loop() 
{
  
  tone(buz,1000,100); //Beep for 1 second- Starting Sound
  delay(86400000);   /*delay 24 hrs. untill next period to take med.
                      * 24hr * 300s * 1000ms */
  goto buz;         //going to buz: goto Statement

  buz:
  {
    digitalWrite(blue, HIGH);  //Blue led on
    delay(100);
    digitalWrite(blue,LOW);  //LEd off --thus BLINK
    delay(100);
    tone(buz,1000,150); //Start beeping
    delay(1000);
    goto buz;
    /*going again to buz: so that the Code runs 
     untill you come near the 
     Medicine Box and Push the reset switch*/
    }        
     
  
}
