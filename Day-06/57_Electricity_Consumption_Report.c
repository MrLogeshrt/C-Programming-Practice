/*
------------------------------------------------------------------------
Program Name : House Electricity Consumption Report
Author       : MrLogeshrt
Day          : 6
Program No   : 7
Description  : Monitors electricity consumption in houses
               and calculates the highest consumption,
               lowest consumption, average consumption,
               and counts houses with consumption above or below certain thresholds.
------------------------------------------------------------------------

Concepts Used:
- Variables
- Arrays
- for Loop
- Relational Operators
- Conditional Statements
- Running Total
- Maximum and Minimum Search
- Average Calculation
- Input Validation
- Input/Output Functions
------------------------------------------------------------------------

Constraints:

1. House count must be between 1 and 50.
2. Electricity consumption must be a non-negative integer.
3. Average Consumption = Total Consumption / House Count.
4. Houses with consumption ≤ 100 units are considered low consumers.
5. Houses with consumption > 500 units are considered high consumers.
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int n;
    int max_consumption, min_consumption, units_500 = 0, units_100 = 0;
    int total_consumption = 0;

    do
    {
        printf("\nEnter the number of houses : ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("\nInvalid Input. Count cannot be less than or equal to zero.\n");
        }

        else if (n > 50)
        {
            printf("\nCount must be in the range of 1 to 50.\n");
        }
    } while (n <= 0 || n > 50);

    int elec_consumption[n];

    // Read electricity consumption and generate usage statistics
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the electricity consumption of House %d : ", i + 1);
        scanf("%d", &elec_consumption[i]);

        if (elec_consumption[i] < 0)
        {
            printf("\nElectricity consumption cannot be negative.\n");
            i--;
            continue;
        }

        else
        {
            if (i == 0)
            {
                max_consumption = elec_consumption[i];
                min_consumption = elec_consumption[i];
            }

            else
            {
                if (max_consumption < elec_consumption[i])
                {
                    max_consumption = elec_consumption[i];
                }

                if (min_consumption > elec_consumption[i])
                {
                    min_consumption = elec_consumption[i];
                }
            }

            if (elec_consumption[i] > 500)
            {
                units_500++;
            }

            else if (elec_consumption[i] <= 100)
            {
                units_100++;
            }

        }

        total_consumption += elec_consumption[i];
    }

    float average_units = (float)total_consumption / n;

    // Display the electricity consumption report
    printf("\n=======================================================\n");
    printf("\tHouse Electricity Consumption Report\n");
    printf("=======================================================\n");
    printf("Total Houses                        : %d\n", n);
    printf("Total Consumed Units                : %d\n", total_consumption);
    printf("Average Consumption                 : %.2f\n", average_units);
    printf("Highest Consumption                 : %d\n", max_consumption);
    printf("Lowest Consumption                  : %d\n", min_consumption);
    printf("High Consumption Houses             : %d\n", units_500);
    printf("Low Consumption Houses              : %d\n", units_100);
    printf("=======================================================\n");

    return 0;

}



/*
========================================================================

Sample Input 1 :
5
50
150
300
450
600

Sample Output 1 :

Enter the number of houses : 5

Enter the electricity consumption of House 1 : 50
Enter the electricity consumption of House 2 : 150
Enter the electricity consumption of House 3 : 300
Enter the electricity consumption of House 4 : 450
Enter the electricity consumption of House 5 : 600

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 5
Total Consumed Units                : 1550
Average Consumption                 : 310.00
Highest Consumption                 : 600
Lowest Consumption                  : 50
High Consumption Houses             : 1
Low Consumption Houses              : 1
=======================================================

========================================================================

Sample Input 2 :
4
100
100
100
100

Sample Output 2 :

Enter the number of houses : 4

Enter the electricity consumption of House 1 : 100
Enter the electricity consumption of House 2 : 100
Enter the electricity consumption of House 3 : 100
Enter the electricity consumption of House 4 : 100

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 4
Total Consumed Units                : 400
Average Consumption                 : 100.00
Highest Consumption                 : 100
Lowest Consumption                  : 100
High Consumption Houses             : 0
Low Consumption Houses              : 4
=======================================================

========================================================================

Sample Input 3 :
1
250

Sample Output 3 :

Enter the number of houses : 1

Enter the electricity consumption of House 1 : 250

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 1
Total Consumed Units                : 250
Average Consumption                 : 250.00
Highest Consumption                 : 250
Lowest Consumption                  : 250
High Consumption Houses             : 0
Low Consumption Houses              : 0
=======================================================

========================================================================

Sample Input 4 :
6
600
700
800
900
1000
1100

Sample Output 4 :

Enter the number of houses : 6

Enter the electricity consumption of House 1 : 600
Enter the electricity consumption of House 2 : 700
Enter the electricity consumption of House 3 : 800
Enter the electricity consumption of House 4 : 900
Enter the electricity consumption of House 5 : 1000
Enter the electricity consumption of House 6 : 1100

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 6
Total Consumed Units                : 5100
Average Consumption                 : 850.00
Highest Consumption                 : 1100
Lowest Consumption                  : 600
High Consumption Houses             : 6
Low Consumption Houses              : 0
=======================================================

========================================================================

Sample Input 5 :
5
10
20
30
40
50

Sample Output 5 :

Enter the number of houses : 5

Enter the electricity consumption of House 1 : 10
Enter the electricity consumption of House 2 : 20
Enter the electricity consumption of House 3 : 30
Enter the electricity consumption of House 4 : 40
Enter the electricity consumption of House 5 : 50

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 5
Total Consumed Units                : 150
Average Consumption                 : 30.00
Highest Consumption                 : 50
Lowest Consumption                  : 10
High Consumption Houses             : 0
Low Consumption Houses              : 5
=======================================================

========================================================================

Sample Input 6 :
7
0
100
200
300
400
500
600

Sample Output 6 :

Enter the number of houses : 7

Enter the electricity consumption of House 1 : 0
Enter the electricity consumption of House 2 : 100
Enter the electricity consumption of House 3 : 200
Enter the electricity consumption of House 4 : 300
Enter the electricity consumption of House 5 : 400
Enter the electricity consumption of House 6 : 500
Enter the electricity consumption of House 7 : 600

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 7
Total Consumed Units                : 2100
Average Consumption                 : 300.00
Highest Consumption                 : 600
Lowest Consumption                  : 0
High Consumption Houses             : 1
Low Consumption Houses              : 2
=======================================================

========================================================================

Sample Input 7 :
3
501
502
503

Sample Output 7 :

Enter the number of houses : 3

Enter the electricity consumption of House 1 : 501
Enter the electricity consumption of House 2 : 502
Enter the electricity consumption of House 3 : 503

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 3
Total Consumed Units                : 1506
Average Consumption                 : 502.00
Highest Consumption                 : 503
Lowest Consumption                  : 501
High Consumption Houses             : 3
Low Consumption Houses              : 0
=======================================================

========================================================================

Sample Input 8 :
5
150
150
150
150
150

Sample Output 8 :

Enter the number of houses : 5

Enter the electricity consumption of House 1 : 150
Enter the electricity consumption of House 2 : 150
Enter the electricity consumption of House 3 : 150
Enter the electricity consumption of House 4 : 150
Enter the electricity consumption of House 5 : 150

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 5
Total Consumed Units                : 750
Average Consumption                 : 150.00
Highest Consumption                 : 150
Lowest Consumption                  : 150
High Consumption Houses             : 0
Low Consumption Houses              : 0
=======================================================

========================================================================

Sample Input 9 :
4
80
120
480
520

Sample Output 9 :

Enter the number of houses : 4

Enter the electricity consumption of House 1 : 80
Enter the electricity consumption of House 2 : 120
Enter the electricity consumption of House 3 : 480
Enter the electricity consumption of House 4 : 520

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 4
Total Consumed Units                : 1200
Average Consumption                 : 300.00
Highest Consumption                 : 520
Lowest Consumption                  : 80
High Consumption Houses             : 1
Low Consumption Houses              : 1
=======================================================

========================================================================

Sample Input 10 :
6
1000
1000
1000
1000
1000
1000

Sample Output 10 :

Enter the number of houses : 6

Enter the electricity consumption of House 1 : 1000
Enter the electricity consumption of House 2 : 1000
Enter the electricity consumption of House 3 : 1000
Enter the electricity consumption of House 4 : 1000
Enter the electricity consumption of House 5 : 1000
Enter the electricity consumption of House 6 : 1000

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 6
Total Consumed Units                : 6000
Average Consumption                 : 1000.00
Highest Consumption                 : 1000
Lowest Consumption                  : 1000
High Consumption Houses             : 6
Low Consumption Houses              : 0
=======================================================

========================================================================

Sample Input 11 :
5
50
150
250
350
450

Sample Output 11 :

Enter the number of houses : 5

Enter the electricity consumption of House 1 : 50
Enter the electricity consumption of House 2 : 150
Enter the electricity consumption of House 3 : 250
Enter the electricity consumption of House 4 : 350
Enter the electricity consumption of House 5 : 450

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 5
Total Consumed Units                : 1250
Average Consumption                 : 250.00
Highest Consumption                 : 450
Lowest Consumption                  : 50
High Consumption Houses             : 0
Low Consumption Houses              : 1
=======================================================

========================================================================

Sample Input 12 :
4
0
0
0
0

Sample Output 12 :

Enter the number of houses : 4

Enter the electricity consumption of House 1 : 0
Enter the electricity consumption of House 2 : 0
Enter the electricity consumption of House 3 : 0
Enter the electricity consumption of House 4 : 0

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 4
Total Consumed Units                : 0
Average Consumption                 : 0.00
Highest Consumption                 : 0
Lowest Consumption                  : 0
High Consumption Houses             : 0
Low Consumption Houses              : 4
=======================================================

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter the number of houses : 0

Invalid Input. Count cannot be less than or equal to zero.

Enter the number of houses : 3

Enter the electricity consumption of House 1 : 50
Enter the electricity consumption of House 2 : 150
Enter the electricity consumption of House 3 : 250

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 3
Total Consumed Units                : 450
Average Consumption                 : 150.00
Highest Consumption                 : 250
Lowest Consumption                  : 50
High Consumption Houses             : 0
Low Consumption Houses              : 1
=======================================================

========================================================================

Sample Input 14 :
51

Sample Output 14 :

Enter the number of houses : 51

Count must be in the range of 1 to 50.

Enter the number of houses : 4

Enter the electricity consumption of House 1 : 200
Enter the electricity consumption of House 2 : 300
Enter the electricity consumption of House 3 : 400
Enter the electricity consumption of House 4 : 500

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 4
Total Consumed Units                : 1400
Average Consumption                 : 350.00
Highest Consumption                 : 500
Lowest Consumption                  : 200
High Consumption Houses             : 0
Low Consumption Houses              : 0
=======================================================

========================================================================

Sample Input 15 :
5
-50
100
600
-20
150

Sample Output 15 :

Enter the number of houses : 5

Enter the electricity consumption of House 1 : -50

Electricity consumption cannot be negative.

Enter the electricity consumption of House 1 : 100
Enter the electricity consumption of House 2 : 600
Enter the electricity consumption of House 3 : -20

Electricity consumption cannot be negative.

Enter the electricity consumption of House 3 : 150
Enter the electricity consumption of House 4 : 200
Enter the electricity consumption of House 5 : 250

=======================================================
	House Electricity Consumption Report
=======================================================
Total Houses                        : 5
Total Consumed Units                : 1300
Average Consumption                 : 260.00
Highest Consumption                 : 600
Lowest Consumption                  : 100
High Consumption Houses             : 1
Low Consumption Houses              : 1
=======================================================

========================================================================
*/