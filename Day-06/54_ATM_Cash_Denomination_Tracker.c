/*
------------------------------------------------------------------------
Program Name : ATM Cash Denomination Tracker
Author       : MrLogeshrt
Day          : 6
Program No   : 4
Description  : Analyzes the cash available in an ATM by calculating the total number of notes, 
               total cash value, denomination-wise cash contribution, and identifying the denominations 
               with the highest and lowest number of notes.
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

1. The ATM contains only the following denominations:
      Rs.500, Rs.200, Rs.100, Rs.50, Rs.20, Rs.10.
2. Number of notes cannot be negative.
3. Total cash = Sum of (Denomination × Number of notes).
4. Percentage contribution is calculated based on total cash available.
5. Denomination with the highest and lowest note count must be displayed.
------------------------------------------------------------------------

*/



#include <stdio.h>

int main()
{
    int total = 0;
    int total_cash = 0, max = 0,   min = 0;
    int highest_denomination = 0, lowest_denomination = 0;
    int note_count[6];

    int denominations[6] = {500, 200, 100, 50, 20, 10};

    printf("\n=======================================================\n");
    printf("\tATM Cash Denomination Tracker\n");
    printf("=======================================================\n");

    // Read the number of notes available for each denomination
    for (int i = 0; i < 6; i++)
    {
        printf("\nEnter the number of Rs.%d notes : ", denominations[i]);
        scanf("%d", &note_count[i]);

        if (note_count[i] < 0)
        {
            printf("\nNotes count cannot be negative.\n");
            i--;
            continue;
        }

        else
        {
            if(i == 0)
            {
                min = note_count[i];
                max = note_count[i];
                highest_denomination = denominations[i];
                lowest_denomination = denominations[i];
            }

            else
            {
                if(max < note_count[i])
                {
                    max = note_count[i];
                    highest_denomination = denominations[i];
                }

                if  (min > note_count[i])
                {
                    min = note_count[i];
                    lowest_denomination = denominations[i];
                }
            }
        }

        total += note_count[i];
        total_cash += (denominations[i] * note_count[i]);
    }    

    // Display the ATM cash summary report
    if (total_cash == 0)
    {
        printf("\n=======================================================\n");
        printf("\nATM contains no cash.\n");
        printf("=======================================================\n");
    }

    else
    {
        printf("\n=======================================================\n");
        printf("Total Notes                             : %d\n", total);
        printf("Total Cash Available                    : %d\n", total_cash);
        printf("Highest Denomination                    : Rs.%d (%d notes)\n", highest_denomination, max);
        printf("Lowest Denomination                     : Rs.%d (%d notes)\n" , lowest_denomination, min);
        for(int i=0;i<6;i++)
        {
            printf("Rs.%-3d Contribution                : %.2f%%\n",
                denominations[i], (denominations[i] * 100.0 * note_count[i]) / total_cash);
        }
        printf("=======================================================\n");
    }
    
    return 0;
}


