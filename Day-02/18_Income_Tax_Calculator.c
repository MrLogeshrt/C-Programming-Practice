/*
------------------------------------------------------------------------
Program Name : Income Tax Calculator
Author       : MrLogeshrt
Day          : 2
Program No   : 8
Description  : Calculates the income tax amount based on progressive annual income tax slabs.

Concepts Used:
- Variables
- Arithmetic Operators
- Relational Operators
- if-else Statements
- Input/Output Functions
------------------------------------------------------------------------
*/

/*
Constraints for Income Tax Calculation:

Annual Income Slabs and Tax Rates:

0 - 3,00,000             -> No Tax

3,00,001 - 7,00,000      -> 5%

7,00,001 - 10,00,000     -> 10%

10,00,001 - 15,00,000    -> 15%

Above 15,00,000          -> 20%

*/


#include <stdio.h>

int main()
{
    double income, tax = 0.0;

    // Read the annual income as an input
    printf("Enter your annual income : ");
    scanf("%lf", &income);

    // Calculate the tax amount based on the income slabs
    if (income <= 0)
    {
        printf("\nIncome must be greater than zero.\n");
    }
    else
    {
        if (income <= 300000)
        {
            tax = 0;
        }

        else if (income <= 700000)
        {
            tax = (income - 300000) * 0.05;
        }

        else if (income <= 1000000)
        {
            tax = (400000 * 0.05) + (income - 700000) * 0.1;
        }

        else if (income <= 1500000)
        {
            tax = (400000 * 0.05) + (300000 * 0.1) + (income - 1000000) * 0.15;
        }

        else
        {
            tax = (400000 * 0.05) + (300000 * 0.1) + (500000 * 0.15) + ((income - 1500000) * 0.2);
        }

        printf("\nAnnual Income : Rs.%.2lf\n", income);
        printf("Income Tax Amount : Rs.%.2lf\n", tax);

    }

    return 0;

}


/*
Sample Input 1 :
50000

Sample Output 1 :
Enter your annual income : 50000

Annual Income : Rs.50000.00
Income Tax Amount : Rs.0.00

Sample Input 2 :
500000

Sample Output 2 :
Enter your annual income : 500000

Annual Income : Rs.500000.00
Income Tax Amount : Rs.10000.00

Sample Input 3 :
800000

Sample Output 3 :
Enter your annual income : 800000

Annual Income : Rs.800000.00
Income Tax Amount : Rs.30000.00

Sample Input 4 :
1500000

Sample Output 4 :
Enter your annual income : 1500000

Annual Income : Rs.1500000.00
Income Tax Amount : Rs.125000.00

Sample Input 5 :
2000000

Sample Output 5 :
Enter your annual income : 2000000

Annual Income : Rs.2000000.00
Income Tax Amount : Rs.225000.00

Sample Input 6 :
0

Sample Output 6 :
Enter your annual income : 0

Income must be greater than zero.
*/
