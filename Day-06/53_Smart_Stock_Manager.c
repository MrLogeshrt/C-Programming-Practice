/*
------------------------------------------------------------------------
Program Name : Smart Stock Manager
Author       : MrLogeshrt
Day          : 6
Program No   : 3
Description  : Analyzes product inventory records by
               calculating the total stock,
               highest stock count,
               lowest stock count,
               out-of-stock products,
               well-stocked products,
               and low-stock products.
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

1. Product count must be greater than zero.
2. Stock quantity cannot be negative.
3. Products with stock = 0 are considered Out of Stock.
4. Products with stock >= 10 are Well Stocked.
5. Products with stock < 10 are Low Stocked.
------------------------------------------------------------------------

*/



#include <stdio.h>

int main()
{
    int n;
    int total_stock = 0, out_of_stock = 0, highest_stock = 0, lowest_stock = 0, well_stocked = 0, low_stocked = 0;

    do
    {
        printf("\nEnter the number of products : ");
        scanf("%d",&n);

        if(n <= 0)
        {
            printf("\nCount must be greater than zero.\n");
        }

        else if(n > 100)
        {
            printf("\nMaximum allowed products is 100.\n");
        }

    }
    while(n <= 0 || n > 100);

    int stocks_count[n];

    // Read stock quantities and generate inventory statistics
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter stock quantity for Product %d : ", i + 1);
        scanf("%d", &stocks_count[i]);

        if(stocks_count[i] < 0)
        {
            printf("\nStocks count cannot be negative.\n");
            i--;
            continue;
        }

        if(i == 0)
        {
            highest_stock = stocks_count[i];
            lowest_stock = stocks_count[i];
        }

        else
        {
            if (highest_stock < stocks_count[i])
            {
                highest_stock = stocks_count[i];
            }

            if (lowest_stock > stocks_count[i])
            {
                lowest_stock = stocks_count[i];
            }
        }

        if(stocks_count[i] == 0)
        {
            out_of_stock++;
        }

        else if(stocks_count[i] < 10)
        {
            low_stocked++;
        }

        else
        {
            well_stocked++;
        }

        total_stock += stocks_count[i];

    }

    float average_stock = (float)total_stock / n;

    // Display the inventory analysis report
    printf("\n=============================================\n");
    printf("Smart Inventory Stock Manager\n");
    printf("=============================================\n");
    printf("\nTotal Products                : %d\n", n);
    printf("Total Stock Quantity            : %d\n", total_stock);
    printf("Average Stock per Product       : %.2f", average_stock);
    printf("\nHighest Stock Quantity        : %d\n", highest_stock);
    printf("Lowest Stock Quantity           : %d\n", lowest_stock);
    printf("\nOut of Stock Products         : %d\n", out_of_stock);
    printf("Well-Stocked Products           : %d\n", well_stocked);
    printf("Low-Stock Products              : %d\n", low_stocked);
    printf("=============================================\n");

    return 0;
}


