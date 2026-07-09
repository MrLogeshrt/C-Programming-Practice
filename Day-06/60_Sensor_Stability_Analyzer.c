/*
------------------------------------------------------------------------
Program Name : Sensor Stability Analyzer
Author       : MrLogeshrt
Day          : 6
Program No   : 10
Description  : Analyzes consecutive sensor readings by
               calculating the maximum, minimum,
               average reading, detecting the maximum
               spike between consecutive readings,
               and determining the overall sensor
               stability status.
------------------------------------------------------------------------

Concepts Used:
- Variables
- Arrays
- for Loop
- Relational Operators
- Conditional Statements
- Running Total
- Input Validation
- Input/Output Functions
------------------------------------------------------------------------

Constraints:

1. Number of sensor readings must be between 1 and 100.
2. Sensor readings must be between -100 and 1000.
3. Average Reading = Sum of all readings / Number of readings.
4. Spike = Absolute difference between two consecutive readings.
5. Sensor Status:
      Stable   : Maximum Spike ≤ 3
      Warning  : Maximum Spike > 3 and < 7
      Critical : Maximum Spike ≥ 7
------------------------------------------------------------------------
*/



#include <stdio.h>

int main()
{
    int n, max, min, spike, sum = 0;
    int max_spike = 0;
    float average;

    do
    {
        printf("\nEnter Number of Sensor Readings : ");
        scanf("%d",&n);

        if (n <= 0)
        {
            printf("\nCount must be greater than zero.\n");
        }

        else if (n > 100)
        {
            printf("\nCount must not exceed 100.\n");
        }

    } while(n <= 0 || n > 100);

    int readings[n];

    // Read sensor values and analyze stability
    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Reading %d : ",i+1);
            scanf("%d", &readings[i]);

            if(readings[i] < -100 || readings[i] > 1000)
            {
                printf("Reading must be between -100 and 1000.\n");
            }

        } while (readings[i] < -100 || readings[i] > 1000);

        if(i == 0)
        {
            max = readings[i];
            min = readings[i];
        }

        else
        {
            if (max < readings[i])
            {
                max = readings[i];
            }

            if (min > readings[i])
            {
                min = readings[i];
            }
        }

        sum += readings[i];

        if (i > 0)
        {
            spike = readings[i] - readings[i-1];

            if (spike < 0)
            {
                spike = -spike;
            }

            if (spike > max_spike)
            {
                max_spike = spike;
            }
        }

    }

    average = (float) sum / n;

    // Display the sensor stability analysis report
    printf("\n=======================================================\n");
    printf("\tSensor Stability Report\n");
    printf("=======================================================\n");

    printf("Maximum Reading : %d\n", max);
    printf("Minimum Reading : %d\n", min);
    printf("Average Reading : %.2f\n", average);
    printf("Maximum Spike   : %d\n", max_spike);
    printf("Status : ");

    if (max_spike >= 7)
    {
        printf("Critical\n");
    }

    else if (max_spike > 3)
    {
        printf("Warning\n");
    }

    else 
    {
        printf("Stable\n");
    }

    printf("=======================================================\n");

    return 0;

}

