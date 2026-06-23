/*
------------------------------------------------------------------------
Program Name : Average of Three Numbers
Author       : MrLogeshrt
Day          : 1
Program No   : 8
Description  : Calculates the average of three integers entered by the user.

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
    int a, b, c;
    float avg;

    // Scan input from the user
    printf("Enter a number 'a' : ");
    scanf("%d", &a);
    printf("Enter a number 'b' : ");
    scanf("%d", &b);
    printf("Enter a number 'c' : ");
    scanf("%d", &c);

    // Calculate the average of the three integers
    avg = (float)(a + b + c) / 3;

    // Display the results
    printf("\nThe Average of %d, %d and %d is %.2f.\n", a, b, c, avg);

    return 0;
}


/*
Sample Input :
6
3
5

Sample Output : 
Enter a number 'a' : 6
Enter a number 'b' : 3
Enter a number 'c' : 5

The Average of 6, 3 and 5 is 4.67.
*/