/*
========================================================================

Sample Input 1 :
5
25
15
0
8
30

Sample Output 1 :

Enter the number of products : 5

Enter stock quantity for Product 1 : 25
Enter stock quantity for Product 2 : 15
Enter stock quantity for Product 3 : 0
Enter stock quantity for Product 4 : 8
Enter stock quantity for Product 5 : 30

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 5
Total Stock Quantity            : 78
Average Stock per Product       : 15.60
Highest Stock Quantity        : 30
Lowest Stock Quantity           : 0

Out of Stock Products         : 1
Well-Stocked Products           : 3
Low-Stock Products              : 1
=============================================

========================================================================

Sample Input 2 :
4
20
20
20
20

Sample Output 2 :

Enter the number of products : 4

Enter stock quantity for Product 1 : 20
Enter stock quantity for Product 2 : 20
Enter stock quantity for Product 3 : 20
Enter stock quantity for Product 4 : 20

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 4
Total Stock Quantity            : 80
Average Stock per Product       : 20.00
Highest Stock Quantity        : 20
Lowest Stock Quantity           : 20

Out of Stock Products         : 0
Well-Stocked Products           : 4
Low-Stock Products              : 0
=============================================

========================================================================

Sample Input 3 :
3
0
0
0

Sample Output 3 :

Enter the number of products : 3

Enter stock quantity for Product 1 : 0
Enter stock quantity for Product 2 : 0
Enter stock quantity for Product 3 : 0

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 3
Total Stock Quantity            : 0
Average Stock per Product       : 0.00
Highest Stock Quantity        : 0
Lowest Stock Quantity           : 0

Out of Stock Products         : 3
Well-Stocked Products           : 0
Low-Stock Products              : 0
=============================================

========================================================================

Sample Input 4 :
6
50
40
30
20
10
0

Sample Output 4 :

Enter the number of products : 6

Enter stock quantity for Product 1 : 50
Enter stock quantity for Product 2 : 40
Enter stock quantity for Product 3 : 30
Enter stock quantity for Product 4 : 20
Enter stock quantity for Product 5 : 10
Enter stock quantity for Product 6 : 0

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 6
Total Stock Quantity            : 150
Average Stock per Product       : 25.00
Highest Stock Quantity        : 50
Lowest Stock Quantity           : 0

Out of Stock Products         : 1
Well-Stocked Products           : 4
Low-Stock Products              : 1
=============================================

========================================================================

Sample Input 5 :
1
15

Sample Output 5 :

Enter the number of products : 1

Enter stock quantity for Product 1 : 15

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 1
Total Stock Quantity            : 15
Average Stock per Product       : 15.00
Highest Stock Quantity        : 15
Lowest Stock Quantity           : 15

Out of Stock Products         : 0
Well-Stocked Products           : 1
Low-Stock Products              : 0
=============================================

========================================================================

Sample Input 6 :
5
100
100
100
100
100

Sample Output 6 :

Enter the number of products : 5

Enter stock quantity for Product 1 : 100
Enter stock quantity for Product 2 : 100
Enter stock quantity for Product 3 : 100
Enter stock quantity for Product 4 : 100
Enter stock quantity for Product 5 : 100

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 5
Total Stock Quantity            : 500
Average Stock per Product       : 100.00
Highest Stock Quantity        : 100
Lowest Stock Quantity           : 100

Out of Stock Products         : 0
Well-Stocked Products           : 5
Low-Stock Products              : 0
=============================================

========================================================================

Sample Input 7 :
4
5
5
5
5

Sample Output 7 :

Enter the number of products : 4

Enter stock quantity for Product 1 : 5
Enter stock quantity for Product 2 : 5
Enter stock quantity for Product 3 : 5
Enter stock quantity for Product 4 : 5

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 4
Total Stock Quantity            : 20
Average Stock per Product       : 5.00
Highest Stock Quantity        : 5
Lowest Stock Quantity           : 5

Out of Stock Products         : 0
Well-Stocked Products           : 0
Low-Stock Products              : 4
=============================================

========================================================================

Sample Input 8 :
7
45
35
25
15
5
0
55

Sample Output 8 :

Enter the number of products : 7

Enter stock quantity for Product 1 : 45
Enter stock quantity for Product 2 : 35
Enter stock quantity for Product 3 : 25
Enter stock quantity for Product 4 : 15
Enter stock quantity for Product 5 : 5
Enter stock quantity for Product 6 : 0
Enter stock quantity for Product 7 : 55

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 7
Total Stock Quantity            : 180
Average Stock per Product       : 25.71
Highest Stock Quantity        : 55
Lowest Stock Quantity           : 0

Out of Stock Products         : 1
Well-Stocked Products           : 4
Low-Stock Products              : 2
=============================================

========================================================================

Sample Input 9 :
3
10
10
10

Sample Output 9 :

Enter the number of products : 3

Enter stock quantity for Product 1 : 10
Enter stock quantity for Product 2 : 10
Enter stock quantity for Product 3 : 10

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 3
Total Stock Quantity            : 30
Average Stock per Product       : 10.00
Highest Stock Quantity        : 10
Lowest Stock Quantity           : 10

Out of Stock Products         : 0
Well-Stocked Products           : 3
Low-Stock Products              : 0
=============================================

========================================================================

Sample Input 10 :
5
1
2
3
4
5

Sample Output 10 :

Enter the number of products : 5

Enter stock quantity for Product 1 : 1
Enter stock quantity for Product 2 : 2
Enter stock quantity for Product 3 : 3
Enter stock quantity for Product 4 : 4
Enter stock quantity for Product 5 : 5

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 5
Total Stock Quantity            : 15
Average Stock per Product       : 3.00
Highest Stock Quantity        : 5
Lowest Stock Quantity           : 1

Out of Stock Products         : 0
Well-Stocked Products           : 0
Low-Stock Products              : 5
=============================================

========================================================================

Sample Input 11 :
6
12
18
24
30
36
42

Sample Output 11 :

Enter the number of products : 6

Enter stock quantity for Product 1 : 12
Enter stock quantity for Product 2 : 18
Enter stock quantity for Product 3 : 24
Enter stock quantity for Product 4 : 30
Enter stock quantity for Product 5 : 36
Enter stock quantity for Product 6 : 42

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 6
Total Stock Quantity            : 162
Average Stock per Product       : 27.00
Highest Stock Quantity        : 42
Lowest Stock Quantity           : 12

Out of Stock Products         : 0
Well-Stocked Products           : 6
Low-Stock Products              : 0
=============================================

========================================================================

Sample Input 12 :
5
9
9
9
9
9

Sample Output 12 :

Enter the number of products : 5

Enter stock quantity for Product 1 : 9
Enter stock quantity for Product 2 : 9
Enter stock quantity for Product 3 : 9
Enter stock quantity for Product 4 : 9
Enter stock quantity for Product 5 : 9

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 5
Total Stock Quantity            : 45
Average Stock per Product       : 9.00
Highest Stock Quantity        : 9
Lowest Stock Quantity           : 9

Out of Stock Products         : 0
Well-Stocked Products           : 0
Low-Stock Products              : 5
=============================================

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter the number of products : 0

Count must be greater than zero.

Enter the number of products : 4

Enter stock quantity for Product 1 : 25
Enter stock quantity for Product 2 : 15
Enter stock quantity for Product 3 : 0
Enter stock quantity for Product 4 : 35

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 4
Total Stock Quantity            : 75
Average Stock per Product       : 18.75
Highest Stock Quantity        : 35
Lowest Stock Quantity           : 0

Out of Stock Products         : 1
Well-Stocked Products           : 3
Low-Stock Products              : 0
=============================================

========================================================================

Sample Input 14 :
101

Sample Output 14 :

Enter the number of products : 101

Maximum allowed products is 100.

Enter the number of products : 3

Enter stock quantity for Product 1 : 20
Enter stock quantity for Product 2 : 15
Enter stock quantity for Product 3 : 25

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 3
Total Stock Quantity            : 60
Average Stock per Product       : 20.00
Highest Stock Quantity        : 25
Lowest Stock Quantity           : 15

Out of Stock Products         : 0
Well-Stocked Products           : 3
Low-Stock Products              : 0
=============================================

========================================================================

Sample Input 15 :
5
30
-5
20
40
15

Sample Output 15 :

Enter the number of products : 5

Enter stock quantity for Product 1 : 30
Enter stock quantity for Product 2 : -5

Stocks count cannot be negative.

Enter stock quantity for Product 2 : 20
Enter stock quantity for Product 3 : 40
Enter stock quantity for Product 4 : 15
Enter stock quantity for Product 5 : 10

=============================================
Smart Inventory Stock Manager
=============================================

Total Products                : 5
Total Stock Quantity            : 115
Average Stock per Product       : 23.00
Highest Stock Quantity        : 40
Lowest Stock Quantity           : 10

Out of Stock Products         : 0
Well-Stocked Products           : 4
Low-Stock Products              : 1
=============================================

========================================================================
*/