/*
------------------------------------------------------------------------
Program Name : Arithmetic Operations
Author       : MrLogeshrt
Day          : 1
Program No   : 3
Description  : Performs basic arithmetic operations on two numbers.

Concepts Used:
- Variables
- Arithmetic Operators
- Type Casting
- Conditional Statements
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int a, b;

    // Read two numbers from the user
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    // Perform arithmetic operations and display results
    printf("The sum of %d and %d is %d.\n", a, b, (a + b));
    printf("The difference between %d and %d is %d.\n", a, b, (a - b));
    printf("The product of %d and %d is %d.\n", a, b, (a * b));


    // Check for division by zero before performing division and modulus operations
    if (b == 0)
    {
        printf("Division by zero is not allowed.\n");
    }
    else
    {
        printf("The quotient of %d and %d is %.2f.\n", a, b, (float)a / b);
        printf("The remainder of %d and %d is %d.\n", a, b, (a % b));
    }

    return 0;
}


/*
Sample Input 1 :
10 5   

Sample Output 1:
Enter two numbers : 10 5
The sum of 10 and 5 is 15.
The difference between 10 and 5 is 5.
The product of 10 and 5 is 50.
The quotient of 10 and 5 is 2.00.
The remainder of 10 and 5 is 0.


Sample Input 2 :
10 0

Sample Output 2:
Enter two numbers : 10 0
The sum of 10 and 0 is 10.
The difference between 10 and 0 is 10.  
The product of 10 and 0 is 0.
Division by zero is not allowed.

*/