/*
------------------------------------------------------------------------
Program Name : Banking Security Analyzer
Author       : MrLogeshrt
Day          : 5
Program No   : 10
Description  : Analyzes a banking security number by
               calculating the sum of digits, product
               of digits, reverse of the number,
               largest and smallest digit, counting
               even and odd digits, and determining
               whether the number is a Palindrome
               and an Armstrong Number.
------------------------------------------------------------------------

Concepts Used:
- Variables
- do-while Loop
- while Loop
- Arithmetic Operators
- Relational Operators
- Conditional Statements
- Digit Extraction
- Digit Analysis
- Mathematical Functions (math.h)
- Input Validation
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>
#include <math.h>

int main()
{
    int security_num;

    do
    {
        printf("\nEnter your banking security number : ");
        scanf("%d", &security_num);

        if (security_num <= 0)
        {
            printf("\nInvalid Input. Security number must be greater than zero.");
        }
    } while (security_num <= 0);

    // Initialize variables required for security number analysis
    int sum = 0;
    int digit = 0;
    int count = 0;
    int product = 1;
    int reverse = 0;
    int max = 0, min = 9;
    int armstrong = 0;
    int even = 0;
    int temp  = security_num;

    // Extract and analyze each digit of the security number
    while (temp > 0)
    {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        reverse = reverse * 10 + digit;
        count++;
        
        if (max <  digit)
        {
            max = digit;
        }

        if (min > digit)
        {
            min = digit;
        }

        if (digit % 2 == 0)
        {
            even++;
        }

        temp /= 10;

    }

    temp  = security_num;

    // Calculate the Armstrong number value
    while(temp > 0)
    {
        digit = temp % 10;
        armstrong += (int) pow(digit, count);
        temp /= 10;
    }

    printf("\nSecurity Number     : %d\n", security_num);
    printf("Digits Count        : %d\n", count);
    printf("Sum of Digits       : %d\n", sum);
    printf("Product of digits   : %d\n", product);
    printf("Even Digits Count   : %d\n", even);
    printf("Odd Digits Count    : %d\n", count - even);
    printf("Largest Digit       : %d\n", max);
    printf("Smallest Digit      : %d\n", min);
    printf("Palindrome Status   : %s\n", (security_num == reverse) ? "Palindrome Number" : "Not a Palindrome Number");
    printf("Armstrong Status    : %s\n", (armstrong == security_num) ? "Armstrong Number" : "Not an Armstrong Number");

    return 0;

}


/*
========================================================================

Sample Input 1 :
153

Sample Output 1 :

Enter your banking security number : 153

Security Number     : 153
Digits Count        : 3
Sum of Digits       : 9
Product of digits   : 15
Even Digits Count   : 0
Odd Digits Count    : 3
Largest Digit       : 5
Smallest Digit      : 1
Palindrome Status   : Not a Palindrome Number
Armstrong Status    : Armstrong Number

========================================================================

Sample Input 2 :
370

Sample Output 2 :

Enter your banking security number : 370

Security Number     : 370
Digits Count        : 3
Sum of Digits       : 10
Product of digits   : 0
Even Digits Count   : 1
Odd Digits Count    : 2
Largest Digit       : 7
Smallest Digit      : 0
Palindrome Status   : Not a Palindrome Number
Armstrong Status    : Armstrong Number

========================================================================

Sample Input 3 :
121

Sample Output 3 :

Enter your banking security number : 121

Security Number     : 121
Digits Count        : 3
Sum of Digits       : 4
Product of digits   : 2
Even Digits Count   : 1
Odd Digits Count    : 2
Largest Digit       : 2
Smallest Digit      : 1
Palindrome Status   : Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================

Sample Input 4 :
1221

Sample Output 4 :

Enter your banking security number : 1221

Security Number     : 1221
Digits Count        : 4
Sum of Digits       : 6
Product of digits   : 4
Even Digits Count   : 2
Odd Digits Count    : 2
Largest Digit       : 2
Smallest Digit      : 1
Palindrome Status   : Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================

Sample Input 5 :
12321

Sample Output 5 :

Enter your banking security number : 12321

Security Number     : 12321
Digits Count        : 5
Sum of Digits       : 9
Product of digits   : 12
Even Digits Count   : 2
Odd Digits Count    : 3
Largest Digit       : 3
Smallest Digit      : 1
Palindrome Status   : Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================

Sample Input 6 :
9474

Sample Output 6 :

Enter your banking security number : 9474

Security Number     : 9474
Digits Count        : 4
Sum of Digits       : 24
Product of digits   : 1008
Even Digits Count   : 2
Odd Digits Count    : 2
Largest Digit       : 9
Smallest Digit      : 4
Palindrome Status   : Not a Palindrome Number
Armstrong Status    : Armstrong Number

========================================================================

Sample Input 7 :
8208

Sample Output 7 :

Enter your banking security number : 8208

Security Number     : 8208
Digits Count        : 4
Sum of Digits       : 18
Product of digits   : 0
Even Digits Count   : 4
Odd Digits Count    : 0
Largest Digit       : 8
Smallest Digit      : 0
Palindrome Status   : Not a Palindrome Number
Armstrong Status    : Armstrong Number

========================================================================

Sample Input 8 :
12345

Sample Output 8 :

Enter your banking security number : 12345

Security Number     : 12345
Digits Count        : 5
Sum of Digits       : 15
Product of digits   : 120
Even Digits Count   : 2
Odd Digits Count    : 3
Largest Digit       : 5
Smallest Digit      : 1
Palindrome Status   : Not a Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================

Sample Input 9 :
98765

Sample Output 9 :

Enter your banking security number : 98765

Security Number     : 98765
Digits Count        : 5
Sum of Digits       : 35
Product of digits   : 15120
Even Digits Count   : 2
Odd Digits Count    : 3
Largest Digit       : 9
Smallest Digit      : 5
Palindrome Status   : Not a Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================

Sample Input 10 :
11111

Sample Output 10 :

Enter your banking security number : 11111

Security Number     : 11111
Digits Count        : 5
Sum of Digits       : 5
Product of digits   : 1
Even Digits Count   : 0
Odd Digits Count    : 5
Largest Digit       : 1
Smallest Digit      : 1
Palindrome Status   : Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================

Sample Input 11 :
2468

Sample Output 11 :

Enter your banking security number : 2468

Security Number     : 2468
Digits Count        : 4
Sum of Digits       : 20
Product of digits   : 384
Even Digits Count   : 4
Odd Digits Count    : 0
Largest Digit       : 8
Smallest Digit      : 2
Palindrome Status   : Not a Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================

Sample Input 12 :
13579

Sample Output 12 :

Enter your banking security number : 13579

Security Number     : 13579
Digits Count        : 5
Sum of Digits       : 25
Product of digits   : 945
Even Digits Count   : 0
Odd Digits Count    : 5
Largest Digit       : 9
Smallest Digit      : 1
Palindrome Status   : Not a Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================

Sample Input 13 :
100

Sample Output 13 :

Enter your banking security number : 100

Security Number     : 100
Digits Count        : 3
Sum of Digits       : 1
Product of digits   : 0
Even Digits Count   : 2
Odd Digits Count    : 1
Largest Digit       : 1
Smallest Digit      : 0
Palindrome Status   : Not a Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================

Sample Input 14 :
999

Sample Output 14 :

Enter your banking security number : 999

Security Number     : 999
Digits Count        : 3
Sum of Digits       : 27
Product of digits   : 729
Even Digits Count   : 0
Odd Digits Count    : 3
Largest Digit       : 9
Smallest Digit      : 9
Palindrome Status   : Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================

Sample Input 15 :
12345678

Sample Output 15 :

Enter your banking security number : 12345678

Security Number     : 12345678
Digits Count        : 8
Sum of Digits       : 36
Product of digits   : 40320
Even Digits Count   : 4
Odd Digits Count    : 4
Largest Digit       : 8
Smallest Digit      : 1
Palindrome Status   : Not a Palindrome Number
Armstrong Status    : Not an Armstrong Number

========================================================================
*/