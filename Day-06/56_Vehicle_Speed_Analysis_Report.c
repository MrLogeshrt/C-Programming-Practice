/*
------------------------------------------------------------------------
Program Name : Vehicle Speed Analysis Report
Author       : MrLogeshrt
Day          : 6
Program No   : 6
Description  : Monitors vehicle speeds by
               calculating the highest speed,
               lowest speed, average speed,
               and counting over-speed vehicles.
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

1. Vehicle count must be between 1 and 100.
2. Speed must be between 0 and 200 km/h.
3. Average Speed = Total Speed / Vehicle Count.
4. Vehicles with speed ≤ 80 km/h are considered within the speed limit.
5. Vehicles with speed > 80 km/h are considered overspeed vehicles.
------------------------------------------------------------------------
*/



#include <stdio.h>

int main()
{
    int n;
    int max_speed, min_speed, overspeed = 0, total_speed = 0;
    float average_speed = 0.0f;

    do
    {
        printf("\nEnter the vehicle count : ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("\nInvalid Input. Count must be greater than zero.\n");
        }

        else if (n > 100)
        {
            printf("\nVehicle Count must be less than or equal to 100.\n");
        }
    } while(n <= 0 || n > 100);

    int speed[n];

    // Read vehicle speeds and generate traffic statistics
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter speed of the vehicle %d : ", i + 1);
        scanf("%d", &speed[i]);

        if (speed[i] < 0)
        {
            printf("\nSpeed cannot be negative.\n");
            i--;
            continue;
        }

        else if (speed[i] > 200)
        {
            printf("\nSpeed Range should be 0 to 200.\n");
            i--;
            continue;
        }

        else
        {
            if (i == 0)
            {
                max_speed = speed[i];
                min_speed = speed[i];
            }

            else
            {
                if (max_speed < speed[i])
                {
                    max_speed = speed[i];
                }

                if (min_speed > speed[i])
                {
                    min_speed = speed[i];
                }
            }

            if (speed[i] > 80)
            {
                overspeed++;
            }
        }

        total_speed += speed[i];
    }

    average_speed = (float)total_speed / n;

    // Display the vehicle speed analysis report
    printf("\n=======================================================\n");
    printf("\tVehicle Speed Analysis Report\n");
    printf("=======================================================\n");
    printf("Total Vehicles              : %d\n", n);
    printf("Average Vehicle Speed       : %.2f\n", average_speed);
    printf("Highest Speed               : %d\n", max_speed);
    printf("Lowest Speed                : %d\n", min_speed);
    printf("Overspeed Vehicles          : %d\n", overspeed);
    printf("Safe-Speed Vehicles         : %d\n", n - overspeed);
    printf("=======================================================\n");

    return 0;
}


