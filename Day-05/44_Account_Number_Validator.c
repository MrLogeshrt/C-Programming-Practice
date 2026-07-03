/*
------------------------------------------------------------------------
Program Name : Account Number Analyzer
Author       : MrLogeshrt
Day          : 5
Program No   : 4
Description  : Analyzes an account number by calculating
               the number of digits, sum of digits,
               product of digits, highest digit,
               and lowest digit.

Concepts Used:
- Variables
- do-while Loop
- while Loop
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
    int acc_num = 0;

    // Read and validate the account number
    do
    {
        printf("\nEnter your Account number : ");
        scanf("%d", &acc_num);

        if (acc_num <= 0)
        {
            printf("\nAccount number should not be less than or equal to zero.\n");
        }
    } while(acc_num <= 0);

    // Initialize variables required for account number analysis
    int sum = 0, digit = 0;
    int product = 1;
    int max = 0, min = 9;
    int count = 0;
    int number = acc_num;

    // Extract and analyze each digit of the account number
    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        product = product * digit;
        count++;

        if (max < digit)
        {
            max = digit;
        }

        if (min > digit)
        {
            min = digit;
        }

        number = number / 10;
    }

    // Display the account number analysis report
    printf("\nAccount Number      : %d\n", acc_num);
    printf("Number of Digits    : %d\n", count);
    printf("Sum of Digits       : %d\n", sum);
    printf("Product of Digits   : %d\n", product);
    printf("Highest Digit       : %d\n", max);
    printf("Lowest Digit        : %d\n", min);

    return 0;
}


/*
========================================================================
Sample Test Cases for Account Number Analyzer Program
========================================================================

Sample Input 1 :
123456

Sample Output 1 :

Enter your Account number : 123456

Account Number      : 123456
Number of Digits    : 6
Sum of Digits       : 21
Product of Digits   : 720
Highest Digit       : 6
Lowest Digit        : 1

========================================================================

Sample Input 2 :
1111

Sample Output 2 :

Enter your Account number : 1111

Account Number      : 1111
Number of Digits    : 4
Sum of Digits       : 4
Product of Digits   : 1
Highest Digit       : 1
Lowest Digit        : 1

========================================================================

Sample Input 3 :
9876543210

Sample Output 3 :

Enter your Account number : 9876543210

Account Number      : 9876543210
Number of Digits    : 10
Sum of Digits       : 45
Product of Digits   : 0
Highest Digit       : 9
Lowest Digit        : 0

========================================================================

Sample Input 4 :
5000

Sample Output 4 :

Enter your Account number : 5000

Account Number      : 5000
Number of Digits    : 4
Sum of Digits       : 5
Product of Digits   : 0
Highest Digit       : 5
Lowest Digit        : 0

========================================================================

Sample Input 5 :
2468

Sample Output 5 :

Enter your Account number : 2468

Account Number      : 2468
Number of Digits    : 4
Sum of Digits       : 20
Product of Digits   : 384
Highest Digit       : 8
Lowest Digit        : 2

========================================================================

Sample Input 6 :
1357

Sample Output 6 :

Enter your Account number : 1357

Account Number      : 1357
Number of Digits    : 4
Sum of Digits       : 16
Product of Digits   : 105
Highest Digit       : 7
Lowest Digit        : 1

========================================================================

Sample Input 7 :
999999

Sample Output 7 :

Enter your Account number : 999999

Account Number      : 999999
Number of Digits    : 6
Sum of Digits       : 54
Product of Digits   : 531441
Highest Digit       : 9
Lowest Digit        : 9

========================================================================

Sample Input 8 :
1000000

Sample Output 8 :

Enter your Account number : 1000000

Account Number      : 1000000
Number of Digits    : 7
Sum of Digits       : 1
Product of Digits   : 0
Highest Digit       : 1
Lowest Digit        : 0

========================================================================

Sample Input 9 :
54321

Sample Output 9 :

Enter your Account number : 54321

Account Number      : 54321
Number of Digits    : 5
Sum of Digits       : 15
Product of Digits   : 120
Highest Digit       : 5
Lowest Digit        : 1

========================================================================

Sample Input 10 :
2024

Sample Output 10 :

Enter your Account number : 2024

Account Number      : 2024
Number of Digits    : 4
Sum of Digits       : 8
Product of Digits   : 0
Highest Digit       : 4
Lowest Digit        : 0

========================================================================

Sample Input 11 :
135792468

Sample Output 11 :

Enter your Account number : 135792468

Account Number      : 135792468
Number of Digits    : 9
Sum of Digits       : 45
Product of Digits   : 90720
Highest Digit       : 9
Lowest Digit        : 1

========================================================================

Sample Input 12 :
8765432

Sample Output 12 :

Enter your Account number : 8765432

Account Number      : 8765432
Number of Digits    : 7
Sum of Digits       : 41
Product of Digits   : 40320
Highest Digit       : 8
Lowest Digit        : 2

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter your Account number : 0

Account number should not be less than or equal to zero.

Enter your Account number : 123456

Account Number      : 123456
Number of Digits    : 6
Sum of Digits       : 21
Product of Digits   : 720
Highest Digit       : 6
Lowest Digit        : 1

========================================================================

Sample Input 14 :
-5000

Sample Output 14 :

Enter your Account number : -5000

Account number should not be less than or equal to zero.

Enter your Account number : 2468

Account Number      : 2468
Number of Digits    : 4
Sum of Digits       : 20
Product of Digits   : 384
Highest Digit       : 8
Lowest Digit        : 2

========================================================================

Sample Input 15 :
111111111

Sample Output 15 :

Enter your Account number : 111111111

Account Number      : 111111111
Number of Digits    : 9
Sum of Digits       : 9
Product of Digits   : 1
Highest Digit       : 1
Lowest Digit        : 1

========================================================================
*/