/*
------------------------------------------------------------------------
Program Name : Triangle Type Identifier
Author       : MrLogeshrt
Day          : 2
Program No   : 3
Description  : Validates the given triangle side lengths and identifies the type of triangle.

Concepts Used:
- Variables
- Nested if Statements
- Relational Operators
- Logical Operators (&&, ||, !)
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    float x, y, z;

    // Read the measurements of the triangle as input
    printf("Enter the value of side X : ");
    scanf("%f", &x);
    printf("Enter the value of side Y : ");
    scanf("%f", &y);
    printf("Enter the value of side Z : ");
    scanf("%f", &z);

    // Check the sides of the triangle based on the condition [a + b > c] and display the results
    if (x <= 0 || y <= 0 || z <= 0)
    {
        printf("\nTriangle sides must be greater than zero.\n");
    }

    else if (!(x + y > z) || !(x + z > y) || !(y + z > x))
    {
        printf("\nThe given triangle values are not valid.\n");
    }

    else
    {
        if ((x == y) && (y == z))
        {
            printf("\nThe given triangle values are valid and it is an Equilateral Triangle.\n");
        }

        else if ((x == y) || (x == z) || (y == z))
        {
            printf("\nThe given triangle values are valid and it is an Isosceles Triangle.\n");
        }
        
        else
        {
            printf("\nThe given triangle values are valid and it is a Scalene Triangle.\n");
        }
        
    }

    return 0;
}


/*
Sample Input 1 :
30
20
40

Sample Output 1 :
Enter the value of side X : 30
Enter the value of side Y : 20
Enter the value of side Z : 40

The given triangle values are valid and it is a Scalene Triangle.

Sample Input 2 :
30
30
40

Sample Output 2 :
Enter the value of side X : 30
Enter the value of side Y : 30
Enter the value of side Z : 40

The given triangle values are valid and it is an Isosceles Triangle.

Sample Input 3 :
30
30
30

Sample Output 3 :
Enter the value of side X : 30
Enter the value of side Y : 30
Enter the value of side Z : 30

The given triangle values are valid and it is an Equilateral Triangle.

Sample Input 4 :
50
10
20

Sample Output 4 :
Enter the value of side X : 50
Enter the value of side Y : 10
Enter the value of side Z : 20

The given triangle values are not valid.

Sample Input 5 :
0
10
20

Sample Output 5 :
Enter the value of side X : 0
Enter the value of side Y : 10
Enter the value of side Z : 20

Triangle sides must be greater than zero.

Sample Input 6 :
-10
10
20

Sample Output 6 :
Enter the value of side X : -10
Enter the value of side Y : 10
Enter the value of side Z : 20

Triangle sides must be greater than zero.
*/