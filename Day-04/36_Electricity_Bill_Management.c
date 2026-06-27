/*
------------------------------------------------------------------------
Program Name : Electricity Bill Management System
Author       : MrLogeshrt
Day          : 4
Program No   : 6
Description  : Calculates electricity bills for multiple consumers
               using slab-wise tariff rates, generates individual
               bills, and displays the total revenue, average bill,
               highest bill, and lowest bill.

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
    int consumers, units;
    float bill, total_bill = 0.0f, avg_bill = 0.0f, max, min;

    // Get the number of consumers from the user
    do
    {
        printf("\nEnter the number of consumers : ");
        scanf("%d", &consumers);

        if (consumers <= 0)
        {
            printf("\nConsumers count must be greater than zero.\n");
        }
    } while (consumers <= 0);

    for (int i = 1; i <= consumers; i++)
    {
        printf("\nUnits consumed by consumer %d : ", i);
        scanf("%d", &units);

        // Validate the units input
        if (units <= 0)
        {
            i--;
            printf("\nUnits must be greater than zero.\n");
        }

        else
        {
            bill = 0.0f;

            // Apply the  rate for each slab rate
            if (units <= 100)
            {
                bill += (units * 1.5);
            }

            else if (units <= 200)
            {
                bill += (100 * 1.5);
                bill += ((units- 100) * 2.5);
            }

            else if (units <= 500)
            {
                bill += (100 * 1.5);
                bill += (100 * 2.5);
                bill += ((units- 200) * 4);
            }

            else 
            {
                bill += (100 * 1.5);
                bill += (100 * 2.5);
                bill += (300 * 4);
                bill += ((units- 500) * 6);
            }

            total_bill += bill;

            printf("\nUnits consumed by consumer %d : %d\n", i, units);
            printf("Consumer %d Bill              : %.2f\n", i, bill);

            if (i == 1)
            {
                max = bill;
                min = bill;
            }

            else
            {
                // Update largest and smallest bill values
                if (bill > max)
                {
                    max = bill;
                }           

                if (bill < min)
                {
                    min = bill;
                }
            }

        }
    }

    // Calculate and display the overall summary
    avg_bill = total_bill / consumers;

    printf("\nTotal consumers         : %d\n", consumers);
    printf("Total  Revenue          : %.2f\n", total_bill);
    printf("Average  bill           : %.2f\n", avg_bill);
    printf("Highest bill            : %.2f\n", max);
    printf("Lowest bill             : %.2f\n", min);

    return 0;

}


/*
========================================================================

ELECTRICITY TARIFF SLABS:
- 0-100 units   : Rs. 1.5 per unit
- 101-200 units : Rs. 2.5 per unit (for units above 100)
- 201-500 units : Rs. 4 per unit (for units above 200)
- 500+ units    : Rs. 6 per unit (for units above 500)
========================================================================

========================================================================

Sample Input 1 :
3
50
75
100

Sample Output 1 :

Enter the number of consumers : 3

Units consumed by consumer 1 : 50

Units consumed by consumer 1 : 50
Consumer 1 Bill              : 75.00

Units consumed by consumer 2 : 75

Units consumed by consumer 2 : 75
Consumer 2 Bill              : 112.50

Units consumed by consumer 3 : 100

Units consumed by consumer 3 : 100
Consumer 3 Bill              : 150.00

Total consumers         : 3
Total  Revenue          : 337.50
Average  bill           : 112.50
Highest bill            : 150.00
Lowest bill             : 75.00

========================================================================

Sample Input 2 :
3
120
150
200

Sample Output 2 :

Enter the number of consumers : 3

Units consumed by consumer 1 : 120

Units consumed by consumer 1 : 120
Consumer 1 Bill              : 200.00

Units consumed by consumer 2 : 150

Units consumed by consumer 2 : 150
Consumer 2 Bill              : 275.00

Units consumed by consumer 3 : 200

Units consumed by consumer 3 : 200
Consumer 3 Bill              : 400.00

Total consumers         : 3
Total  Revenue          : 875.00
Average  bill           : 291.67
Highest bill            : 400.00
Lowest bill             : 200.00

========================================================================

Sample Input 3 :
3
250
350
500

Sample Output 3 :

Enter the number of consumers : 3

Units consumed by consumer 1 : 250

Units consumed by consumer 1 : 250
Consumer 1 Bill              : 650.00

Units consumed by consumer 2 : 350

Units consumed by consumer 2 : 350
Consumer 2 Bill              : 1050.00

Units consumed by consumer 3 : 500

Units consumed by consumer 3 : 500
Consumer 3 Bill              : 1600.00

Total consumers         : 3
Total  Revenue          : 3300.00
Average  bill           : 1100.00
Highest bill            : 1600.00
Lowest bill             : 650.00

========================================================================

Sample Input 4 :
3
600
750
1000

Sample Output 4 :

Enter the number of consumers : 3

Units consumed by consumer 1 : 600

Units consumed by consumer 1 : 600
Consumer 1 Bill              : 1900.00

Units consumed by consumer 2 : 750

Units consumed by consumer 2 : 750
Consumer 2 Bill              : 2450.00

Units consumed by consumer 3 : 1000

Units consumed by consumer 3 : 1000
Consumer 3 Bill              : 3400.00

Total consumers         : 3
Total  Revenue          : 7750.00
Average  bill           : 2583.33
Highest bill            : 3400.00
Lowest bill             : 1900.00

========================================================================

Sample Input 5 :
5
50
120
250
600
100

Sample Output 5 :

Enter the number of consumers : 5

Units consumed by consumer 1 : 50

Units consumed by consumer 1 : 50
Consumer 1 Bill              : 75.00

Units consumed by consumer 2 : 120

Units consumed by consumer 2 : 120
Consumer 2 Bill              : 200.00

Units consumed by consumer 3 : 250

Units consumed by consumer 3 : 250
Consumer 3 Bill              : 650.00

Units consumed by consumer 4 : 600

Units consumed by consumer 4 : 600
Consumer 4 Bill              : 1900.00

Units consumed by consumer 5 : 100

Units consumed by consumer 5 : 100
Consumer 5 Bill              : 150.00

Total consumers         : 5
Total  Revenue          : 2975.00
Average  bill           : 595.00
Highest bill            : 1900.00
Lowest bill             : 75.00

========================================================================

Sample Input 6 :
1
100

Sample Output 6 :

Enter the number of consumers : 1

Units consumed by consumer 1 : 100

Units consumed by consumer 1 : 100
Consumer 1 Bill              : 150.00

Total consumers         : 1
Total  Revenue          : 150.00
Average  bill           : 150.00
Highest bill            : 150.00
Lowest bill             : 150.00

========================================================================

Sample Input 7 :
3
1
1
1

Sample Output 7 :

Enter the number of consumers : 3

Units consumed by consumer 1 : 1

Units consumed by consumer 1 : 1
Consumer 1 Bill              : 1.50

Units consumed by consumer 2 : 1

Units consumed by consumer 2 : 1
Consumer 2 Bill              : 1.50

Units consumed by consumer 3 : 1

Units consumed by consumer 3 : 1
Consumer 3 Bill              : 1.50

Total consumers         : 3
Total  Revenue          : 4.50
Average  bill           : 1.50
Highest bill            : 1.50
Lowest bill             : 1.50

========================================================================

Sample Input 8 :
3
100
101
102

Sample Output 8 :

Enter the number of consumers : 3

Units consumed by consumer 1 : 100

Units consumed by consumer 1 : 100
Consumer 1 Bill              : 150.00

Units consumed by consumer 2 : 101

Units consumed by consumer 2 : 101
Consumer 2 Bill              : 152.50

Units consumed by consumer 3 : 102

Units consumed by consumer 3 : 102
Consumer 3 Bill              : 155.00

Total consumers         : 3
Total  Revenue          : 457.50
Average  bill           : 152.50
Highest bill            : 155.00
Lowest bill             : 150.00

========================================================================

Sample Input 9 :
3
200
201
202

Sample Output 9 :

Enter the number of consumers : 3

Units consumed by consumer 1 : 200

Units consumed by consumer 1 : 200
Consumer 1 Bill              : 400.00

Units consumed by consumer 2 : 201

Units consumed by consumer 2 : 201
Consumer 2 Bill              : 404.00

Units consumed by consumer 3 : 202

Units consumed by consumer 3 : 202
Consumer 3 Bill              : 408.00

Total consumers         : 3
Total  Revenue          : 1212.00
Average  bill           : 404.00
Highest bill            : 408.00
Lowest bill             : 400.00

========================================================================

Sample Input 10 :
3
500
501
502

Sample Output 10 :

Enter the number of consumers : 3

Units consumed by consumer 1 : 500

Units consumed by consumer 1 : 500
Consumer 1 Bill              : 1600.00

Units consumed by consumer 2 : 501

Units consumed by consumer 2 : 501
Consumer 2 Bill              : 1606.00

Units consumed by consumer 3 : 502

Units consumed by consumer 3 : 502
Consumer 3 Bill              : 1612.00

Total consumers         : 3
Total  Revenue          : 4818.00
Average  bill           : 1606.00
Highest bill            : 1612.00
Lowest bill             : 1600.00

========================================================================

Sample Input 11 :
-3
0
5
50
100
150
200

Sample Output 11 :

Enter the number of consumers : -3

Consumers count must be greater than zero.

Enter the number of consumers : 0

Consumers count must be greater than zero.

Enter the number of consumers : 5

Units consumed by consumer 1 : 50

Units consumed by consumer 1 : 50
Consumer 1 Bill              : 75.00

Units consumed by consumer 2 : 100

Units consumed by consumer 2 : 100
Consumer 2 Bill              : 150.00

Units consumed by consumer 3 : 150

Units consumed by consumer 3 : 150
Consumer 3 Bill              : 275.00

Units consumed by consumer 4 : 200

Units consumed by consumer 4 : 200
Consumer 4 Bill              : 400.00

Total consumers         : 5
Total  Revenue          : 975.00
Average  bill           : 195.00
Highest bill            : 400.00
Lowest bill             : 75.00

========================================================================

Sample Input 12 :
3
-50
100
200
250

Sample Output 12 :

Enter the number of consumers : 3

Units consumed by consumer 1 : -50

Units must be greater than zero.

Units consumed by consumer 1 : 100

Units consumed by consumer 1 : 100
Consumer 1 Bill              : 150.00

Units consumed by consumer 2 : 200

Units consumed by consumer 2 : 200
Consumer 2 Bill              : 400.00

Units consumed by consumer 3 : 250

Units consumed by consumer 3 : 250
Consumer 3 Bill              : 650.00

Total consumers         : 3
Total  Revenue          : 1200.00
Average  bill           : 400.00
Highest bill            : 650.00
Lowest bill             : 150.00

========================================================================

Sample Input 13 :
2
0
150
100

Sample Output 13 :

Enter the number of consumers : 2

Units consumed by consumer 1 : 0

Units must be greater than zero.

Units consumed by consumer 1 : 150

Units consumed by consumer 1 : 150
Consumer 1 Bill              : 275.00

Units consumed by consumer 2 : 100

Units consumed by consumer 2 : 100
Consumer 2 Bill              : 150.00

Total consumers         : 2
Total  Revenue          : 425.00
Average  bill           : 212.50
Highest bill            : 275.00
Lowest bill             : 150.00

========================================================================

Sample Input 14 :
4
-100
0
50
-25
150
300
500

Sample Output 14 :

Enter the number of consumers : 4

Units consumed by consumer 1 : -100

Units must be greater than zero.

Units consumed by consumer 1 : 0

Units must be greater than zero.

Units consumed by consumer 1 : 50

Units consumed by consumer 1 : 50
Consumer 1 Bill              : 75.00

Units consumed by consumer 2 : -25

Units must be greater than zero.

Units consumed by consumer 2 : 150

Units consumed by consumer 2 : 150
Consumer 2 Bill              : 275.00

Units consumed by consumer 3 : 300

Units consumed by consumer 3 : 300
Consumer 3 Bill              : 950.00

Units consumed by consumer 4 : 500

Units consumed by consumer 4 : 500
Consumer 4 Bill              : 1600.00

Total consumers         : 4
Total  Revenue          : 2900.00
Average  bill           : 725.00
Highest bill            : 1600.00
Lowest bill             : 75.00

========================================================================

Sample Input 15 :
10
50
100
150
200
250
300
400
500
600
1000

Sample Output 15 :

Enter the number of consumers : 10

Units consumed by consumer 1 : 50

Units consumed by consumer 1 : 50
Consumer 1 Bill              : 75.00

Units consumed by consumer 2 : 100

Units consumed by consumer 2 : 100
Consumer 2 Bill              : 150.00

Units consumed by consumer 3 : 150

Units consumed by consumer 3 : 150
Consumer 3 Bill              : 275.00

Units consumed by consumer 4 : 200

Units consumed by consumer 4 : 200
Consumer 4 Bill              : 400.00

Units consumed by consumer 5 : 250

Units consumed by consumer 5 : 250
Consumer 5 Bill              : 650.00

Units consumed by consumer 6 : 300

Units consumed by consumer 6 : 300
Consumer 6 Bill              : 950.00

Units consumed by consumer 7 : 400

Units consumed by consumer 7 : 400
Consumer 7 Bill              : 1350.00

Units consumed by consumer 8 : 500

Units consumed by consumer 8 : 500
Consumer 8 Bill              : 1600.00

Units consumed by consumer 9 : 600

Units consumed by consumer 9 : 600
Consumer 9 Bill              : 1900.00

Units consumed by consumer 10 : 1000

Units consumed by consumer 10 : 1000
Consumer 10 Bill              : 3400.00

Total consumers         : 10
Total  Revenue          : 10750.00
Average  bill           : 1075.00
Highest bill            : 3400.00
Lowest bill             : 75.00

========================================================================
*/