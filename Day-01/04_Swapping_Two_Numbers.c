/*
------------------------------------------------------------------------
Program Name : Swapping Two Numbers
Author       : MrLogeshrt
Day          : 1
Program No   : 4
Description  : Swaps the values of two integer variables using a temporary variable.

Concepts Used:
- Variables
- Assignment Operators
- Temporary Variables
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main() 
{
    int a, b, temp;

    // Read two numbers from the user
    printf("Enter a number a : ");
    scanf("%d", &a);

    printf("Enter a number b : ");
    scanf("%d", &b);

    // Display the values of a and b before swapping
    printf("\nBefore Swapping the 2 numbers.\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping the values of a and b using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display the swapped values
    printf("\nAfter swapping the two numbers using a temporary variable.\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}


/*
Sample Input :
10
20  

Sample Output :
Enter a number a : 10
Enter a number b : 20
Before Swapping the 2 numbers.
a = 10
b = 20
After swapping the two numbers using a temporary variable.
a = 20
b = 10  
*/