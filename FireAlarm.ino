#include <LiquidCrystal.h>
LiquidCrystal lcd(11, 12, 4, 5, 6, 7);

void setup() {
Serial.begin(9600)
lcd.print("Temperature in F");
}

void loop() {
  
float reading = analogRead(THERMOSTERPIN);

// convert reading to resistance
Reading = (1023. / reading) -1;
Reading = (whatever resistor we pick) / Reading   //wire in a resistor

float steinhart;
steinhart = reading / (R0 -----idk temp for nominal resistance apparently usually 25 C);
steinhart = log(steinhart);
steinhart = 1/B * steinhart; (b is unknown beta value usually between 3000-4000)
steinhart = steinhart + (1/T0……...temperaturenominal + 273.15);
Steinhart = 1.0/steinhart; 
Steinhart = steinhart - 273.15;


//convert thermistor reading to a resistance value
float resistance = (reading/1023.)
//map resistance reading to celsius value
float temperature = map(reading, 0, 1023, 0, //celsius value);
float fahrenheit = temperature*1.8+32;    //take celsius value and convert to fahrenheit



//Display temperature on lcd screen
lcd.setCursor(0,1);
lcd.print(fahrenheit);
}

