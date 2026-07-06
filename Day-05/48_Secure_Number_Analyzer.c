/*
------------------------------------------------------------------------
Program Name : Secure Number Analyzer
Author       : MrLogeshrt
Day          : 5
Program No   : 8
Description  : Analyzes a positive integer by checking
               whether it is a Palindrome,
               Armstrong, Perfect, and Strong Number.
               Based on the results, the program
               classifies the number as Secure
               or Not Secure.
------------------------------------------------------------------------

Concepts Used:
- Variables
- do-while Loop
- while Loop
- for Loop
- Digit Comparison
- Arithmetic Operators
- Relational Operators
- Conditional Statements
- Digit Extraction
- Input Validation
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>
#include <math.h>

int main()
{
    int num; // variable to store user input

    // Ask user for input until a non-negative integer is entered
    do
    {
        printf("\nEnter your number : ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("\nInvalid Input. Number must be greater than or equal to zero.\n");
        }

    } while (num < 0);

    int temp = num;
    int digit = 0;
    int reverse = 0;
    int sum = 0;
    int count = 0;
    int armstrong = 0;
    int strong = 0;
    int factorial = 1;

    while (temp > 0)
    {
        digit = temp % 10;
        count++;
        reverse = reverse * 10 + digit;
        factorial = 1;
        
        for(int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }

        strong += factorial;
        temp /= 10;
    }

    temp = num;

    while(temp > 0)
    {
        digit = temp % 10;
        armstrong += pow(digit, count);
        temp /= 10;
    }

    temp = num;

    for (int i = 1; i <= temp / 2; i++) 
    {
        if (temp % i == 0) 
        {
            sum += i;
        }
    }

    // Display the results with secure status
    printf("\nInput Number                : %d\n", num);
    printf("Palindrome Status           : %s\n", (num == reverse) ? "Palindrome" : "Not Palindrome");
    printf("Armstrong Number Status     : %s\n", (armstrong == num) ? "Armstrong" : "Not Armstrong");
    printf("Perfect Number Status       : %s\n", (num == sum) ? "Perfect" : "Not Perfect");
    printf("Strong Number Status        : %s\n", (strong == num) ? "Strong" : "Not Strong");

    int score = 0;

    if (num==reverse)
    {
        score++;
    }

    if (armstrong==num)
    {
        score++;
    }
 
    if (sum==num)
    {
        score++;
    }

    if (strong==num)
    {
        score++;
    }

    if (score > 3)
    {
        printf("\nSecure Status               : Highly Secure\n");
    }

    else if (score > 2)
    {
        printf("\nSecure Status               : Secure\n");
    }

    else if (score > 1)
    {
        printf("\nSecure Status               : Moderately Secure\n");
    }

    else if (score > 0)
    {
        printf("\nSecure Status               : Weak\n");
    }

    else
    {
        printf("\nSecure Status               : Not Secure\n");
    }

    return 0;
    
}


/*
========================================================================

Sample Input 1 :
153

Sample Output 1 :

Enter your number : 153

Input Number                : 153
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 2 :
121

Sample Output 2 :

Enter your number : 121

Input Number                : 121
Palindrome Status           : Palindrome
Armstrong Number Status     : Not Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 3 :
6

Sample Output 3 :

Enter your number : 6

Input Number                : 6
Palindrome Status           : Palindrome
Armstrong Number Status     : Not Armstrong
Perfect Number Status       : Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 4 :
1

Sample Output 4 :

Enter your number : 1

Input Number                : 1
Palindrome Status           : Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Strong

Secure Status               : Moderately Secure

========================================================================

Sample Input 5 :
2

Sample Output 5 :

Enter your number : 2

Input Number                : 2
Palindrome Status           : Palindrome
Armstrong Number Status     : Not Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Strong

Secure Status               : Weak

========================================================================

Sample Input 6 :
145

Sample Output 6 :

Enter your number : 145

Input Number                : 145
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Not Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Strong

Secure Status               : Weak

========================================================================

Sample Input 7 :
28

Sample Output 7 :

Enter your number : 28

Input Number                : 28
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Not Armstrong
Perfect Number Status       : Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 8 :
9474

Sample Output 8 :

Enter your number : 9474

Input Number                : 9474
Palindrome Status           : Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Moderately Secure

========================================================================

Sample Input 9 :
370

Sample Output 9 :

Enter your number : 370

Input Number                : 370
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 10 :
9

Sample Output 10 :

Enter your number : 9

Input Number                : 9
Palindrome Status           : Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 11 :
496

Sample Output 11 :

Enter your number : 496

Input Number                : 496
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Not Armstrong
Perfect Number Status       : Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 12 :
0

Sample Output 12 :

Enter your number : 0

Input Number                : 0
Palindrome Status           : Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Perfect
Strong Number Status        : Strong

Secure Status               : Highly Secure

========================================================================

Sample Input 13 :
11

Sample Output 13 :

Enter your number : 11

Input Number                : 11
Palindrome Status           : Palindrome
Armstrong Number Status     : Not Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 14 :
100

Sample Output 14 :

Enter your number : 100

Input Number                : 100
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Not Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Not Secure

========================================================================

Sample Input 15 :
8208

Sample Output 15 :

Enter your number : 8208

Input Number                : 8208
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 16 :
101

Sample Output 16 :

Enter your number : 101

Input Number                : 101
Palindrome Status           : Palindrome
Armstrong Number Status     : Not Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 17 :
40585

Sample Output 17 :

Enter your number : 40585

Input Number                : 40585
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 18 :
8128

Sample Output 18 :

Enter your number : 8128

Input Number                : 8128
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Not Armstrong
Perfect Number Status       : Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 19 :
5

Sample Output 19 :

Enter your number : 5

Input Number                : 5
Palindrome Status           : Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Strong

Secure Status               : Moderately Secure

========================================================================

Sample Input 20 :
-5

Sample Output 20 :

Enter your number : -5

Invalid Input. Number must be greater than or equal to zero.

Enter your number : 371

Input Number                : 371
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================

Sample Input 21 :
1634

Sample Output 21 :

Enter your number : 1634

Input Number                : 1634
Palindrome Status           : Not Palindrome
Armstrong Number Status     : Armstrong
Perfect Number Status       : Not Perfect
Strong Number Status        : Not Strong

Secure Status               : Weak

========================================================================
*/