/*
========================================================================

Sample Input 1 :
5
60
85
75
90
70

Sample Output 1 :

Enter the vehicle count : 5

Enter speed of the vehicle 1 : 60
Enter speed of the vehicle 2 : 85
Enter speed of the vehicle 3 : 75
Enter speed of the vehicle 4 : 90
Enter speed of the vehicle 5 : 70

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 5
Average Vehicle Speed       : 76.00
Highest Speed               : 90
Lowest Speed                : 60
Overspeed Vehicles          : 2
Safe-Speed Vehicles         : 3
=======================================================

========================================================================

Sample Input 2 :
4
80
80
80
80

Sample Output 2 :

Enter the vehicle count : 4

Enter speed of the vehicle 1 : 80
Enter speed of the vehicle 2 : 80
Enter speed of the vehicle 3 : 80
Enter speed of the vehicle 4 : 80

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 4
Average Vehicle Speed       : 80.00
Highest Speed               : 80
Lowest Speed                : 80
Overspeed Vehicles          : 0
Safe-Speed Vehicles         : 4
=======================================================

========================================================================

Sample Input 3 :
1
50

Sample Output 3 :

Enter the vehicle count : 1

Enter speed of the vehicle 1 : 50

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 1
Average Vehicle Speed       : 50.00
Highest Speed               : 50
Lowest Speed                : 50
Overspeed Vehicles          : 0
Safe-Speed Vehicles         : 1
=======================================================

========================================================================

Sample Input 4 :
6
100
110
120
130
140
150

Sample Output 4 :

Enter the vehicle count : 6

Enter speed of the vehicle 1 : 100
Enter speed of the vehicle 2 : 110
Enter speed of the vehicle 3 : 120
Enter speed of the vehicle 4 : 130
Enter speed of the vehicle 5 : 140
Enter speed of the vehicle 6 : 150

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 6
Average Vehicle Speed       : 125.00
Highest Speed               : 150
Lowest Speed                : 100
Overspeed Vehicles          : 6
Safe-Speed Vehicles         : 0
=======================================================

========================================================================

Sample Input 5 :
5
20
30
40
50
60

Sample Output 5 :

Enter the vehicle count : 5

Enter speed of the vehicle 1 : 20
Enter speed of the vehicle 2 : 30
Enter speed of the vehicle 3 : 40
Enter speed of the vehicle 4 : 50
Enter speed of the vehicle 5 : 60

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 5
Average Vehicle Speed       : 40.00
Highest Speed               : 60
Lowest Speed                : 20
Overspeed Vehicles          : 0
Safe-Speed Vehicles         : 5
=======================================================

========================================================================

Sample Input 6 :
7
0
40
80
120
160
200
100

Sample Output 6 :

Enter the vehicle count : 7

Enter speed of the vehicle 1 : 0
Enter speed of the vehicle 2 : 40
Enter speed of the vehicle 3 : 80
Enter speed of the vehicle 4 : 120
Enter speed of the vehicle 5 : 160
Enter speed of the vehicle 6 : 200
Enter speed of the vehicle 7 : 100

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 7
Average Vehicle Speed       : 100.00
Highest Speed               : 200
Lowest Speed                : 0
Overspeed Vehicles          : 4
Safe-Speed Vehicles         : 3
=======================================================

========================================================================

Sample Input 7 :
3
81
82
83

Sample Output 7 :

Enter the vehicle count : 3

Enter speed of the vehicle 1 : 81
Enter speed of the vehicle 2 : 82
Enter speed of the vehicle 3 : 83

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 3
Average Vehicle Speed       : 82.00
Highest Speed               : 83
Lowest Speed                : 81
Overspeed Vehicles          : 3
Safe-Speed Vehicles         : 0
=======================================================

========================================================================

Sample Input 8 :
5
75
75
75
75
75

Sample Output 8 :

Enter the vehicle count : 5

Enter speed of the vehicle 1 : 75
Enter speed of the vehicle 2 : 75
Enter speed of the vehicle 3 : 75
Enter speed of the vehicle 4 : 75
Enter speed of the vehicle 5 : 75

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 5
Average Vehicle Speed       : 75.00
Highest Speed               : 75
Lowest Speed                : 75
Overspeed Vehicles          : 0
Safe-Speed Vehicles         : 5
=======================================================

========================================================================

Sample Input 9 :
4
65
75
85
95

Sample Output 9 :

Enter the vehicle count : 4

Enter speed of the vehicle 1 : 65
Enter speed of the vehicle 2 : 75
Enter speed of the vehicle 3 : 85
Enter speed of the vehicle 4 : 95

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 4
Average Vehicle Speed       : 80.00
Highest Speed               : 95
Lowest Speed                : 65
Overspeed Vehicles          : 2
Safe-Speed Vehicles         : 2
=======================================================

========================================================================

Sample Input 10 :
6
200
200
200
200
200
200

Sample Output 10 :

Enter the vehicle count : 6

Enter speed of the vehicle 1 : 200
Enter speed of the vehicle 2 : 200
Enter speed of the vehicle 3 : 200
Enter speed of the vehicle 4 : 200
Enter speed of the vehicle 5 : 200
Enter speed of the vehicle 6 : 200

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 6
Average Vehicle Speed       : 200.00
Highest Speed               : 200
Lowest Speed                : 200
Overspeed Vehicles          : 6
Safe-Speed Vehicles         : 0
=======================================================

========================================================================

Sample Input 11 :
5
50
60
70
80
90

Sample Output 11 :

Enter the vehicle count : 5

Enter speed of the vehicle 1 : 50
Enter speed of the vehicle 2 : 60
Enter speed of the vehicle 3 : 70
Enter speed of the vehicle 4 : 80
Enter speed of the vehicle 5 : 90

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 5
Average Vehicle Speed       : 70.00
Highest Speed               : 90
Lowest Speed                : 50
Overspeed Vehicles          : 1
Safe-Speed Vehicles         : 4
=======================================================

========================================================================

Sample Input 12 :
4
0
0
0
0

Sample Output 12 :

Enter the vehicle count : 4

Enter speed of the vehicle 1 : 0
Enter speed of the vehicle 2 : 0
Enter speed of the vehicle 3 : 0
Enter speed of the vehicle 4 : 0

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 4
Average Vehicle Speed       : 0.00
Highest Speed               : 0
Lowest Speed                : 0
Overspeed Vehicles          : 0
Safe-Speed Vehicles         : 4
=======================================================

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter the vehicle count : 0

Invalid Input. Count must be greater than zero.

Enter the vehicle count : 3

Enter speed of the vehicle 1 : 60
Enter speed of the vehicle 2 : 85
Enter speed of the vehicle 3 : 75

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 3
Average Vehicle Speed       : 73.33
Highest Speed               : 85
Lowest Speed                : 60
Overspeed Vehicles          : 1
Safe-Speed Vehicles         : 2
=======================================================

========================================================================

Sample Input 14 :
101

Sample Output 14 :

Enter the vehicle count : 101

Vehicle Count must be less than or equal to 100.

Enter the vehicle count : 4

Enter speed of the vehicle 1 : 70
Enter speed of the vehicle 2 : 80
Enter speed of the vehicle 3 : 90
Enter speed of the vehicle 4 : 100

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 4
Average Vehicle Speed       : 85.00
Highest Speed               : 100
Lowest Speed                : 70
Overspeed Vehicles          : 2
Safe-Speed Vehicles         : 2
=======================================================

========================================================================

Sample Input 15 :
5
-10
60
250
75
85

Sample Output 15 :

Enter the vehicle count : 5

Enter speed of the vehicle 1 : -10

Speed cannot be negative.

Enter speed of the vehicle 1 : 60
Enter speed of the vehicle 2 : 250

Speed Range should be 0 to 200.

Enter speed of the vehicle 2 : 75
Enter speed of the vehicle 3 : 85
Enter speed of the vehicle 4 : 80
Enter speed of the vehicle 5 : 90

=======================================================
	Vehicle Speed Analysis Report
=======================================================
Total Vehicles              : 5
Average Vehicle Speed       : 78.00
Highest Speed               : 90
Lowest Speed                : 60
Overspeed Vehicles          : 2
Safe-Speed Vehicles         : 3
=======================================================

========================================================================
*/