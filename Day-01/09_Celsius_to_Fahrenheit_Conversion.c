/*
------------------------------------------------------------------------
Program Name : Celsius to Fahrenheit Conversion
Author       : MrLogeshrt
Day          : 1
Program No   : 9
Description  : Converts temperature from Celsius to Fahrenheit.

Concepts Used:
- Variables
- Arithmetic Operators
- Floating-Point Data Types
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    // Read temperature in Celsius from the user
    printf("Enter temperature in Celsius : ");
    scanf("%f", &celsius);

    // Calculate Fahrenheit from Celsius using the formula [Fahrenheit = (Celsius × 9/5) + 32]
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result in degree Fahrenheit
    printf("\nThe temperature %.2f C is equal to %.2f F.\n", celsius, fahrenheit);

    return 0;
}


/*
Sample Input : 
28.75

Sample Output :
Enter temperature in Celsius : 28.75

The temperature 28.75 C is equal to 83.75 F.
*/