/*
------------------------------------------------------------------------
Program Name : Bank Deposit Analysis System
Author       : MrLogeshrt
Day          : 4
Program No   : 4
Description  : Records customer deposit amounts, calculates the
               total and average deposits, and identifies the
               largest and smallest deposit amounts.

Concepts Used:
- Variables
- do-while Loop
- for Loop
- if-else Statements
- Arithmetic Operators
- Relational Operators
- Input Validation
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int customers;
    double deposit_amount, max, min, total_deposit = 0.0f, avg_deposit = 0.0f;

    // Get a valid number of customers
    do
    {
        printf("\nEnter number of customers : ");
        scanf("%d", &customers);

        if (customers <= 0)
        {
            printf("\nNumber of customers must be greater than zero.\n");
        }

    }while (customers < 0);

    // Read each customer's deposit amount
    for (int i = 1; i <= customers; i++)
    {
        printf("\nEnter customer %d deposit amount : ", i);
        scanf("%lf", &deposit_amount);

        // Reject negative deposits and ask again
        if (deposit_amount < 0.0)
        {
            i--;
            printf("\nInvalid Amount.\n");
        }

        else
        {
            // Set initial max and min values for the first valid deposit
            if (i == 1)
            {
                max = deposit_amount;
                min = deposit_amount;
            }

            else
            {
                // Update largest and smallest deposit values
                if (deposit_amount > max)
                {
                    max = deposit_amount;
                }
                    

                if (deposit_amount < min)
                {
                    min = deposit_amount;
                }
            }

            total_deposit += deposit_amount;
        }
    }

    // Calculate average deposit amount
    avg_deposit = total_deposit / customers;

    // Display the final deposit analysis results
    printf("\nNumber of Customers : %d\n", customers);
    printf("Total deposits      : %.2lf\n", total_deposit);
    printf("Average deposit     : %.2lf\n", avg_deposit);
    printf("Largest deposit     : %.2lf\n", max);
    printf("Smallest deposit    : %.2lf\n", min);

    return 0;
}


/*
========================================================================

Sample Input 1 :
5
1000
2000
1500
3000
2500

Sample Output 1 :

Enter number of customers : 5

Enter customer 1 deposit amount : 1000
Enter customer 2 deposit amount : 2000
Enter customer 3 deposit amount : 1500
Enter customer 4 deposit amount : 3000
Enter customer 5 deposit amount : 2500

Number of Customers : 5
Total deposits      : 10000.00
Average deposit     : 2000.00
Largest deposit     : 3000.00
Smallest deposit    : 1000.00

========================================================================

Sample Input 2 :
4
5000
7500
6000
8000

Sample Output 2 :

Enter number of customers : 4

Enter customer 1 deposit amount : 5000
Enter customer 2 deposit amount : 7500
Enter customer 3 deposit amount : 6000
Enter customer 4 deposit amount : 8000

Number of Customers : 4
Total deposits      : 26500.00
Average deposit     : 6625.00
Largest deposit     : 8000.00
Smallest deposit    : 5000.00

========================================================================

Sample Input 3 :
5
1000
1000
1000
1000
1000

Sample Output 3 :

Enter number of customers : 5

Enter customer 1 deposit amount : 1000
Enter customer 2 deposit amount : 1000
Enter customer 3 deposit amount : 1000
Enter customer 4 deposit amount : 1000
Enter customer 5 deposit amount : 1000

Number of Customers : 5
Total deposits      : 5000.00
Average deposit     : 1000.00
Largest deposit     : 1000.00
Smallest deposit    : 1000.00

========================================================================

Sample Input 4 :
1
5000

Sample Output 4 :

Enter number of customers : 1

Enter customer 1 deposit amount : 5000

Number of Customers : 1
Total deposits      : 5000.00
Average deposit     : 5000.00
Largest deposit     : 5000.00
Smallest deposit    : 5000.00

========================================================================

Sample Input 5 :
4
0
1000
500
2000

Sample Output 5 :

Enter number of customers : 4

Enter customer 1 deposit amount : 0
Enter customer 2 deposit amount : 1000
Enter customer 3 deposit amount : 500
Enter customer 4 deposit amount : 2000

Number of Customers : 4
Total deposits      : 3500.00
Average deposit     : 875.00
Largest deposit     : 2000.00
Smallest deposit    : 0.00

========================================================================

Sample Input 6 :
5
0
0
0
0
0

Sample Output 6 :

Enter number of customers : 5

Enter customer 1 deposit amount : 0
Enter customer 2 deposit amount : 0
Enter customer 3 deposit amount : 0
Enter customer 4 deposit amount : 0
Enter customer 5 deposit amount : 0

Number of Customers : 5
Total deposits      : 0.00
Average deposit     : 0.00
Largest deposit     : 0.00
Smallest deposit    : 0.00

========================================================================

Sample Input 7 :
3
1500.50
2750.75
1999.25

Sample Output 7 :

Enter number of customers : 3

Enter customer 1 deposit amount : 1500.50
Enter customer 2 deposit amount : 2750.75
Enter customer 3 deposit amount : 1999.25

Number of Customers : 3
Total deposits      : 6250.50
Average deposit     : 2083.50
Largest deposit     : 2750.75
Smallest deposit    : 1500.50

========================================================================

Sample Input 8 :
5
1000
2000
3000
4000
5000

Sample Output 8 :

Enter number of customers : 5

Enter customer 1 deposit amount : 1000
Enter customer 2 deposit amount : 2000
Enter customer 3 deposit amount : 3000
Enter customer 4 deposit amount : 4000
Enter customer 5 deposit amount : 5000

Number of Customers : 5
Total deposits      : 15000.00
Average deposit     : 3000.00
Largest deposit     : 5000.00
Smallest deposit    : 1000.00

========================================================================

Sample Input 9 :
5
5000
4000
3000
2000
1000

Sample Output 9 :

Enter number of customers : 5

Enter customer 1 deposit amount : 5000
Enter customer 2 deposit amount : 4000
Enter customer 3 deposit amount : 3000
Enter customer 4 deposit amount : 2000
Enter customer 5 deposit amount : 1000

Number of Customers : 5
Total deposits      : 15000.00
Average deposit     : 3000.00
Largest deposit     : 5000.00
Smallest deposit    : 1000.00

========================================================================

Sample Input 10 :
3
100000
250000
500000

Sample Output 10 :

Enter number of customers : 3

Enter customer 1 deposit amount : 100000
Enter customer 2 deposit amount : 250000
Enter customer 3 deposit amount : 500000

Number of Customers : 3
Total deposits      : 850000.00
Average deposit     : 283333.33
Largest deposit     : 500000.00
Smallest deposit    : 100000.00

========================================================================

Sample Input 11 :
-5
0
10

Sample Output 11 :

Enter number of customers : -5

Number of customers must be greater than zero.

Enter number of customers : 0

Number of customers must be greater than zero.

Enter number of customers : 10

Enter customer 1 deposit amount : 1000
Enter customer 2 deposit amount : 2000
Enter customer 3 deposit amount : 1500
Enter customer 4 deposit amount : 2500
Enter customer 5 deposit amount : 3000
Enter customer 6 deposit amount : 1800
Enter customer 7 deposit amount : 2200
Enter customer 8 deposit amount : 1900
Enter customer 9 deposit amount : 2100
Enter customer 10 deposit amount : 2400

Number of Customers : 10
Total deposits      : 22400.00
Average deposit     : 2240.00
Largest deposit     : 3000.00
Smallest deposit    : 1000.00

========================================================================

Sample Input 12 :
4
1000
-500
2000
1500

Sample Output 12 :

Enter number of customers : 4

Enter customer 1 deposit amount : 1000
Enter customer 2 deposit amount : -500

Invalid Amount.
Enter customer 2 deposit amount : 2000
Enter customer 3 deposit amount : 1500
Enter customer 4 deposit amount : 2500

Number of Customers : 4
Total deposits      : 7000.00
Average deposit     : 1750.00
Largest deposit     : 2500.00
Smallest deposit    : 1000.00

========================================================================

Sample Input 13 :
5
1000
-100
2000
-50
1500

Sample Output 13 :

Enter number of customers : 5

Enter customer 1 deposit amount : 1000
Enter customer 2 deposit amount : -100

Invalid Amount.
Enter customer 2 deposit amount : 2000
Enter customer 3 deposit amount : -50

Invalid Amount.
Enter customer 3 deposit amount : 1500
Enter customer 4 deposit amount : 2500
Enter customer 5 deposit amount : 3000

Number of Customers : 5
Total deposits      : 10000.00
Average deposit     : 2000.00
Largest deposit     : 3000.00
Smallest deposit    : 1000.00

========================================================================

Sample Input 14 :
8
500
5000
1000
4500
750
3000
2000
2500

Sample Output 14 :

Enter number of customers : 8

Enter customer 1 deposit amount : 500
Enter customer 2 deposit amount : 5000
Enter customer 3 deposit amount : 1000
Enter customer 4 deposit amount : 4500
Enter customer 5 deposit amount : 750
Enter customer 6 deposit amount : 3000
Enter customer 7 deposit amount : 2000
Enter customer 8 deposit amount : 2500

Number of Customers : 8
Total deposits      : 19250.00
Average deposit     : 2406.25
Largest deposit     : 5000.00
Smallest deposit    : 500.00

========================================================================

Sample Input 15 :
10
2500
3000
2800
3200
2900
3100
2700
3050
2950
3100

Sample Output 15 :

Enter number of customers : 10

Enter customer 1 deposit amount : 2500
Enter customer 2 deposit amount : 3000
Enter customer 3 deposit amount : 2800
Enter customer 4 deposit amount : 3200
Enter customer 5 deposit amount : 2900
Enter customer 6 deposit amount : 3100
Enter customer 7 deposit amount : 2700
Enter customer 8 deposit amount : 3050
Enter customer 9 deposit amount : 2950
Enter customer 10 deposit amount : 3100

Number of Customers : 10
Total deposits      : 30300.00
Average deposit     : 3030.00
Largest deposit     : 3200.00
Smallest deposit    : 2500.00

========================================================================
*/