/*
------------------------------------------------------------------------
Program Name : Electricity Bill Calculator
Author       : MrLogeshrt
Day          : 2
Program No   : 6
Description  : Calculates the electricity bill amount based on slab-wise unit consumption rates.

Concepts Used:
- Variables
- Arithmetic Operators
- Relational Operators
- Nested if-else Statements
- Input/Output Functions
------------------------------------------------------------------------
*/

/*
-------------------------------
Bill Amount :
0-100 Units     -> ₹1.5/unit
101-200 Units   -> ₹2.5/unit
201-500 Units   -> ₹4/unit
Above 500       -> ₹6/unit
-------------------------------
*/


#include <stdio.h>

int main()
{
    float bill = 0.0;
    int unit;

    // Read the number of units as an input
    printf("Enter the units : ");
    scanf("%d", &unit);

    // Calculate the bill amount based on the unit chart
    if (unit <= 0)
    {
        printf("\nUnit must be greater than zero.\n");
    }

    else 
    {
        if (unit <= 100)
        {
            bill = unit * 1.5;
        }

        else if (unit <= 200)
        {
            bill = 100 * 1.5;
            bill += ((unit - 100) * 2.5);
        }

        else if (unit <= 500)
        {
            bill = 100 * 1.5;
            bill += 100 * 2.5;
            bill += ((unit - 200) * 4);
        }

        else
        {
            bill = 100 * 1.5;
            bill += 100 * 2.5;
            bill += 300 * 4;
            bill += ((unit - 500) * 6);
        }

        printf("\nUnits : %d\n", unit);
        printf("Amount : Rs.%.2f\n", bill);

    }

    return 0;
}


/*
Sample Input 1 :
0

Sample Output 1 :
Enter the units : 0

Unit must be greater than zero.

Sample Input 2 :
50

Sample Output 2 :
Enter the units : 50

Units : 50
Amount : Rs.75.00

Sample Input 3 :
125

Sample Output 3 :
Enter the units : 125

Units : 125
Amount : Rs.212.50

Sample Input 4 :
260

Sample Output 4 :
Enter the units : 260

Units : 260
Amount : Rs.640.00

Sample Input 5 :
512

Sample Output 5 :
Enter the units : 512

Units : 512
Amount : Rs.1672.00

*/