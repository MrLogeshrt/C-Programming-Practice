/*
------------------------------------------------------------------------
Program Name : Number Classification
Author       : MrLogeshrt
Day          : 2
Program No   : 1
Description  : Determines whether a given integer is positive, negative, or zero and identifies it as odd or even.

Concepts Used:
- Variables
- Nested if Statements
- Relational Operators
- Modulus Operator (%)
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int n;

    // Get an integer input from the user
    printf("Enter a number : ");
    scanf("%d", &n);

    // Determine the classification of the number and display the result
    if (n > 0)
    {
        if (n % 2 == 0) 
        {
            printf("\nThe given number %d is Positive Even Number.\n", n);
        }

        else 
        {
            printf("\nThe given number %d is Positive Odd Number.\n", n);
        }
        
    }

    else if (n < 0)
    {
        if (n % 2 == 0) 
        {
            printf("\nThe given number %d is Negative Even Number.\n", n);
        }

        else 
        {
            printf("\nThe given number %d is Negative Odd Number.\n", n);
        }
    }

    else 
    {
        printf("\nThe given number %d is neither positive nor negative, but it is an even number.\n", n);
    }

    return 0;
}


/*
Sample Input 1 :
-5

Sample Output 1 :
Enter a number : -5
The given number -5 is Negative Odd Number.

Sample Input 2 :
-8

Sample Output 2 :
Enter a number : -8
The given number -8 is Negative Even Number.

Sample Input 3 :
15

Sample Output 3 :
Enter a number : 15
The given number 15 is Positive Odd Number.

Sample Input 4 :
20

Sample Output 4 :
Enter a number : 20
The given number 20 is Positive Even Number.

Sample Input 5 :
0

Sample Output 5 :
Enter a number : 0 
The given number 0 is neither positive nor negative, but it is an even number.
*/