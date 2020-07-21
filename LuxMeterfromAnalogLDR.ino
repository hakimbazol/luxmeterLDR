
/*
THE CODE WAS MODIFIED BY M NAUFAL HAKIM FROM BIOENGINEERING ITB.
PLEASE KNOW YOUR REASON BEFORE USING THIS CODE, AND SEE THE
COMMENT BESIDE THE CODE BEFORE YOU ASK
Inspired by  David Williams, that give this code for LDR only. 
This code is for you that want to make a simple lux meter using analog LDR.
*/

/*SETTING VARIABLES : SET YOUR VARIABLES HERE*/

int analogValue, luxValue;            // Declare variable for read analog value (analogValue) and convert analog value to lux (luxValue)

#define LUX_CALC_SCALAR           1e06 // Write the coefficient of power in Excel
#define LUX_CALC_EXPONENT         -1.909 // Write the power constant of power formula in Excel

/*SETTING ARDUINO : SET YOUR ARDUINO HERE, BUT I THINK IN THIS SECTION IS GOOD TO NOT MODIFIED ANYTHING*/

void setup() {
Serial.begin(9600);                    //Starting serial communication

/*SETTING LOOPING VARIABLES : SET YOUR LOOPING VARIABLES HERE, INCLUDE DURATION OF DATA ACQUISITION*/

void loop() {
analogValue = analogRead(analogInPin); // Read analog value from LDR 
luxValue = LUX_CALC_SCALAR * pow(analogValue, LUX_CALC_EXPONENT); // Convert analog value to lux using formula from excel

Serial.print(luxValue);
Serial.print("\n");
delay(3000);                          // Set your data acquisition duration
}
