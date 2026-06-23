/*
------------------------------------------------------------------------
Program Name : Simple Interest Calculator
Author       : MrLogeshrt
Day          : 1
Program No   : 7
Description  : Calculates the simple interest based on principal amount, interest rate, and time period.

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
    double principal, SI;
    float year, interest;

    // Get inputs from the user
    printf("Enter the principal amount : ");
    scanf("%lf", &principal);
    printf("Enter the time period in years : ");
    scanf("%f", &year);
    printf("Enter the Rate of Interest in %% : ");
    scanf("%f", &interest);

    // Calculate Simple Interest by using [SI = (P * n * r) / 100] formula
    SI = (principal * year * interest) / 100;

    // Display the Simple Interest result
    printf("\nThe Simple Interest of %.2lf at %.2f%% rate for %.1f years is %.2lf.\n", principal, interest, year, SI);

    return 0;
}


/*
Sample Input :
100000
5
12.5

Sample Output :
Enter the principal amount : 100000
Enter the time period in years : 5
Enter the Rate of Interest in % : 12.5

The Simple Interest of 100000.00 at 12.50% rate for 5.0 year is 62500.00.
*/