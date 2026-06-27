/*
------------------------------------------------------------------------
Program Name : Parking Fee Calculator
Author       : MrLogeshrt
Day          : 4
Program No   : 5
Description  : Calculates parking fees for multiple vehicles based
               on parking duration, displays individual parking
               charges, and generates the total revenue and average
               parking fee collected.

Concepts Used:
- Variables
- do-while Loop
- for Loop
- while Loop
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
    int vehicles, hours, temp;
    float fee, total_fee = 0.0f, avg_fee = 0.0f;

    // Get the number of vehicles from the user
    do
    {
        printf("\nEnter the number of vehicles : ");
        scanf("%d", &vehicles);

        if (vehicles <= 0)
        {
            printf("\nVehicle count must be greater than zero.\n");
        }
    } while (vehicles <= 0);

    for (int i = 1; i <= vehicles; i++)
    {
        printf("\nEnter the parking hours of vehicle %d : ", i);
        scanf("%d", &hours);

        // Validate the parking hours input
        if (hours <= 0)
        {
            i--;
            printf("\nParking hours must be greater than zero.\n");
        }

        else
        {
            // Calculate the parking fee for the current vehicle
            temp = hours;
            fee = 0.0f;

            // Apply the parking rate for each hour
            while(temp > 0)
            {
                if (temp <= 2)
                {
                    fee += 30;
                }

                else if (temp <= 5)
                {
                    fee += 20;
                }

                else 
                {
                    fee += 10;
                }

                temp--;
            }

            total_fee += fee;

            printf("\nParking Hours of vehicle %d : %d\n", i, hours);
            printf("Parking Fee of vehicle %d   : %.2f\n", i, fee);

        }

    }

    // Calculate and display the overall summary
    avg_fee = total_fee / vehicles;

    printf("\nTotal Vehicle         : %d\n", vehicles);
    printf("Total Parking Revenue : %.2f\n", total_fee);
    printf("Average Parking Fee   : %.2f\n", avg_fee);


    return 0;

}


/*
========================================================================

Sample Input 1 :
3
1
2
1

Sample Output 1 :

Enter the number of vehicles : 3

Enter the parking hours of vehicle 1 : 1

Parking Hours of vehicle 1 : 1
Parking Fee of vehicle 1   : 30.00

Enter the parking hours of vehicle 2 : 2

Parking Hours of vehicle 2 : 2
Parking Fee of vehicle 2   : 60.00

Enter the parking hours of vehicle 3 : 1

Parking Hours of vehicle 3 : 1
Parking Fee of vehicle 3   : 30.00

Total Vehicle         : 3
Total Parking Revenue : 120.00
Average Parking Fee   : 40.00

========================================================================

Sample Input 2 :
3
3
4
5

Sample Output 2 :

Enter the number of vehicles : 3

Enter the parking hours of vehicle 1 : 3

Parking Hours of vehicle 1 : 3
Parking Fee of vehicle 1   : 70.00

Enter the parking hours of vehicle 2 : 4

Parking Hours of vehicle 2 : 4
Parking Fee of vehicle 2   : 90.00

Enter the parking hours of vehicle 3 : 5

Parking Hours of vehicle 3 : 5
Parking Fee of vehicle 3   : 110.00

Total Vehicle         : 3
Total Parking Revenue : 270.00
Average Parking Fee   : 90.00

========================================================================

Sample Input 3 :
3
6
8
10

Sample Output 3 :

Enter the number of vehicles : 3

Enter the parking hours of vehicle 1 : 6

Parking Hours of vehicle 1 : 6
Parking Fee of vehicle 1   : 120.00

Enter the parking hours of vehicle 2 : 8

Parking Hours of vehicle 2 : 8
Parking Fee of vehicle 2   : 160.00

Enter the parking hours of vehicle 3 : 10

Parking Hours of vehicle 3 : 10
Parking Fee of vehicle 3   : 200.00

Total Vehicle         : 3
Total Parking Revenue : 480.00
Average Parking Fee   : 160.00

========================================================================

Sample Input 4 :
5
1
3
2
7
5

Sample Output 4 :

Enter the number of vehicles : 5

Enter the parking hours of vehicle 1 : 1

Parking Hours of vehicle 1 : 1
Parking Fee of vehicle 1   : 30.00

Enter the parking hours of vehicle 2 : 3

Parking Hours of vehicle 2 : 3
Parking Fee of vehicle 2   : 70.00

Enter the parking hours of vehicle 3 : 2

Parking Hours of vehicle 3 : 2
Parking Fee of vehicle 3   : 60.00

Enter the parking hours of vehicle 4 : 7

Parking Hours of vehicle 4 : 7
Parking Fee of vehicle 4   : 140.00

Enter the parking hours of vehicle 5 : 5

Parking Hours of vehicle 5 : 5
Parking Fee of vehicle 5   : 110.00

Total Vehicle         : 5
Total Parking Revenue : 410.00
Average Parking Fee   : 82.00

========================================================================

Sample Input 5 :
1
1

Sample Output 5 :

Enter the number of vehicles : 1

Enter the parking hours of vehicle 1 : 1

Parking Hours of vehicle 1 : 1
Parking Fee of vehicle 1   : 30.00

Total Vehicle         : 1
Total Parking Revenue : 30.00
Average Parking Fee   : 30.00

========================================================================

Sample Input 6 :
4
1
1
1
1

Sample Output 6 :

Enter the number of vehicles : 4

Enter the parking hours of vehicle 1 : 1

Parking Hours of vehicle 1 : 1
Parking Fee of vehicle 1   : 30.00

Enter the parking hours of vehicle 2 : 1

Parking Hours of vehicle 2 : 1
Parking Fee of vehicle 2   : 30.00

Enter the parking hours of vehicle 3 : 1

Parking Hours of vehicle 3 : 1
Parking Fee of vehicle 3   : 30.00

Enter the parking hours of vehicle 4 : 1

Parking Hours of vehicle 4 : 1
Parking Fee of vehicle 4   : 30.00

Total Vehicle         : 4
Total Parking Revenue : 120.00
Average Parking Fee   : 30.00

========================================================================

Sample Input 7 :
3
2
2
2

Sample Output 7 :

Enter the number of vehicles : 3

Enter the parking hours of vehicle 1 : 2

Parking Hours of vehicle 1 : 2
Parking Fee of vehicle 1   : 60.00

Enter the parking hours of vehicle 2 : 2

Parking Hours of vehicle 2 : 2
Parking Fee of vehicle 2   : 60.00

Enter the parking hours of vehicle 3 : 2

Parking Hours of vehicle 3 : 2
Parking Fee of vehicle 3   : 60.00

Total Vehicle         : 3
Total Parking Revenue : 180.00
Average Parking Fee   : 60.00

========================================================================

Sample Input 8 :
3
2
3
4

Sample Output 8 :

Enter the number of vehicles : 3

Enter the parking hours of vehicle 1 : 2

Parking Hours of vehicle 1 : 2
Parking Fee of vehicle 1   : 60.00

Enter the parking hours of vehicle 2 : 3

Parking Hours of vehicle 2 : 3
Parking Fee of vehicle 2   : 70.00

Enter the parking hours of vehicle 3 : 4

Parking Hours of vehicle 3 : 4
Parking Fee of vehicle 3   : 90.00

Total Vehicle         : 3
Total Parking Revenue : 220.00
Average Parking Fee   : 73.33

========================================================================

Sample Input 9 :
3
5
6
7

Sample Output 9 :

Enter the number of vehicles : 3

Enter the parking hours of vehicle 1 : 5

Parking Hours of vehicle 1 : 5
Parking Fee of vehicle 1   : 110.00

Enter the parking hours of vehicle 2 : 6

Parking Hours of vehicle 2 : 6
Parking Fee of vehicle 2   : 120.00

Enter the parking hours of vehicle 3 : 7

Parking Hours of vehicle 3 : 7
Parking Fee of vehicle 3   : 140.00

Total Vehicle         : 3
Total Parking Revenue : 370.00
Average Parking Fee   : 123.33

========================================================================

Sample Input 10 :
2
20
24

Sample Output 10 :

Enter the number of vehicles : 2

Enter the parking hours of vehicle 1 : 20

Parking Hours of vehicle 1 : 20
Parking Fee of vehicle 1   : 300.00

Enter the parking hours of vehicle 2 : 24

Parking Hours of vehicle 2 : 24
Parking Fee of vehicle 2   : 360.00

Total Vehicle         : 2
Total Parking Revenue : 660.00
Average Parking Fee   : 330.00

========================================================================

Sample Input 11 :
-5
0
3
1
2
1

Sample Output 11 :

Enter the number of vehicles : -5

Vehicle count must be greater than zero.

Enter the number of vehicles : 0

Vehicle count must be greater than zero.

Enter the number of vehicles : 3

Enter the parking hours of vehicle 1 : 1

Parking Hours of vehicle 1 : 1
Parking Fee of vehicle 1   : 30.00

Enter the parking hours of vehicle 2 : 2

Parking Hours of vehicle 2 : 2
Parking Fee of vehicle 2   : 60.00

Enter the parking hours of vehicle 3 : 1

Parking Hours of vehicle 3 : 1
Parking Fee of vehicle 3   : 30.00

Total Vehicle         : 3
Total Parking Revenue : 120.00
Average Parking Fee   : 40.00

========================================================================

Sample Input 12 :
3
-2
2
3
2

Sample Output 12 :

Enter the number of vehicles : 3

Enter the parking hours of vehicle 1 : -2

Parking hours must be greater than zero.

Enter the parking hours of vehicle 1 : 2

Parking Hours of vehicle 1 : 2
Parking Fee of vehicle 1   : 60.00

Enter the parking hours of vehicle 2 : 3

Parking Hours of vehicle 2 : 3
Parking Fee of vehicle 2   : 70.00

Enter the parking hours of vehicle 3 : 2

Parking Hours of vehicle 3 : 2
Parking Fee of vehicle 3   : 60.00

Total Vehicle         : 3
Total Parking Revenue : 190.00
Average Parking Fee   : 63.33

========================================================================

Sample Input 13 :
2
0
5
3

Sample Output 13 :

Enter the number of vehicles : 2

Enter the parking hours of vehicle 1 : 0

Parking hours must be greater than zero.

Enter the parking hours of vehicle 1 : 5

Parking Hours of vehicle 1 : 5
Parking Fee of vehicle 1   : 110.00

Enter the parking hours of vehicle 2 : 3

Parking Hours of vehicle 2 : 3
Parking Fee of vehicle 2   : 70.00

Total Vehicle         : 2
Total Parking Revenue : 180.00
Average Parking Fee   : 90.00

========================================================================

Sample Input 14 :
4
-1
0
2
-3
4
5
1

Sample Output 14 :

Enter the number of vehicles : 4

Enter the parking hours of vehicle 1 : -1

Parking hours must be greater than zero.

Enter the parking hours of vehicle 1 : 0

Parking hours must be greater than zero.

Enter the parking hours of vehicle 1 : 2

Parking Hours of vehicle 1 : 2
Parking Fee of vehicle 1   : 60.00

Enter the parking hours of vehicle 2 : -3

Parking hours must be greater than zero.

Enter the parking hours of vehicle 2 : 4

Parking Hours of vehicle 2 : 4
Parking Fee of vehicle 2   : 90.00

Enter the parking hours of vehicle 3 : 5

Parking Hours of vehicle 3 : 5
Parking Fee of vehicle 3   : 110.00

Enter the parking hours of vehicle 4 : 1

Parking Hours of vehicle 4 : 1
Parking Fee of vehicle 4   : 30.00

Total Vehicle         : 4
Total Parking Revenue : 290.00
Average Parking Fee   : 72.50

========================================================================

Sample Input 15 :
10
1
2
3
4
5
6
7
8
9
10

Sample Output 15 :

Enter the number of vehicles : 10

Enter the parking hours of vehicle 1 : 1

Parking Hours of vehicle 1 : 1
Parking Fee of vehicle 1   : 30.00

Enter the parking hours of vehicle 2 : 2

Parking Hours of vehicle 2 : 2
Parking Fee of vehicle 2   : 60.00

Enter the parking hours of vehicle 3 : 3

Parking Hours of vehicle 3 : 3
Parking Fee of vehicle 3   : 70.00

Enter the parking hours of vehicle 4 : 4

Parking Hours of vehicle 4 : 4
Parking Fee of vehicle 4   : 90.00

Enter the parking hours of vehicle 5 : 5

Parking Hours of vehicle 5 : 5
Parking Fee of vehicle 5   : 110.00

Enter the parking hours of vehicle 6 : 6

Parking Hours of vehicle 6 : 6
Parking Fee of vehicle 6   : 120.00

Enter the parking hours of vehicle 7 : 7

Parking Hours of vehicle 7 : 7
Parking Fee of vehicle 7   : 140.00

Enter the parking hours of vehicle 8 : 8

Parking Hours of vehicle 8 : 8
Parking Fee of vehicle 8   : 160.00

Enter the parking hours of vehicle 9 : 9

Parking Hours of vehicle 9 : 9
Parking Fee of vehicle 9   : 180.00

Enter the parking hours of vehicle 10 : 10

Parking Hours of vehicle 10 : 10
Parking Fee of vehicle 10   : 200.00

Total Vehicle         : 10
Total Parking Revenue : 1160.00
Average Parking Fee   : 116.00

========================================================================
*/