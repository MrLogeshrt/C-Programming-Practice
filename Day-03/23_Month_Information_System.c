/*
------------------------------------------------------------------------
Program Name : Month Information system
Author       : MrLogeshrt
Day          : 3
Program No   : 3
Description  : Identifies the month name, number of days, and quarter based on the month number entered by the user.

Concepts Used:
- Variables
- Switch Case Statements
- Input/Output Functions
- Data Mapping
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int month;

    // Read month number from the user
    printf("\nEnter the month number (from 1 to 12) : ");
    scanf("%d", &month);

    // Display month details based on month number
    switch(month)
    {
        case 1 :
        {
            printf("\nMonth : January\n");
            printf("Days : 31\n");
            printf("Quarter : Q1\n");

            break;
        }

        case 2 :
        {
            printf("\nMonth : February\n");
            printf("Days : 28 or (29 on Leap years)\n");
            printf("Quarter : Q1\n");

            break;
        }

        case 3 :
        {
            printf("\nMonth : March\n");
            printf("Days : 31\n");
            printf("Quarter : Q1\n");

            break;
        }

        case 4 :
        {
            printf("\nMonth : April\n");
            printf("Days : 30\n");
            printf("Quarter : Q2\n");

            break;
        }

        case 5 :
        {
            printf("\nMonth : May\n");
            printf("Days : 31\n");
            printf("Quarter : Q2\n");

            break;
        }

        case 6 :
        {
            printf("\nMonth : June\n");
            printf("Days : 30\n");
            printf("Quarter : Q2\n");

            break;
        }

        case 7 :
        {
            printf("\nMonth : July\n");
            printf("Days : 31\n");
            printf("Quarter : Q3\n");

            break;
        }

        case 8 :
        {
            printf("\nMonth : August\n");
            printf("Days : 31\n");
            printf("Quarter : Q3\n");

            break;
        }

        case 9 :
        {
            printf("\nMonth : September\n");
            printf("Days : 30\n");
            printf("Quarter : Q3\n");

            break;
        }

        case 10 :
        {
            printf("\nMonth : October\n");
            printf("Days : 31\n");
            printf("Quarter : Q4\n");

            break;
        }

        case 11 :
        {
            printf("\nMonth : November\n");
            printf("Days : 30\n");
            printf("Quarter : Q4\n");

            break;
        }

        case 12 :
        {
            printf("\nMonth : December\n");
            printf("Days : 31\n");
            printf("Quarter : Q4\n");

            break;
        }

        default :
        {
            printf("\nInvalid Choice.\n");
        }
    }

    return 0;

}


/*
========================================================================
Sample Test Cases for Month Information System Program
========================================================================

NORMAL CASES
============

Sample Input 1 :
1

Sample Output 1 :

Enter the month number (from 1 to 12) : 1

Month : January
Days : 31
Quarter : Q1

========================================================================

Sample Input 2 :
6

Sample Output 2 :

Enter the month number (from 1 to 12) : 6

Month : June
Days : 30
Quarter : Q2

========================================================================

Sample Input 3 :
9

Sample Output 3 :

Enter the month number (from 1 to 12) : 9

Month : September
Days : 30
Quarter : Q3

========================================================================

Sample Input 4 :
12

Sample Output 4 :

Enter the month number (from 1 to 12) : 12

Month : December
Days : 31
Quarter : Q4

========================================================================

BOUNDARY CASES
==============

Sample Input 5 :
2

Sample Output 5 :

Enter the month number (from 1 to 12) : 2

Month : February
Days : 28 or (29 on Leap years)
Quarter : Q1

========================================================================

Sample Input 6 :
4

Sample Output 6 :

Enter the month number (from 1 to 12) : 4

Month : April
Days : 30
Quarter : Q2

========================================================================

Sample Input 7 :
7

Sample Output 7 :

Enter the month number (from 1 to 12) : 7

Month : July
Days : 31
Quarter : Q3

========================================================================

Sample Input 8 :
10

Sample Output 8 :

Enter the month number (from 1 to 12) : 10

Month : October
Days : 31
Quarter : Q4

========================================================================

INVALID CHOICE CASES
====================

Sample Input 9 :
0

Sample Output 9 :

Enter the month number (from 1 to 12) : 0

Invalid Choice.

========================================================================

Sample Input 10 :
13

Sample Output 10 :

Enter the month number (from 1 to 12) : 13

Invalid Choice.

========================================================================

Sample Input 11 :
-5

Sample Output 11 :

Enter the month number (from 1 to 12) : -5

Invalid Choice.

========================================================================

Sample Input 12 :
100

Sample Output 12 :

Enter the month number (from 1 to 12) : 100

Invalid Choice.

========================================================================
*/