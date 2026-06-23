/*
------------------------------------------------------------------------
Program Name : Area and Perimeter of a Rectangle
Author       : MrLogeshrt
Day          : 1
Program No   : 6
Description  : Calculates the area and perimeter of a rectangle by taking its length and breadth as input.

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
    float length, breadth, area, perimeter;

    // Read measurement units from the user
    printf("Enter the length of the Rectangle in meters : ");
    scanf("%f", &length);
    printf("Enter the breadth of the Rectangle in meters : ");
    scanf("%f", &breadth);

    // Calculate the Area and Perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display the results in meter
    printf("\nThe Area of the Rectangle with measurement %.2fx%.2f is %.2f sq.m.\n", length, breadth, area);
    printf("The Perimeter of the Rectangle with measurement %.2fx%.2f is %.2f m.\n", length, breadth, perimeter);

    return 0;
}


/*
Sample Input :
45
85

Sample output :
Enter the length of the Rectangle in meters : 45
Enter the breadth of the Rectangle in meters : 85

The Area of the Rectangle with measurement 45.00x85.00 is 3825.00 sq.m.
The Perimeter of the Rectangle with measurement 45.00x85.00 is 260.00 m.
*/