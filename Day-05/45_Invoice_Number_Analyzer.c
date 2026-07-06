/*
------------------------------------------------------------------------
Program Name : Invoice Number Analyzer
Author       : MrLogeshrt
Day          : 5
Program No   : 5
Description  : Analyzes an invoice number by determining the
               total number of digits, count of even and odd
               digits, largest digit, smallest digit, and
               the frequency of each digit present in the
               invoice number.

Concepts Used:
- Variables
- do-while Loop
- while Loop
- for Loop
- Nested Loops
- Arithmetic Operators
- Relational Operators
- Conditional Statements
- Digit Extraction
- Input Validation
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int invoice;

    // Read and validate the invoice number from the user
    do 
    {
        printf("\nEnter your Invoice number : ");
        scanf("%d", &invoice);

        if (invoice <= 0)
        {
            printf("\nInvalid invoice number. It must be greater than zero.\n");
        }
    } while (invoice <= 0);

    // Initialize variables required for invoice number analysis
    int num = invoice;
    int digit = 0;
    int count = 0;
    int even_count = 0;
    int max = 0, min = 9;

    // Extract and analyze each digit of the invoice number
    while (num > 0)
    {
        digit = num % 10;
        count ++;

        if (digit % 2 == 0)
        {
            even_count++;
        }

        if (max < digit)
        {
            max = digit;
        }

        if (min > digit)
        {
            min = digit;
        }

        num /= 10;
    }

    // Display the invoice number analysis report
    printf("\nInvoice Number              : %d\n", invoice);
    printf("Digits Count                : %d\n", count);
    printf("Even Digits Count           : %d\n", even_count);
    printf("Odd Digits Count            : %d\n", count - even_count);
    printf("Largest Digit               : %d\n", max);
    printf("Smallest Digit              : %d\n", min);
    printf("\nDigit Frequencies\n");
    printf("-----------------\n");

    num = invoice;
    digit = 0;
    count = 0;

    // Calculate and display the frequency of each digit
    for (int i = 0; i <= 9; i++)
    {
        num = invoice;
        count = 0;

        while (num > 0)
        {
            digit = num % 10;

            if (digit == i)
            {
                count++;
            }

            num /= 10;
        }

        if (count > 0)
        {
            printf("Digit %d = %d\n", i, count);
        }
    }

    return 0;
}


/*
========================================================================
Sample Test Cases for Invoice Number Analyzer Program
========================================================================

Sample Input 1 :
123456

Sample Output 1 :

Enter your Invoice number : 123456

Invoice Number              : 123456
Digits Count                : 6
Even Digits Count           : 3
Odd Digits Count            : 3
Largest Digit               : 6
Smallest Digit              : 1

Digit Frequencies
-----------------
Digit 1 = 1
Digit 2 = 1
Digit 3 = 1
Digit 4 = 1
Digit 5 = 1
Digit 6 = 1

========================================================================

Sample Input 2 :
1122334455

Sample Output 2 :

Enter your Invoice number : 1122334455

Invoice Number              : 1122334455
Digits Count                : 10
Even Digits Count           : 5
Odd Digits Count            : 5
Largest Digit               : 5
Smallest Digit              : 1

Digit Frequencies
-----------------
Digit 1 = 2
Digit 2 = 2
Digit 3 = 2
Digit 4 = 2
Digit 5 = 2

========================================================================

Sample Input 3 :
999999

Sample Output 3 :

Enter your Invoice number : 999999

Invoice Number              : 999999
Digits Count                : 6
Even Digits Count           : 0
Odd Digits Count            : 6
Largest Digit               : 9
Smallest Digit              : 9

Digit Frequencies
-----------------
Digit 9 = 6

========================================================================

Sample Input 4 :
2468

Sample Output 4 :

Enter your Invoice number : 2468

Invoice Number              : 2468
Digits Count                : 4
Even Digits Count           : 4
Odd Digits Count            : 0
Largest Digit               : 8
Smallest Digit              : 2

Digit Frequencies
-----------------
Digit 2 = 1
Digit 4 = 1
Digit 6 = 1
Digit 8 = 1

========================================================================

Sample Input 5 :
13579

Sample Output 5 :

Enter your Invoice number : 13579

Invoice Number              : 13579
Digits Count                : 5
Even Digits Count           : 0
Odd Digits Count            : 5
Largest Digit               : 9
Smallest Digit              : 1

Digit Frequencies
-----------------
Digit 1 = 1
Digit 3 = 1
Digit 5 = 1
Digit 7 = 1
Digit 9 = 1

========================================================================

Sample Input 6 :
1001001

Sample Output 6 :

Enter your Invoice number : 1001001

Invoice Number              : 1001001
Digits Count                : 7
Even Digits Count           : 4
Odd Digits Count            : 3
Largest Digit               : 1
Smallest Digit              : 0

Digit Frequencies
-----------------
Digit 0 = 4
Digit 1 = 3

========================================================================

Sample Input 7 :
5555555555

Sample Output 7 :

Enter your Invoice number : 5555555555

Invoice Number              : 5555555555
Digits Count                : 10
Even Digits Count           : 0
Odd Digits Count            : 10
Largest Digit               : 5
Smallest Digit              : 5

Digit Frequencies
-----------------
Digit 5 = 10

========================================================================

Sample Input 8 :
9876543210

Sample Output 8 :

Enter your Invoice number : 9876543210

Invoice Number              : 9876543210
Digits Count                : 10
Even Digits Count           : 5
Odd Digits Count            : 5
Largest Digit               : 9
Smallest Digit              : 0

Digit Frequencies
-----------------
Digit 0 = 1
Digit 1 = 1
Digit 2 = 1
Digit 3 = 1
Digit 4 = 1
Digit 5 = 1
Digit 6 = 1
Digit 7 = 1
Digit 8 = 1
Digit 9 = 1

========================================================================

Sample Input 9 :
111222333

Sample Output 9 :

Enter your Invoice number : 111222333

Invoice Number              : 111222333
Digits Count                : 9
Even Digits Count           : 0
Odd Digits Count            : 9
Largest Digit               : 3
Smallest Digit              : 1

Digit Frequencies
-----------------
Digit 1 = 3
Digit 2 = 3
Digit 3 = 3

========================================================================

Sample Input 10 :
2024

Sample Output 10 :

Enter your Invoice number : 2024

Invoice Number              : 2024
Digits Count                : 4
Even Digits Count           : 3
Odd Digits Count            : 1
Largest Digit               : 4
Smallest Digit              : 0

Digit Frequencies
-----------------
Digit 0 = 1
Digit 2 = 2
Digit 4 = 1

========================================================================

Sample Input 11 :
8008

Sample Output 11 :

Enter your Invoice number : 8008

Invoice Number              : 8008
Digits Count                : 4
Even Digits Count           : 4
Odd Digits Count            : 0
Largest Digit               : 8
Smallest Digit              : 0

Digit Frequencies
-----------------
Digit 0 = 2
Digit 8 = 2

========================================================================

Sample Input 12 :
54321

Sample Output 12 :

Enter your Invoice number : 54321

Invoice Number              : 54321
Digits Count                : 5
Even Digits Count           : 2
Odd Digits Count            : 3
Largest Digit               : 5
Smallest Digit              : 1

Digit Frequencies
-----------------
Digit 1 = 1
Digit 2 = 1
Digit 3 = 1
Digit 4 = 1
Digit 5 = 1

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter your Invoice number : 0

Invalid invoice number. It must be greater than zero.

Enter your Invoice number : 123456

Invoice Number              : 123456
Digits Count                : 6
Even Digits Count           : 3
Odd Digits Count            : 3
Largest Digit               : 6
Smallest Digit              : 1

Digit Frequencies
-----------------
Digit 1 = 1
Digit 2 = 1
Digit 3 = 1
Digit 4 = 1
Digit 5 = 1
Digit 6 = 1

========================================================================

Sample Input 14 :
-12345

Sample Output 14 :

Enter your Invoice number : -12345

Invalid invoice number. It must be greater than zero.

Enter your Invoice number : 2468

Invoice Number              : 2468
Digits Count                : 4
Even Digits Count           : 4
Odd Digits Count            : 0
Largest Digit               : 8
Smallest Digit              : 2

Digit Frequencies
-----------------
Digit 2 = 1
Digit 4 = 1
Digit 6 = 1
Digit 8 = 1

========================================================================

Sample Input 15 :
1234567890

Sample Output 15 :

Enter your Invoice number : 1234567890

Invoice Number              : 1234567890
Digits Count                : 10
Even Digits Count           : 5
Odd Digits Count            : 5
Largest Digit               : 9
Smallest Digit              : 0

Digit Frequencies
-----------------
Digit 0 = 1
Digit 1 = 1
Digit 2 = 1
Digit 3 = 1
Digit 4 = 1
Digit 5 = 1
Digit 6 = 1
Digit 7 = 1
Digit 8 = 1
Digit 9 = 1

========================================================================
*/