/*
------------------------------------------------------------------------
Program Name : Area and Circumference of a Circle
Author       : MrLogeshrt
Day          : 1
Program No   : 5
Description  : Calculates the area and circumference of a circle by taking its radius as input.

Concepts Used:
- Variables
- Arithmetic Operators
- Symbolic Constants (#define)
- Floating-Point Data Types
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius, area, circumference;

    // Read the radius of the circle from the user
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);

    // Calculate the area and circumference of the circle
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the calculated area and circumference
    printf("\nThe area of the circle with radius %.2f is %.2f.\n", radius, area);
    printf("The circumference of the circle with radius %.2f is %.2f.\n", radius, circumference);

    return 0;
}


/*
Sample Input :
5

Sample Output :
Enter the radius of the circle : 5

The area of the circle with radius 5.00 is 78.54.
The circumference of the circle with radius 5.00 is 31.42.
*/