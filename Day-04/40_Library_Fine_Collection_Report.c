/*
------------------------------------------------------------------------
Program Name : Library Fine Management System
Author       : MrLogeshrt
Day          : 4
Program No   : 10
Description  : Calculates overdue fines for returned library books
               based on delay duration, generates individual fines,
               and displays the total, average, and highest fine
               collected.

Concepts Used:
- Variables
- do-while Loop
- for Loop
- if-else Statements
- continue Statement
- Arithmetic Operators
- Relational Operators
- Input Validation
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int books, days_delayed, fine = 0, max = 0, total_fine = 0;
    float avg_fine = 0.0f;

    // Prompt for the number of returned books and validate input.
    do
    {
        printf("\nEnter the count of returned books : ");
        scanf("%d", &books);

        if (books <= 0)
        {
            printf("\nBooks must be greater than zero.\n");
        }
    } while (books <= 0);

    // Process each book and calculate the fine based on delayed days.
    for (int i = 1; i <= books; i++)
    {
        printf("Enter the delayed days of book %d : ", i);
        scanf("%d", &days_delayed);

        // Validate delayed days input.
        if (days_delayed < 0)
        {
            i--;
            printf("\nDelayed days must be greater than or equal to zero.\n");
        }

        else
        {
            fine = 0;

            if (days_delayed == 0)
            {
                continue;
            }

            else if (days_delayed <= 5)
            {
                fine += 5 * days_delayed;
            }

            else if (days_delayed <= 15)
            {
                fine += 5 * 5;
                fine += 10 * (days_delayed - 5);
            }

            else
            {
                fine += 5 * 5;
                fine += 10 * 10;
                fine += 20 * (days_delayed - 15);
            }

            // Add current book's fine to the total fine collected.
            total_fine += fine;

            // Track the highest fine amount among all books.
            if (max < fine)
            {
                max = fine;
            }

        }
    }

    // Calculate average fine per book.
    avg_fine = (float) total_fine / books;

    // Display the summary report.
    printf("\nBooks Received          : %d\n", books);
    printf("Total Fine Collected    : Rs.%d\n", total_fine);
    printf("Average Fine            : Rs.%.2f\n", avg_fine);
    printf("Highest Fine Amount     : Rs.%d\n", max);

    return 0;
}



/*
========================================================================
========================================================================

FINE STRUCTURE:
- 0 days delay    : Rs. 0 (No fine)
- 1-5 days delay  : Rs. 5 per day
- 6-15 days delay : Rs. 25 (for first 5 days) + Rs. 10 per day (for days 6-15)
- 16+ days delay  : Rs. 25 + Rs. 100 (for days 6-15) + Rs. 20 per day (for days 16+)

========================================================================

Sample Input 1 :
5
0
3
7
12
20

Sample Output 1 :

Enter the count of returned books : 5
Enter the delayed days of book 1 : 0
Enter the delayed days of book 2 : 3
Enter the delayed days of book 3 : 7
Enter the delayed days of book 4 : 12
Enter the delayed days of book 5 : 20

Books Received          : 5
Total Fine Collected    : Rs.280
Average Fine            : Rs.56.00
Highest Fine Amount     : Rs.140

========================================================================

Sample Input 2 :
4
2
4
6
8

Sample Output 2 :

Enter the count of returned books : 4
Enter the delayed days of book 1 : 2
Enter the delayed days of book 2 : 4
Enter the delayed days of book 3 : 6
Enter the delayed days of book 4 : 8

Books Received          : 4
Total Fine Collected    : Rs.130
Average Fine            : Rs.32.50
Highest Fine Amount     : Rs.35

========================================================================

Sample Input 3 :
6
1
1
1
1
1
1

Sample Output 3 :

Enter the count of returned books : 6
Enter the delayed days of book 1 : 1
Enter the delayed days of book 2 : 1
Enter the delayed days of book 3 : 1
Enter the delayed days of book 4 : 1
Enter the delayed days of book 5 : 1
Enter the delayed days of book 6 : 1

Books Received          : 6
Total Fine Collected    : Rs.30
Average Fine            : Rs.5.00
Highest Fine Amount     : Rs.5

========================================================================

Sample Input 4 :
1
10

Sample Output 4 :

Enter the count of returned books : 1
Enter the delayed days of book 1 : 10

Books Received          : 1
Total Fine Collected    : Rs.75
Average Fine            : Rs.75.00
Highest Fine Amount     : Rs.75

========================================================================

Sample Input 5 :
3
5
5
5

Sample Output 5 :

Enter the count of returned books : 3
Enter the delayed days of book 1 : 5
Enter the delayed days of book 2 : 5
Enter the delayed days of book 3 : 5

Books Received          : 3
Total Fine Collected    : Rs.75
Average Fine            : Rs.25.00
Highest Fine Amount     : Rs.25

========================================================================

Sample Input 6 :
4
15
16
20
25

Sample Output 6 :

Enter the count of returned books : 4
Enter the delayed days of book 1 : 15
Enter the delayed days of book 2 : 16
Enter the delayed days of book 3 : 20
Enter the delayed days of book 4 : 25

Books Received          : 4
Total Fine Collected    : Rs.945
Average Fine            : Rs.236.25
Highest Fine Amount     : Rs.325

========================================================================

Sample Input 7 :
5
0
0
0
0
5

Sample Output 7 :

Enter the count of returned books : 5
Enter the delayed days of book 1 : 0
Enter the delayed days of book 2 : 0
Enter the delayed days of book 3 : 0
Enter the delayed days of book 4 : 0
Enter the delayed days of book 5 : 5

Books Received          : 5
Total Fine Collected    : Rs.25
Average Fine            : Rs.5.00
Highest Fine Amount     : Rs.25

========================================================================

Sample Input 8 :
6
3
6
9
12
15
18

Sample Output 8 :

Enter the count of returned books : 6
Enter the delayed days of book 1 : 3
Enter the delayed days of book 2 : 6
Enter the delayed days of book 3 : 9
Enter the delayed days of book 4 : 12
Enter the delayed days of book 5 : 15
Enter the delayed days of book 6 : 18

Books Received          : 6
Total Fine Collected    : Rs.545
Average Fine            : Rs.90.83
Highest Fine Amount     : Rs.185

========================================================================

Sample Input 9 :
3
1
8
16

Sample Output 9 :

Enter the count of returned books : 3
Enter the delayed days of book 1 : 1
Enter the delayed days of book 2 : 8
Enter the delayed days of book 3 : 16

Books Received          : 3
Total Fine Collected    : Rs.165
Average Fine            : Rs.55.00
Highest Fine Amount     : Rs.105

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

Enter the count of returned books : -5

Books must be greater than zero.

Enter the count of returned books : 0

Books must be greater than zero.

Enter the count of returned books : 10
Enter the delayed days of book 1 : 0
Enter the delayed days of book 2 : 2
Enter the delayed days of book 3 : 5
Enter the delayed days of book 4 : 8
Enter the delayed days of book 5 : 10
Enter the delayed days of book 6 : 12
Enter the delayed days of book 7 : 15
Enter the delayed days of book 8 : 18
Enter the delayed days of book 9 : 20
Enter the delayed days of book 10 : 25

Books Received          : 10
Total Fine Collected    : Rs.685
Average Fine            : Rs.68.50
Highest Fine Amount     : Rs.285

========================================================================

Sample Input 11 :
4
-5
10
-2
15
20

Sample Output 11 :

Enter the count of returned books : 4
Enter the delayed days of book 1 : -5

Delayed days must be greater than or equal to zero.

Enter the delayed days of book 1 : 10
Enter the delayed days of book 2 : -2

Delayed days must be greater than or equal to zero.

Enter the delayed days of book 2 : 15
Enter the delayed days of book 3 : 20

Books Received          : 4
Total Fine Collected    : Rs.385
Average Fine            : Rs.96.25
Highest Fine Amount     : Rs.200

========================================================================

Sample Input 12 :
5
0
1
5
15
30

Sample Output 12 :

Enter the count of returned books : 5
Enter the delayed days of book 1 : 0
Enter the delayed days of book 2 : 1
Enter the delayed days of book 3 : 5
Enter the delayed days of book 4 : 15
Enter the delayed days of book 5 : 30

Books Received          : 5
Total Fine Collected    : Rs.650
Average Fine            : Rs.130.00
Highest Fine Amount     : Rs.425

========================================================================

Sample Input 13 :
7
2
4
6
8
10
12
14

Sample Output 13 :

Enter the count of returned books : 7
Enter the delayed days of book 1 : 2
Enter the delayed days of book 2 : 4
Enter the delayed days of book 3 : 6
Enter the delayed days of book 4 : 8
Enter the delayed days of book 5 : 10
Enter the delayed days of book 6 : 12
Enter the delayed days of book 7 : 14

Books Received          : 7
Total Fine Collected    : Rs.330
Average Fine            : Rs.47.14
Highest Fine Amount     : Rs.75

========================================================================

Sample Input 14 :
8
1
3
5
7
10
13
16
20

Sample Output 14 :

Enter the count of returned books : 8
Enter the delayed days of book 1 : 1
Enter the delayed days of book 2 : 3
Enter the delayed days of book 3 : 5
Enter the delayed days of book 4 : 7
Enter the delayed days of book 5 : 10
Enter the delayed days of book 6 : 13
Enter the delayed days of book 7 : 16
Enter the delayed days of book 8 : 20

Books Received          : 8
Total Fine Collected    : Rs.530
Average Fine            : Rs.66.25
Highest Fine Amount     : Rs.195

========================================================================

Sample Input 15 :
10
0
0
5
10
15
20
25
30
35
40

Sample Output 15 :

Enter the count of returned books : 10
Enter the delayed days of book 1 : 0
Enter the delayed days of book 2 : 0
Enter the delayed days of book 3 : 5
Enter the delayed days of book 4 : 10
Enter the delayed days of book 5 : 15
Enter the delayed days of book 6 : 20
Enter the delayed days of book 7 : 25
Enter the delayed days of book 8 : 30
Enter the delayed days of book 9 : 35
Enter the delayed days of book 10 : 40

Books Received          : 10
Total Fine Collected    : Rs.1525
Average Fine            : Rs.152.50
Highest Fine Amount     : Rs.635

========================================================================
*/