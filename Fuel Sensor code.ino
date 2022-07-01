//C:\\Users\\hp\\AppData\\Local\\Temp\\arduino_build_847091/fuel_level2.ino.hex
#include <LiquidCrystal.h> //Load Liquid Crystal Library
LiquidCrystal LCD(10,9,5,4,3,2);  //Create Liquid Crystal Object called LCD

#define echoPin 11 //Sensor Echo pin connected to Arduino pin 11
#define trigPin 13 //Sensor Trip pin connected to Arduino pin 13



void setup() 
{  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  LCD.begin(20,4); //Tell Arduino to start your 16 column 2 row LCD
  LCD.setCursor(1,0);  //Set LCD cursor to upper left corner, column 0, row 0
  LCD.print("Digital Fuel Meter");  //Print Message on First Row
  delay(2000);
  LCD.clear();
  LCD.setCursor(0,0);  //Set LCD cursor to upper left corner, column 0, row 0
  LCD.print("For:");  //Print Message on First Row
  LCD.setCursor(1,1); 
  LCD.print("APML");  //Print Message on First Row
  LCD.setCursor(5,2); 
  LCD.print("by Gaurav"); 
  delay(2000);
  LCD.clear();
  LCD.setCursor(0,0);  //Set LCD cursor to upper left corner, column 0, row 0
  LCD.print("Fuel Level");  //Print Message on First Row
}

void loop() {
  long duration, distance,litter;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  LCD.setCursor(0,1);  //Set cursor to first column of second row
  LCD.print("                                         "); //Print blanks to clear the row
  LCD.setCursor(0,1);   //Set Cursor again to first column of second row
  LCD.print(distance); //Print measured distance
  LCD.print(" cm");  //Print your units.
 
    if(distance <=20)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                                  "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("Low Level");
    }
    
    else if(distance <=100)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                                    "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 250ml             ");
    }
    
    else if(distance <=200)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                                "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print(" App. 500ml          ");
    }
    
    else if(distance <=300)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                                 "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 750ml             ");
    }
    
    else if(distance <=400)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                              "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 1000 ml         ");
    }
    
    else if(distance <=500)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                                "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 1250 ml          ");
    }
    
    else if(distance <=600)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                                  "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 1500 ml           ");
    }
   else if(distance <=700)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                                  "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 1750 ml           ");
    }  
     else if(distance <=800)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                                 "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 2000 ml          ");
  
  }
  
  
  
  
  
  
  else if(distance <=900)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                             "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 2250 ml            ");
    }
     else if(distance <=1000)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                              "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 2500 ml          ");
      }
     else if(distance <=1100)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                             "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 2750 ml        ");
    }
     else if(distance <=1200)
    {
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                            "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("App. 3000 ml        ");
    }
    else 
    {
        LCD.clear();
        LCD.setCursor(0,1);  //Set cursor to first column of second row
        LCD.print("                         "); //Print blanks to clear the row
        LCD.print("Fuel Level In cm"); //Print blanks to clear the row
        LCD.setCursor(0,1);   //Set Cursor again to first column of second row
        LCD.print(distance); //Print measured distance
        LCD.print(" cm");  //Print your units.
       
        LCD.setCursor(0,2);  //Set cursor to first column of second row
        LCD.print("Fuel in ml"); //Print measured distance
        LCD.setCursor(0,3);
        LCD.print("Empty Level               ");
        
     }
  
  delay(250); //pause to let things settle
}