/*
========================================================================

Sample Input 1 :
5
100
101
102
103
104

Sample Output 1 :

Enter Number of Sensor Readings : 5

Reading 1 : 100
Reading 2 : 101
Reading 3 : 102
Reading 4 : 103
Reading 5 : 104

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 104
Minimum Reading : 100
Average Reading : 102.00
Maximum Spike   : 1
Status : Stable
=======================================================

========================================================================

Sample Input 2 :
4
50
55
60
65

Sample Output 2 :

Enter Number of Sensor Readings : 4

Reading 1 : 50
Reading 2 : 55
Reading 3 : 60
Reading 4 : 65

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 65
Minimum Reading : 50
Average Reading : 57.50
Maximum Spike   : 5
Status : Warning
=======================================================

========================================================================

Sample Input 3 :
3
100
110
125

Sample Output 3 :

Enter Number of Sensor Readings : 3

Reading 1 : 100
Reading 2 : 110
Reading 3 : 125

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 125
Minimum Reading : 100
Average Reading : 111.67
Maximum Spike   : 15
Status : Critical
=======================================================

========================================================================

Sample Input 4 :
1
500

Sample Output 4 :

Enter Number of Sensor Readings : 1

Reading 1 : 500

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 500
Minimum Reading : 500
Average Reading : 500.00
Maximum Spike   : 0
Status : Stable
=======================================================

========================================================================

Sample Input 5 :
6
-50
-48
-45
-40
-35
-30

Sample Output 5 :

Enter Number of Sensor Readings : 6

Reading 1 : -50
Reading 2 : -48
Reading 3 : -45
Reading 4 : -40
Reading 5 : -35
Reading 6 : -30

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : -30
Minimum Reading : -50
Average Reading : -41.33
Maximum Spike   : 5
Status : Warning
=======================================================

========================================================================

Sample Input 6 :
5
100
100
100
100
100

Sample Output 6 :

Enter Number of Sensor Readings : 5

Reading 1 : 100
Reading 2 : 100
Reading 3 : 100
Reading 4 : 100
Reading 5 : 100

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 100
Minimum Reading : 100
Average Reading : 100.00
Maximum Spike   : 0
Status : Stable
=======================================================

========================================================================

Sample Input 7 :
4
200
203
206
209

Sample Output 7 :

Enter Number of Sensor Readings : 4

Reading 1 : 200
Reading 2 : 203
Reading 3 : 206
Reading 4 : 209

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 209
Minimum Reading : 200
Average Reading : 204.50
Maximum Spike   : 3
Status : Stable
=======================================================

========================================================================

Sample Input 8 :
3
800
795
805

Sample Output 8 :

Enter Number of Sensor Readings : 3

Reading 1 : 800
Reading 2 : 795
Reading 3 : 805

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 805
Minimum Reading : 795
Average Reading : 800.00
Maximum Spike   : 10
Status : Critical
=======================================================

========================================================================

Sample Input 9 :
2
-100
1000

Sample Output 9 :

Enter Number of Sensor Readings : 2

Reading 1 : -100
Reading 2 : 1000

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 1000
Minimum Reading : -100
Average Reading : 450.00
Maximum Spike   : 1100
Status : Critical
=======================================================

========================================================================

Sample Input 10 :
5
300
304
308
312
316

Sample Output 10 :

Enter Number of Sensor Readings : 5

Reading 1 : 300
Reading 2 : 304
Reading 3 : 308
Reading 4 : 312
Reading 5 : 316

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 316
Minimum Reading : 300
Average Reading : 308.00
Maximum Spike   : 4
Status : Warning
=======================================================

========================================================================

Sample Input 11 :
4
150
152
154
156

Sample Output 11 :

Enter Number of Sensor Readings : 4

Reading 1 : 150
Reading 2 : 152
Reading 3 : 154
Reading 4 : 156

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 156
Minimum Reading : 150
Average Reading : 153.00
Maximum Spike   : 2
Status : Stable
=======================================================

========================================================================

Sample Input 12 :
3
500
507
514

Sample Output 12 :

Enter Number of Sensor Readings : 3

Reading 1 : 500
Reading 2 : 507
Reading 3 : 514

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 514
Minimum Reading : 500
Average Reading : 507.00
Maximum Spike   : 7
Status : Critical
=======================================================

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter Number of Sensor Readings : 0

Count must be greater than zero.

Enter Number of Sensor Readings : 3

Reading 1 : 200
Reading 2 : 201
Reading 3 : 202

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 202
Minimum Reading : 200
Average Reading : 201.00
Maximum Spike   : 1
Status : Stable
=======================================================

========================================================================

Sample Input 14 :
101

Sample Output 14 :

Enter Number of Sensor Readings : 101

Count must not exceed 100.

Enter Number of Sensor Readings : 2

Reading 1 : 100
Reading 2 : 105

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 105
Minimum Reading : 100
Average Reading : 102.50
Maximum Spike   : 5
Status : Warning
=======================================================

========================================================================

Sample Input 15 :
4
100
-101
500
600

Sample Output 15 :

Enter Number of Sensor Readings : 4

Reading 1 : 100
Reading 2 : -101
Reading must be between -100 and 1000.

Reading 2 : 50
Reading 3 : 500
Reading 4 : 600

=======================================================
	Sensor Stability Report
=======================================================
Maximum Reading : 600
Minimum Reading : 50
Average Reading : 312.50
Maximum Spike   : 450
Status : Critical
=======================================================

========================================================================
*/