/*
========================================================================

Sample Input 1 :
10
5
8
3
2
1

Sample Output 1 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 10
Enter the number of Rs.200 notes : 5
Enter the number of Rs.100 notes : 8
Enter the number of Rs.50 notes : 3
Enter the number of Rs.20 notes : 2
Enter the number of Rs.10 notes : 1

=======================================================
Total Notes                             : 29
Total Cash Available                    : 7860
Highest Denomination                    : Rs.500 (10 notes)
Lowest Denomination                     : Rs.10 (1 notes)
Rs.500 Contribution                : 63.60%
Rs.200 Contribution                : 12.72%
Rs.100 Contribution                : 10.17%
Rs.50  Contribution                : 1.91%
Rs.20  Contribution                : 0.51%
Rs.10  Contribution                : 0.13%
=======================================================

========================================================================

Sample Input 2 :
5
5
5
5
5
5

Sample Output 2 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 5
Enter the number of Rs.200 notes : 5
Enter the number of Rs.100 notes : 5
Enter the number of Rs.50 notes : 5
Enter the number of Rs.20 notes : 5
Enter the number of Rs.10 notes : 5

=======================================================
Total Notes                             : 30
Total Cash Available                    : 4350
Highest Denomination                    : Rs.500 (5 notes)
Lowest Denomination                     : Rs.10 (5 notes)
Rs.500 Contribution                : 57.47%
Rs.200 Contribution                : 22.99%
Rs.100 Contribution                : 11.49%
Rs.50  Contribution                : 5.75%
Rs.20  Contribution                : 2.30%
Rs.10  Contribution                : 1.15%
=======================================================

========================================================================

Sample Input 3 :
0
0
0
0
0
0

Sample Output 3 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 0
Enter the number of Rs.200 notes : 0
Enter the number of Rs.100 notes : 0
Enter the number of Rs.50 notes : 0
Enter the number of Rs.20 notes : 0
Enter the number of Rs.10 notes : 0

=======================================================

ATM contains no cash.
=======================================================

========================================================================

Sample Input 4 :
20
10
5
3
2
1

Sample Output 4 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 20
Enter the number of Rs.200 notes : 10
Enter the number of Rs.100 notes : 5
Enter the number of Rs.50 notes : 3
Enter the number of Rs.20 notes : 2
Enter the number of Rs.10 notes : 1

=======================================================
Total Notes                             : 41
Total Cash Available                    : 15960
Highest Denomination                    : Rs.500 (20 notes)
Lowest Denomination                     : Rs.10 (1 notes)
Rs.500 Contribution                : 62.59%
Rs.200 Contribution                : 12.52%
Rs.100 Contribution                : 6.26%
Rs.50  Contribution                : 0.94%
Rs.20  Contribution                : 0.25%
Rs.10  Contribution                : 0.06%
=======================================================

========================================================================

Sample Input 5 :
1
1
1
1
1
1

Sample Output 5 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 1
Enter the number of Rs.200 notes : 1
Enter the number of Rs.100 notes : 1
Enter the number of Rs.50 notes : 1
Enter the number of Rs.20 notes : 1
Enter the number of Rs.10 notes : 1

=======================================================
Total Notes                             : 6
Total Cash Available                    : 880
Highest Denomination                    : Rs.500 (1 notes)
Lowest Denomination                     : Rs.10 (1 notes)
Rs.500 Contribution                : 56.82%
Rs.200 Contribution                : 22.73%
Rs.100 Contribution                : 11.36%
Rs.50  Contribution                : 5.68%
Rs.20  Contribution                : 2.27%
Rs.10  Contribution                : 1.14%
=======================================================

========================================================================

Sample Input 6 :
50
40
30
20
10
5

Sample Output 6 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 50
Enter the number of Rs.200 notes : 40
Enter the number of Rs.100 notes : 30
Enter the number of Rs.50 notes : 20
Enter the number of Rs.20 notes : 10
Enter the number of Rs.10 notes : 5

=======================================================
Total Notes                             : 155
Total Cash Available                    : 38500
Highest Denomination                    : Rs.500 (50 notes)
Lowest Denomination                     : Rs.10 (5 notes)
Rs.500 Contribution                : 64.94%
Rs.200 Contribution                : 20.78%
Rs.100 Contribution                : 7.79%
Rs.50  Contribution                : 2.60%
Rs.20  Contribution                : 0.52%
Rs.10  Contribution                : 0.13%
=======================================================

========================================================================

Sample Input 7 :
0
50
0
0
0
0

Sample Output 7 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 0
Enter the number of Rs.200 notes : 50
Enter the number of Rs.100 notes : 0
Enter the number of Rs.50 notes : 0
Enter the number of Rs.20 notes : 0
Enter the number of Rs.10 notes : 0

=======================================================
Total Notes                             : 50
Total Cash Available                    : 10000
Highest Denomination                    : Rs.200 (50 notes)
Lowest Denomination                     : Rs.200 (50 notes)
Rs.500 Contribution                : 0.00%
Rs.200 Contribution                : 100.00%
Rs.100 Contribution                : 0.00%
Rs.50  Contribution                : 0.00%
Rs.20  Contribution                : 0.00%
Rs.10  Contribution                : 0.00%
=======================================================

========================================================================

Sample Input 8 :
15
15
15
15
15
15

Sample Output 8 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 15
Enter the number of Rs.200 notes : 15
Enter the number of Rs.100 notes : 15
Enter the number of Rs.50 notes : 15
Enter the number of Rs.20 notes : 15
Enter the number of Rs.10 notes : 15

=======================================================
Total Notes                             : 90
Total Cash Available                    : 10950
Highest Denomination                    : Rs.500 (15 notes)
Lowest Denomination                     : Rs.10 (15 notes)
Rs.500 Contribution                : 68.49%
Rs.200 Contribution                : 27.40%
Rs.100 Contribution                : 13.70%
Rs.50  Contribution                : 6.85%
Rs.20  Contribution                : 2.74%
Rs.10  Contribution                : 1.37%
=======================================================

========================================================================

Sample Input 9 :
100
0
0
0
0
0

Sample Output 9 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 100
Enter the number of Rs.200 notes : 0
Enter the number of Rs.100 notes : 0
Enter the number of Rs.50 notes : 0
Enter the number of Rs.20 notes : 0
Enter the number of Rs.10 notes : 0

=======================================================
Total Notes                             : 100
Total Cash Available                    : 50000
Highest Denomination                    : Rs.500 (100 notes)
Lowest Denomination                     : Rs.500 (100 notes)
Rs.500 Contribution                : 100.00%
Rs.200 Contribution                : 0.00%
Rs.100 Contribution                : 0.00%
Rs.50  Contribution                : 0.00%
Rs.20  Contribution                : 0.00%
Rs.10  Contribution                : 0.00%
=======================================================

========================================================================

Sample Input 10 :
0
0
0
0
0
100

Sample Output 10 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 0
Enter the number of Rs.200 notes : 0
Enter the number of Rs.100 notes : 0
Enter the number of Rs.50 notes : 0
Enter the number of Rs.20 notes : 0
Enter the number of Rs.10 notes : 100

=======================================================
Total Notes                             : 100
Total Cash Available                    : 1000
Highest Denomination                    : Rs.10 (100 notes)
Lowest Denomination                     : Rs.10 (100 notes)
Rs.500 Contribution                : 0.00%
Rs.200 Contribution                : 0.00%
Rs.100 Contribution                : 0.00%
Rs.50  Contribution                : 0.00%
Rs.20  Contribution                : 0.00%
Rs.10  Contribution                : 100.00%
=======================================================

========================================================================

Sample Input 11 :
25
20
15
10
5
2

Sample Output 11 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 25
Enter the number of Rs.200 notes : 20
Enter the number of Rs.100 notes : 15
Enter the number of Rs.50 notes : 10
Enter the number of Rs.20 notes : 5
Enter the number of Rs.10 notes : 2

=======================================================
Total Notes                             : 77
Total Cash Available                    : 18450
Highest Denomination                    : Rs.500 (25 notes)
Lowest Denomination                     : Rs.10 (2 notes)
Rs.500 Contribution                : 67.94%
Rs.200 Contribution                : 21.72%
Rs.100 Contribution                : 8.13%
Rs.50  Contribution                : 2.71%
Rs.20  Contribution                : 0.54%
Rs.10  Contribution                : 0.11%
=======================================================

========================================================================

Sample Input 12 :
30
25
20
15
10
5

Sample Output 12 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 30
Enter the number of Rs.200 notes : 25
Enter the number of Rs.100 notes : 20
Enter the number of Rs.50 notes : 15
Enter the number of Rs.20 notes : 10
Enter the number of Rs.10 notes : 5

=======================================================
Total Notes                             : 105
Total Cash Available                    : 24500
Highest Denomination                    : Rs.500 (30 notes)
Lowest Denomination                     : Rs.10 (5 notes)
Rs.500 Contribution                : 61.22%
Rs.200 Contribution                : 20.41%
Rs.100 Contribution                : 8.16%
Rs.50  Contribution                : 3.06%
Rs.20  Contribution                : 0.82%
Rs.10  Contribution                : 0.20%
=======================================================

========================================================================

Sample Input 13 :
10
10
10
10
10
10

Sample Output 13 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 10
Enter the number of Rs.200 notes : 10
Enter the number of Rs.100 notes : 10
Enter the number of Rs.50 notes : 10
Enter the number of Rs.20 notes : 10
Enter the number of Rs.10 notes : 10

=======================================================
Total Notes                             : 60
Total Cash Available                    : 8800
Highest Denomination                    : Rs.500 (10 notes)
Lowest Denomination                     : Rs.10 (10 notes)
Rs.500 Contribution                : 56.82%
Rs.200 Contribution                : 22.73%
Rs.100 Contribution                : 11.36%
Rs.50  Contribution                : 5.68%
Rs.20  Contribution                : 2.27%
Rs.10  Contribution                : 1.14%
=======================================================

========================================================================

Sample Input 14 :
-5
10
5
3
2
1

Sample Output 14 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : -5

Notes count cannot be negative.

Enter the number of Rs.500 notes : 5
Enter the number of Rs.200 notes : 10
Enter the number of Rs.100 notes : 5
Enter the number of Rs.50 notes : 3
Enter the number of Rs.20 notes : 2
Enter the number of Rs.10 notes : 1

=======================================================
Total Notes                             : 26
Total Cash Available                    : 5860
Highest Denomination                    : Rs.200 (10 notes)
Lowest Denomination                     : Rs.10 (1 notes)
Rs.500 Contribution                : 42.63%
Rs.200 Contribution                : 34.16%
Rs.100 Contribution                : 8.54%
Rs.50  Contribution                : 2.56%
Rs.20  Contribution                : 0.68%
Rs.10  Contribution                : 0.17%
=======================================================

========================================================================

Sample Input 15 :
20
15
10
5
0
0

Sample Output 15 :

=======================================================
	ATM Cash Denomination Tracker
=======================================================

Enter the number of Rs.500 notes : 20
Enter the number of Rs.200 notes : 15
Enter the number of Rs.100 notes : 10
Enter the number of Rs.50 notes : 5
Enter the number of Rs.20 notes : 0
Enter the number of Rs.10 notes : 0

=======================================================
Total Notes                             : 50
Total Cash Available                    : 15000
Highest Denomination                    : Rs.500 (20 notes)
Lowest Denomination                     : Rs.50 (5 notes)
Rs.500 Contribution                : 66.67%
Rs.200 Contribution                : 20.00%
Rs.100 Contribution                : 6.67%
Rs.50  Contribution                : 1.67%
Rs.20  Contribution                : 0.00%
Rs.10  Contribution                : 0.00%
=======================================================

========================================================================
*/