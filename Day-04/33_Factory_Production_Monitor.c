/*
------------------------------------------------------------------------
Program Name : Production Monitoring System
Author       : MrLogeshrt
Day          : 4
Program No   : 3
Description  : Records hourly production units, calculates total
               production, average production per hour, and
               identifies the highest and lowest production hours.

Concepts Used:
- Variables
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
    int hours, units, total_units = 0;
    int max = 0, min = 100000000;
    int max_hrs = 0, min_hrs = 0;

    // Get total working hours from user
    printf("\nEnter total working hours : ");
    scanf("%d", &hours);

    while (hours <= 0)
    {
        printf("\nInvalid Input.\n");
        printf("\nEnter total working hours : ");
        scanf("%d", &hours);
    }

    for (int i = 1; i <= hours; i++)
    {
        printf("\nEnter the units produced at hour %d : ", i);
        scanf("%d", &units);

        if (units < 0)
        {
            i--;
            printf("\nInvalid Input.\n");
        }

        else 
        {
            if (units > max)
            {
                max = units;
                max_hrs = i;
            }

            if (units < min)
            {
                min = units;
                min_hrs = i;
            }

            total_units += units;
        }
    }

    float avg = 0.0f;

    avg = (float) total_units / hours;

    printf("\nWorking Hours            : %d\n", hours);
    printf("Total production         : %d units\n", total_units);
    printf("Average Production/Hour  : %.2f units\n", avg);
    printf("Highest Production Hour  : Hour %d\n", max_hrs);
    printf("Highest Units Produced   : %d units\n", max);
    printf("Lowest Production Hour   : Hour %d\n", min_hrs);
    printf("Lowest Units Produced    : %d units\n\n", min);

    return 0;

}


/*
========================================================================

Sample Input 1 :
5
100
100
100
100
100

Sample Output 1 :

Enter total working hours : 5

Enter the units produced at hour 1 : 100
Enter the units produced at hour 2 : 100
Enter the units produced at hour 3 : 100
Enter the units produced at hour 4 : 100
Enter the units produced at hour 5 : 100

Working Hours            : 5
Total production         : 500 units
Average Production/Hour  : 100.00 units
Highest Production Hour  : Hour 1
Highest Units Produced   : 100 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 100 units

========================================================================

Sample Input 2 :
5
150
200
180
220
190

Sample Output 2 :

Enter total working hours : 5

Enter the units produced at hour 1 : 150
Enter the units produced at hour 2 : 200
Enter the units produced at hour 3 : 180
Enter the units produced at hour 4 : 220
Enter the units produced at hour 5 : 190

Working Hours            : 5
Total production         : 940 units
Average Production/Hour  : 188.00 units
Highest Production Hour  : Hour 4
Highest Units Produced   : 220 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 150 units

========================================================================

Sample Input 3 :
8
100
150
120
200
180
160
140
190

Sample Output 3 :

Enter total working hours : 8

Enter the units produced at hour 1 : 100
Enter the units produced at hour 2 : 150
Enter the units produced at hour 3 : 120
Enter the units produced at hour 4 : 200
Enter the units produced at hour 5 : 180
Enter the units produced at hour 6 : 160
Enter the units produced at hour 7 : 140
Enter the units produced at hour 8 : 190

Working Hours            : 8
Total production         : 1240 units
Average Production/Hour  : 155.00 units
Highest Production Hour  : Hour 4
Highest Units Produced   : 200 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 100 units

========================================================================

Sample Input 4 :
4
0
0
0
0

Sample Output 4 :

Enter total working hours : 4

Enter the units produced at hour 1 : 0
Enter the units produced at hour 2 : 0
Enter the units produced at hour 3 : 0
Enter the units produced at hour 4 : 0

Working Hours            : 4
Total production         : 0 units
Average Production/Hour  : 0.00 units
Highest Production Hour  : Hour 1
Highest Units Produced   : 0 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 0 units

========================================================================

Sample Input 5 :
5
100
0
150
0
200

Sample Output 5 :

Enter total working hours : 5

Enter the units produced at hour 1 : 100
Enter the units produced at hour 2 : 0
Enter the units produced at hour 3 : 150
Enter the units produced at hour 4 : 0
Enter the units produced at hour 5 : 200

Working Hours            : 5
Total production         : 450 units
Average Production/Hour  : 90.00 units
Highest Production Hour  : Hour 5
Highest Units Produced   : 200 units
Lowest Production Hour   : Hour 2
Lowest Units Produced    : 0 units

========================================================================

Sample Input 6 :
1
500

Sample Output 6 :

Enter total working hours : 1

Enter the units produced at hour 1 : 500

Working Hours            : 1
Total production         : 500 units
Average Production/Hour  : 500.00 units
Highest Production Hour  : Hour 1
Highest Units Produced   : 500 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 500 units

========================================================================

Sample Input 7 :
3
1000
2000
1500

Sample Output 7 :

Enter total working hours : 3

Enter the units produced at hour 1 : 1000
Enter the units produced at hour 2 : 2000
Enter the units produced at hour 3 : 1500

Working Hours            : 3
Total production         : 4500 units
Average Production/Hour  : 1500.00 units
Highest Production Hour  : Hour 2
Highest Units Produced   : 2000 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 1000 units

========================================================================

Sample Input 8 :
5
100
200
300
400
500

Sample Output 8 :

Enter total working hours : 5

Enter the units produced at hour 1 : 100
Enter the units produced at hour 2 : 200
Enter the units produced at hour 3 : 300
Enter the units produced at hour 4 : 400
Enter the units produced at hour 5 : 500

Working Hours            : 5
Total production         : 1500 units
Average Production/Hour  : 300.00 units
Highest Production Hour  : Hour 5
Highest Units Produced   : 500 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 100 units

========================================================================

Sample Input 9 :
5
500
400
300
200
100

Sample Output 9 :

Enter total working hours : 5

Enter the units produced at hour 1 : 500
Enter the units produced at hour 2 : 400
Enter the units produced at hour 3 : 300
Enter the units produced at hour 4 : 200
Enter the units produced at hour 5 : 100

Working Hours            : 5
Total production         : 1500 units
Average Production/Hour  : 300.00 units
Highest Production Hour  : Hour 1
Highest Units Produced   : 500 units
Lowest Production Hour   : Hour 5
Lowest Units Produced    : 100 units

========================================================================

Sample Input 10 :
-5
10
5
8
6
7

Sample Output 10 :

Enter total working hours : -5

Invalid Input.

Enter total working hours : 5

Enter the units produced at hour 1 : 10
Enter the units produced at hour 2 : 5
Enter the units produced at hour 3 : 8
Enter the units produced at hour 4 : 6
Enter the units produced at hour 5 : 7

Working Hours            : 5
Total production         : 36 units
Average Production/Hour  : 7.20 units
Highest Production Hour  : Hour 1
Highest Units Produced   : 10 units
Lowest Production Hour   : Hour 5
Lowest Units Produced    : 6 units

========================================================================

Sample Input 11 :
0
5
10
15
20
25

Sample Output 11 :

Enter total working hours : 0

Invalid Input.

Enter total working hours : 5

Enter the units produced at hour 1 : 10
Enter the units produced at hour 2 : 15
Enter the units produced at hour 3 : 20
Enter the units produced at hour 4 : 25
Enter the units produced at hour 5 : 30

Working Hours            : 5
Total production         : 100 units
Average Production/Hour  : 20.00 units
Highest Production Hour  : Hour 5
Highest Units Produced   : 30 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 10 units

========================================================================

Sample Input 12 :
4
100
-50
150
200

Sample Output 12 :

Enter total working hours : 4

Enter the units produced at hour 1 : 100
Enter the units produced at hour 2 : -50

Invalid Input.
Enter the units produced at hour 2 : 150
Enter the units produced at hour 3 : 200
Enter the units produced at hour 4 : 120

Working Hours            : 4
Total production         : 570 units
Average Production/Hour  : 142.50 units
Highest Production Hour  : Hour 3
Highest Units Produced   : 200 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 100 units

========================================================================

Sample Input 13 :
6
150
150
150
150
150
150

Sample Output 13 :

Enter total working hours : 6

Enter the units produced at hour 1 : 150
Enter the units produced at hour 2 : 150
Enter the units produced at hour 3 : 150
Enter the units produced at hour 4 : 150
Enter the units produced at hour 5 : 150
Enter the units produced at hour 6 : 150

Working Hours            : 6
Total production         : 900 units
Average Production/Hour  : 150.00 units
Highest Production Hour  : Hour 1
Highest Units Produced   : 150 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 150 units

========================================================================

Sample Input 14 :
7
100
300
150
400
120
350
180

Sample Output 14 :

Enter total working hours : 7

Enter the units produced at hour 1 : 100
Enter the units produced at hour 2 : 300
Enter the units produced at hour 3 : 150
Enter the units produced at hour 4 : 400
Enter the units produced at hour 5 : 120
Enter the units produced at hour 6 : 350
Enter the units produced at hour 7 : 180

Working Hours            : 7
Total production         : 1600 units
Average Production/Hour  : 228.57 units
Highest Production Hour  : Hour 4
Highest Units Produced   : 400 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 100 units

========================================================================

Sample Input 15 :
10
250
275
300
320
310
290
280
295
305
315

Sample Output 15 :

Enter total working hours : 10

Enter the units produced at hour 1 : 250
Enter the units produced at hour 2 : 275
Enter the units produced at hour 3 : 300
Enter the units produced at hour 4 : 320
Enter the units produced at hour 5 : 310
Enter the units produced at hour 6 : 290
Enter the units produced at hour 7 : 280
Enter the units produced at hour 8 : 295
Enter the units produced at hour 9 : 305
Enter the units produced at hour 10 : 315

Working Hours            : 10
Total production         : 3040 units
Average Production/Hour  : 304.00 units
Highest Production Hour  : Hour 4
Highest Units Produced   : 320 units
Lowest Production Hour   : Hour 1
Lowest Units Produced    : 250 units

========================================================================
*/