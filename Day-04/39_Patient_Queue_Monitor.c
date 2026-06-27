/*
------------------------------------------------------------------------
Program Name : Hospital Patient Waiting Time Analyzer
Author       : MrLogeshrt
Day          : 4
Program No   : 9
Description  : Records patient waiting times, calculates the total
               and average waiting time, and identifies the longest
               and shortest waiting durations.

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
    int patient, time, min, max, total_time = 0;
    float avg_time = 0.0f;

    // Input validation loop: Accept patient count until valid
    do
    {
        printf("\nEnter patient count : ");
        scanf("%d", &patient);

        if (patient <= 0)
        {
            printf("\nPatient count must be greater that zero.\n");
        }
    } while (patient <= 0);

    // Main loop: Process each patient's waiting time
    for (int i = 1; i <= patient; i++)
    {
        printf("\nEnter waiting time of patient %d (in mins) : ", i);
        scanf("%d", &time);

        if (time < 0)
        {
            i--;
            printf("\nTime must be greater than zero.\n");
        }

        else
        {
            if (i == 1)
            {
                min = time;
                max = time;
            }

            else
            {
                if (max < time)
                {
                    max = time;
                }

                if (min > time)
                {
                    min = time;
                }
            }

            total_time += time;

        }
    }

    // Calculate average waiting time
    avg_time = (float) total_time / patient;

    // Display waiting time analysis summary
    printf("\nPatient Count           : %d\n", patient);
    printf("Total Waiting Time      : %d mins\n", total_time);
    printf("Average waiting Time   : %.2f mins\n", avg_time);
    printf("Longest Waiting Time    : %d mins\n", max);
    printf("Shortest Waiting Time   : %d mins\n", min);

    return 0;
}

/*
========================================================================

Sample Input 1 :
5
10
15
20
25
30

Sample Output 1 :

Enter patient count : 5

Enter waiting time of patient 1 (in mins) : 10
Enter waiting time of patient 2 (in mins) : 15
Enter waiting time of patient 3 (in mins) : 20
Enter waiting time of patient 4 (in mins) : 25
Enter waiting time of patient 5 (in mins) : 30

Patient Count           : 5
Total Waiting Time      : 100 mins
Average Waiting Time    : 20.00 mins
Longest Waiting Time    : 30 mins
Shortest Waiting Time   : 10 mins

========================================================================

Sample Input 2 :
4
45
30
50
35

Sample Output 2 :

Enter patient count : 4

Enter waiting time of patient 1 (in mins) : 45
Enter waiting time of patient 2 (in mins) : 30
Enter waiting time of patient 3 (in mins) : 50
Enter waiting time of patient 4 (in mins) : 35

Patient Count           : 4
Total Waiting Time      : 160 mins
Average Waiting Time    : 40.00 mins
Longest Waiting Time    : 50 mins
Shortest Waiting Time   : 30 mins

========================================================================

Sample Input 3 :
6
20
20
20
20
20
20

Sample Output 3 :

Enter patient count : 6

Enter waiting time of patient 1 (in mins) : 20
Enter waiting time of patient 2 (in mins) : 20
Enter waiting time of patient 3 (in mins) : 20
Enter waiting time of patient 4 (in mins) : 20
Enter waiting time of patient 5 (in mins) : 20
Enter waiting time of patient 6 (in mins) : 20

Patient Count           : 6
Total Waiting Time      : 120 mins
Average Waiting Time    : 20.00 mins
Longest Waiting Time    : 20 mins
Shortest Waiting Time   : 20 mins

========================================================================

Sample Input 4 :
1
25

Sample Output 4 :

Enter patient count : 1

Enter waiting time of patient 1 (in mins) : 25

Patient Count           : 1
Total Waiting Time      : 25 mins
Average Waiting Time    : 25.00 mins
Longest Waiting Time    : 25 mins
Shortest Waiting Time   : 25 mins

========================================================================

Sample Input 5 :
3
5
10
15

Sample Output 5 :

Enter patient count : 3

Enter waiting time of patient 1 (in mins) : 5
Enter waiting time of patient 2 (in mins) : 10
Enter waiting time of patient 3 (in mins) : 15

Patient Count           : 3
Total Waiting Time      : 30 mins
Average Waiting Time    : 10.00 mins
Longest Waiting Time    : 15 mins
Shortest Waiting Time   : 5 mins

========================================================================

Sample Input 6 :
4
60
45
50
55

Sample Output 6 :

Enter patient count : 4

Enter waiting time of patient 1 (in mins) : 60
Enter waiting time of patient 2 (in mins) : 45
Enter waiting time of patient 3 (in mins) : 50
Enter waiting time of patient 4 (in mins) : 55

Patient Count           : 4
Total Waiting Time      : 210 mins
Average Waiting Time    : 52.50 mins
Longest Waiting Time    : 60 mins
Shortest Waiting Time   : 45 mins

========================================================================

Sample Input 7 :
5
0
10
5
15
20

Sample Output 7 :

Enter patient count : 5

Enter waiting time of patient 1 (in mins) : 0
Enter waiting time of patient 2 (in mins) : 10
Enter waiting time of patient 3 (in mins) : 5
Enter waiting time of patient 4 (in mins) : 15
Enter waiting time of patient 5 (in mins) : 20

Patient Count           : 5
Total Waiting Time      : 50 mins
Average Waiting Time    : 10.00 mins
Longest Waiting Time    : 20 mins
Shortest Waiting Time   : 0 mins

========================================================================

Sample Input 8 :
3
100
150
120

Sample Output 8 :

Enter patient count : 3

Enter waiting time of patient 1 (in mins) : 100
Enter waiting time of patient 2 (in mins) : 150
Enter waiting time of patient 3 (in mins) : 120

Patient Count           : 3
Total Waiting Time      : 370 mins
Average Waiting Time    : 123.33 mins
Longest Waiting Time    : 150 mins
Shortest Waiting Time   : 100 mins

========================================================================

Sample Input 9 :
5
30
40
35
45
25

Sample Output 9 :

Enter patient count : 5

Enter waiting time of patient 1 (in mins) : 30
Enter waiting time of patient 2 (in mins) : 40
Enter waiting time of patient 3 (in mins) : 35
Enter waiting time of patient 4 (in mins) : 45
Enter waiting time of patient 5 (in mins) : 25

Patient Count           : 5
Total Waiting Time      : 175 mins
Average Waiting Time    : 35.00 mins
Longest Waiting Time    : 45 mins
Shortest Waiting Time   : 25 mins

========================================================================

Sample Input 10 :
-5
0
10
15
20
25
30

Sample Output 10 :

Enter patient count : -5

Patient count must be greater that zero.

Enter patient count : 0

Patient count must be greater that zero.

Enter patient count : 10

Enter waiting time of patient 1 (in mins) : 15
Enter waiting time of patient 2 (in mins) : 20
Enter waiting time of patient 3 (in mins) : 25
Enter waiting time of patient 4 (in mins) : 30
Enter waiting time of patient 5 (in mins) : 10
Enter waiting time of patient 6 (in mins) : 35
Enter waiting time of patient 7 (in mins) : 40
Enter waiting time of patient 8 (in mins) : 22
Enter waiting time of patient 9 (in mins) : 18
Enter waiting time of patient 10 (in mins) : 28

Patient Count           : 10
Total Waiting Time      : 243 mins
Average Waiting Time    : 24.30 mins
Longest Waiting Time    : 40 mins
Shortest Waiting Time   : 10 mins

========================================================================

Sample Input 11 :
4
-10
25
30
35
40

Sample Output 11 :

Enter patient count : 4

Enter waiting time of patient 1 (in mins) : -10

Time must be greater than zero.

Enter waiting time of patient 1 (in mins) : 25
Enter waiting time of patient 2 (in mins) : 30
Enter waiting time of patient 3 (in mins) : 35
Enter waiting time of patient 4 (in mins) : 40

Patient Count           : 4
Total Waiting Time      : 130 mins
Average Waiting Time    : 32.50 mins
Longest Waiting Time    : 40 mins
Shortest Waiting Time   : 25 mins

========================================================================

Sample Input 12 :
3
-5
20
-15
50
45

Sample Output 12 :

Enter patient count : 3

Enter waiting time of patient 1 (in mins) : -5

Time must be greater than zero.

Enter waiting time of patient 1 (in mins) : 20
Enter waiting time of patient 2 (in mins) : -15

Time must be greater than zero.

Enter waiting time of patient 2 (in mins) : 50
Enter waiting time of patient 3 (in mins) : 45

Patient Count           : 3
Total Waiting Time      : 115 mins
Average Waiting Time    : 38.33 mins
Longest Waiting Time    : 50 mins
Shortest Waiting Time   : 20 mins

========================================================================

Sample Input 13 :
7
12
18
15
22
20
25
30

Sample Output 13 :

Enter patient count : 7

Enter waiting time of patient 1 (in mins) : 12
Enter waiting time of patient 2 (in mins) : 18
Enter waiting time of patient 3 (in mins) : 15
Enter waiting time of patient 4 (in mins) : 22
Enter waiting time of patient 5 (in mins) : 20
Enter waiting time of patient 6 (in mins) : 25
Enter waiting time of patient 7 (in mins) : 30

Patient Count           : 7
Total Waiting Time      : 142 mins
Average Waiting Time    : 20.29 mins
Longest Waiting Time    : 30 mins
Shortest Waiting Time   : 12 mins

========================================================================

Sample Input 14 :
8
5
10
15
20
25
30
35
40

Sample Output 14 :

Enter patient count : 8

Enter waiting time of patient 1 (in mins) : 5
Enter waiting time of patient 2 (in mins) : 10
Enter waiting time of patient 3 (in mins) : 15
Enter waiting time of patient 4 (in mins) : 20
Enter waiting time of patient 5 (in mins) : 25
Enter waiting time of patient 6 (in mins) : 30
Enter waiting time of patient 7 (in mins) : 35
Enter waiting time of patient 8 (in mins) : 40

Patient Count           : 8
Total Waiting Time      : 180 mins
Average Waiting Time    : 22.50 mins
Longest Waiting Time    : 40 mins
Shortest Waiting Time   : 5 mins

========================================================================

Sample Input 15 :
6
90
60
75
85
70
80

Sample Output 15 :

Enter patient count : 6

Enter waiting time of patient 1 (in mins) : 90
Enter waiting time of patient 2 (in mins) : 60
Enter waiting time of patient 3 (in mins) : 75
Enter waiting time of patient 4 (in mins) : 85
Enter waiting time of patient 5 (in mins) : 70
Enter waiting time of patient 6 (in mins) : 80

Patient Count           : 6
Total Waiting Time      : 460 mins
Average Waiting Time    : 76.67 mins
Longest Waiting Time    : 90 mins
Shortest Waiting Time   : 60 mins

========================================================================
*/