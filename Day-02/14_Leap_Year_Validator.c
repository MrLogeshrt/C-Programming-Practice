/*
------------------------------------------------------------------------
Program Name : Leap Year Validator
Author       : MrLogeshrt
Day          : 2
Program No   : 4
Description  : Validates the given year and determines whether it is a leap year based on the Gregorian calendar rules.

Concepts Used:
- Variables
- if-else Statements
- Relational Operators
- Logical Operators (&&, ||, !)
- Modulus Operator (%)
- Input/Output Functions
------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int year;

    // Get the year input from the user
    printf("Enter a year : ");
    scanf("%d", &year);

    // Check if the year is a leap year based on the conditions
    if (year <= 0)
    {
        printf("\nYear must be greater than zero.\n");
    }

    else if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        printf("\nYear : %d\n", year);
        printf("The given year is a Leap Year.\n");
    }

    else
    {
        printf("\nYear : %d\n", year);
        printf("The given year is not a Leap Year.\n");
    }

    return 0;
}


/*
Sample Input 1 :
2020

Sample Output 1 :
Enter a year : 2020

Year : 2020
The given year is a Leap Year.

Sample Input 2 :
1900

Sample Output 2 :
Enter a year : 1900

Year : 1900
The given year is not a Leap Year.

Sample Input 3 :
2024

Sample Output 3 :
Enter a year : 2024

Year : 2024
The given year is a Leap Year.

Sample Input 4 :
2023

Sample Output 4 :
Enter a year : 2023

Year : 2023
The given year is not a Leap Year.

Sample Input 5 :
0

Sample Output 5 :
Enter a year : 0

Year must be greater than zero.
*/