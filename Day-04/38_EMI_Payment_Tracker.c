/*
------------------------------------------------------------------------
Program Name : EMI Collection Management System
Author       : MrLogeshrt
Day          : 4
Program No   : 8
Description  : Records EMI payment status for multiple customers,
               calculates the total amount collected, number of
               paid and pending customers, and displays the
               overall payment collection percentage.

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
    int customers, paid_status, paid_count = 0;
    float emi_amount, total_amount = 0.0f, paid_percentage = 0.0f;

    // Input validation loop: Accept customer count until valid
    do
    {
        printf("\nEnter the customers count : ");
        scanf("%d", &customers);

        if (customers <= 0)
        {
            printf("\nCustomers count must be greater than zero.\n");
        }
    } while (customers <= 0);

     // Display payment status codes for user reference
    printf("\nCustomer Status\n");
    printf("0 - Pending\n");
    printf("1 - Paid\n");

    // Main loop: Process each customer's payment status
    for (int i = 1; i <= customers; i++)
    {
        printf("\nEnter the Customer %d Status (1 or 0) : ", i);
        scanf("%d", &paid_status);

        if (paid_status != 0 && paid_status != 1)
        {
            i--;
            printf("\nInvalid Input.\n");
        }

        else if (paid_status == 0)
        {
            continue;
        }

        else
        {
            do
            {
                printf("\nAmount paid by customer %d : ", i);
                scanf("%f", &emi_amount);

                if(emi_amount <= 0)
                {
                    printf("\nAmount must be greater than zero.\n");
                }

            } while(emi_amount <= 0);

            total_amount += emi_amount;
            paid_count++;
        }

    }

    // Calculate collection percentage
    paid_percentage = ((float) paid_count / customers) * 100;

    // Display final collection summary
    printf("\nTotal Customers                 : %d\n", customers);
    printf("Customers Paid                  : %d\n", paid_count);
    printf("Customers Pending               : %d\n", customers - paid_count);
    printf("Total Amount Paid / Collected   : %.2f\n", total_amount);
    printf("Paid / Collection Percentage    : %.2f\n", paid_percentage);

    return 0;
}


/*
========================================================================

Sample Input 1 :
4
1
5000
1
7500
1
6000
1
8500

Sample Output 1 :

Enter the customers count : 4

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 5000

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : 7500

Enter the Customer 3 Status (1 or 0) : 1

Amount paid by customer 3 : 6000

Enter the Customer 4 Status (1 or 0) : 1

Amount paid by customer 4 : 8500

Total Customers                 : 4
Customers Paid                  : 4
Customers Pending               : 0
Total Amount Paid / Collected   : 27000.00
Paid / Collection Percentage    : 100.00

========================================================================

Sample Input 2 :
6
1
5000
0
1
7500
0
1
6000
1
8000

Sample Output 2 :

Enter the customers count : 6

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 5000

Enter the Customer 2 Status (1 or 0) : 0

Enter the Customer 3 Status (1 or 0) : 1

Amount paid by customer 3 : 7500

Enter the Customer 4 Status (1 or 0) : 0

Enter the Customer 5 Status (1 or 0) : 1

Amount paid by customer 5 : 6000

Enter the Customer 6 Status (1 or 0) : 1

Amount paid by customer 6 : 8000

Total Customers                 : 6
Customers Paid                  : 4
Customers Pending               : 2
Total Amount Paid / Collected   : 26500.00
Paid / Collection Percentage    : 66.67

========================================================================

Sample Input 3 :
5
0
0
0
0
0

Sample Output 3 :

Enter the customers count : 5

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 0

Enter the Customer 2 Status (1 or 0) : 0

Enter the Customer 3 Status (1 or 0) : 0

Enter the Customer 4 Status (1 or 0) : 0

Enter the Customer 5 Status (1 or 0) : 0

Total Customers                 : 5
Customers Paid                  : 0
Customers Pending               : 5
Total Amount Paid / Collected   : 0.00
Paid / Collection Percentage    : 0.00

========================================================================

Sample Input 4 :
5
1
10000
1
10000
0
1
10000
1
10000

Sample Output 4 :

Enter the customers count : 5

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 10000

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : 10000

Enter the Customer 3 Status (1 or 0) : 0

Enter the Customer 4 Status (1 or 0) : 1

Amount paid by customer 4 : 10000

Enter the Customer 5 Status (1 or 0) : 1

Amount paid by customer 5 : 10000

Total Customers                 : 5
Customers Paid                  : 4
Customers Pending               : 1
Total Amount Paid / Collected   : 40000.00
Paid / Collection Percentage    : 80.00

========================================================================

Sample Input 5 :
1
1
5000

Sample Output 5 :

Enter the customers count : 1

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 5000

Total Customers                 : 1
Customers Paid                  : 1
Customers Pending               : 0
Total Amount Paid / Collected   : 5000.00
Paid / Collection Percentage    : 100.00

========================================================================

Sample Input 6 :
1
0

Sample Output 6 :

Enter the customers count : 1

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 0

Total Customers                 : 1
Customers Paid                  : 0
Customers Pending               : 1
Total Amount Paid / Collected   : 0.00
Paid / Collection Percentage    : 0.00

========================================================================

Sample Input 7 :
3
1
0.01
1
0.50
0
1
1.00

Sample Output 7 :

Enter the customers count : 3

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 0.01

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : 0.50

Enter the Customer 3 Status (1 or 0) : 0

Enter the Customer 4 Status (1 or 0) : 1

Amount paid by customer 4 : 1.00

Total Customers                 : 3
Customers Paid                  : 3
Customers Pending               : 0
Total Amount Paid / Collected   : 1.51
Paid / Collection Percentage    : 100.00

========================================================================

Sample Input 8 :
3
1
500000
1
750000
1
1000000

Sample Output 8 :

Enter the customers count : 3

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 500000

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : 750000

Enter the Customer 3 Status (1 or 0) : 1

Amount paid by customer 3 : 1000000

Total Customers                 : 3
Customers Paid                  : 3
Customers Pending               : 0
Total Amount Paid / Collected   : 2250000.00
Paid / Collection Percentage    : 100.00

========================================================================

Sample Input 9 :
4
1
5000.50
1
7500.75
1
6000.25
0

Sample Output 9 :

Enter the customers count : 4

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 5000.50

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : 7500.75

Enter the Customer 3 Status (1 or 0) : 1

Amount paid by customer 3 : 6000.25

Enter the Customer 4 Status (1 or 0) : 0

Total Customers                 : 4
Customers Paid                  : 3
Customers Pending               : 1
Total Amount Paid / Collected   : 18501.50
Paid / Collection Percentage    : 75.00

========================================================================

Sample Input 10 :
-5
0
8
1
5000
1
6000
0
1
7500
1
8000
0
1
9000
1
10000

Sample Output 10 :

Enter the customers count : -5

Customers count must be greater than zero.

Enter the customers count : 0

Customers count must be greater than zero.

Enter the customers count : 8

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 5000

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : 6000

Enter the Customer 3 Status (1 or 0) : 0

Enter the Customer 4 Status (1 or 0) : 1

Amount paid by customer 4 : 7500

Enter the Customer 5 Status (1 or 0) : 1

Amount paid by customer 5 : 8000

Enter the Customer 6 Status (1 or 0) : 0

Enter the Customer 7 Status (1 or 0) : 1

Amount paid by customer 7 : 9000

Enter the Customer 8 Status (1 or 0) : 1

Amount paid by customer 8 : 10000

Total Customers                 : 8
Customers Paid                  : 6
Customers Pending               : 2
Total Amount Paid / Collected   : 45500.00
Paid / Collection Percentage    : 75.00

========================================================================

Sample Input 11 :
3
2
1
5000
5
1
7500
1
6000

Sample Output 11 :

Enter the customers count : 3

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 2

Invalid Input.

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 5000

Enter the Customer 2 Status (1 or 0) : 5

Invalid Input.

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : 7500

Enter the Customer 3 Status (1 or 0) : 1

Amount paid by customer 3 : 6000

Total Customers                 : 3
Customers Paid                  : 3
Customers Pending               : 0
Total Amount Paid / Collected   : 18500.00
Paid / Collection Percentage    : 100.00

========================================================================

Sample Input 12 :
3
1
-5000
5000
1
7500
1
6000

Sample Output 12 :

Enter the customers count : 3

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : -5000

Amount must be greater than zero.

Amount paid by customer 1 : 5000

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : 7500

Enter the Customer 3 Status (1 or 0) : 1

Amount paid by customer 3 : 6000

Total Customers                 : 3
Customers Paid                  : 3
Customers Pending               : 0
Total Amount Paid / Collected   : 18500.00
Paid / Collection Percentage    : 100.00

========================================================================

Sample Input 13 :
2
1
0
5000
1
7500

Sample Output 13 :

Enter the customers count : 2

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 0

Amount must be greater than zero.

Amount paid by customer 1 : 5000

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : 7500

Total Customers                 : 2
Customers Paid                  : 2
Customers Pending               : 0
Total Amount Paid / Collected   : 12500.00
Paid / Collection Percentage    : 100.00

========================================================================

Sample Input 14 :
5
3
1
5000
-1000
8000
0
2
1
6000
1
7500

Sample Output 14 :

Enter the customers count : 5

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 3

Invalid Input.

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 5000

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : -1000

Amount must be greater than zero.

Amount paid by customer 2 : 8000

Enter the Customer 3 Status (1 or 0) : 0

Enter the Customer 4 Status (1 or 0) : 2

Invalid Input.

Enter the Customer 4 Status (1 or 0) : 1

Amount paid by customer 4 : 6000

Enter the Customer 5 Status (1 or 0) : 1

Amount paid by customer 5 : 7500

Total Customers                 : 5
Customers Paid                  : 4
Customers Pending               : 1
Total Amount Paid / Collected   : 26500.00
Paid / Collection Percentage    : 80.00

========================================================================

Sample Input 15 :
10
1
5000
1
6000
0
1
7500
1
8000
0
1
5500
1
6500
1
7000
0
1
8500

Sample Output 15 :

Enter the customers count : 10

Customer Status
0 - Pending
1 - Paid

Enter the Customer 1 Status (1 or 0) : 1

Amount paid by customer 1 : 5000

Enter the Customer 2 Status (1 or 0) : 1

Amount paid by customer 2 : 6000

Enter the Customer 3 Status (1 or 0) : 0

Enter the Customer 4 Status (1 or 0) : 1

Amount paid by customer 4 : 7500

Enter the Customer 5 Status (1 or 0) : 1

Amount paid by customer 5 : 8000

Enter the Customer 6 Status (1 or 0) : 0

Enter the Customer 7 Status (1 or 0) : 1

Amount paid by customer 7 : 5500

Enter the Customer 8 Status (1 or 0) : 1

Amount paid by customer 8 : 6500

Enter the Customer 9 Status (1 or 0) : 1

Amount paid by customer 9 : 7000

Enter the Customer 10 Status (1 or 0) : 0

Enter the Customer 11 Status (1 or 0) : 1

Amount paid by customer 11 : 8500

Total Customers                 : 10
Customers Paid                  : 7
Customers Pending               : 3
Total Amount Paid / Collected   : 54000.00
Paid / Collection Percentage    : 70.00

========================================================================
*/