/*
------------------------------------------------------------------------
Program Name : Vehicle Number Analyzer 
Author       : MrLogeshrt
Day          : 5
Program No   : 3
Description  : Analyzes a 4-digit vehicle number by calculating the sum of
               its digits, reversing the number, checking whether it is a
               palindrome, and determining whether the vehicle number is
               even or odd.

Concepts Used:
- Variables
- do-while Loop
- while Loop
- Arithmetic Operators
- Relational Operators
- Conditional Statements
- Digit Extraction
- Input Validation
- Ternary Operator
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int number = 0;
    
    // Read and validate the 4-digit vehicle number 
    do
    {
        printf("\nEnter your Vehicle number : ");
        scanf("%d", &number);

        if(number < 1000 || number > 9999)
        {
            printf("\nInput must be a 4-digit number (1000-9999).\n");
        }
         
    } while(number <1000 || number>9999);

    // Initialize variables required for number analysis
    int temp = number;
    int digit = 0;
    int sum = 0;
    int reverse = 0;

    // Extract and analyze each digit of the vehicle number
    while (temp != 0)
    {
        digit = temp % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    // Display the vehicle number analysis report
    printf("\nVehicle Number      : %d\n", number);
    printf("Number of Digits    : 4\n");
    printf("Sum of Digits       : %d\n", sum);
    printf("Reversed Number     : %d\n", reverse);
    printf("Palindrome Status   : %s\n", (number == reverse) ? "Palindrome": "Not Palindrome");
    printf("Number Type         : %s\n", (number % 2 == 0) ? "Even" : "Odd");

    return 0;
}


/*
========================================================================
Sample Test Cases for 4-Digit Number Analyzer Program
========================================================================

Sample Input 1 :
1234

Sample Output 1 :

Enter your Vehicle number : 1234

Vehicle Number      : 1234
Number of Digits    : 4
Sum of Digits       : 10
Reversed Number     : 4321
Palindrome Status   : Not Palindrome
Number Type         : Even

========================================================================

Sample Input 2 :
1221

Sample Output 2 :

Enter your Vehicle number : 1221

Vehicle Number      : 1221
Number of Digits    : 4
Sum of Digits       : 6
Reversed Number     : 1221
Palindrome Status   : Palindrome
Number Type         : Even

========================================================================

Sample Input 3 :
1331

Sample Output 3 :

Enter your Vehicle number : 1331

Vehicle Number      : 1331
Number of Digits    : 4
Sum of Digits       : 8
Reversed Number     : 1331
Palindrome Status   : Palindrome
Number Type         : Odd

========================================================================

Sample Input 4 :
5678

Sample Output 4 :

Enter your Vehicle number : 5678

Vehicle Number      : 5678
Number of Digits    : 4
Sum of Digits       : 26
Reversed Number     : 8765
Palindrome Status   : Not Palindrome
Number Type         : Even

========================================================================

Sample Input 5 :
5555

Sample Output 5 :

Enter your Vehicle number : 5555

Vehicle Number      : 5555
Number of Digits    : 4
Sum of Digits       : 20
Reversed Number     : 5555
Palindrome Status   : Palindrome
Number Type         : Odd

========================================================================

Sample Input 6 :
1000

Sample Output 6 :

Enter your Vehicle number : 1000

Vehicle Number      : 1000
Number of Digits    : 4
Sum of Digits       : 1
Reversed Number     : 1
Palindrome Status   : Not Palindrome
Number Type         : Even

========================================================================

Sample Input 7 :
9999

Sample Output 7 :

Enter your Vehicle number : 9999

Vehicle Number      : 9999
Number of Digits    : 4
Sum of Digits       : 36
Reversed Number     : 9999
Palindrome Status   : Palindrome
Number Type         : Odd

========================================================================

Sample Input 8 :
1001

Sample Output 8 :

Enter your Vehicle number : 1001

Vehicle Number      : 1001
Number of Digits    : 4
Sum of Digits       : 2
Reversed Number     : 1001
Palindrome Status   : Palindrome
Number Type         : Even

========================================================================

Sample Input 9 :
1200

Sample Output 9 :

Enter your Vehicle number : 1200

Vehicle Number      : 1200
Number of Digits    : 4
Sum of Digits       : 3
Reversed Number     : 21
Palindrome Status   : Not Palindrome
Number Type         : Even

========================================================================

Sample Input 10 :
2222

Sample Output 10 :

Enter your Vehicle number : 2222

Vehicle Number      : 2222
Number of Digits    : 4
Sum of Digits       : 8
Reversed Number     : 2222
Palindrome Status   : Palindrome
Number Type         : Even

========================================================================

Sample Input 11 :
999

Sample Output 11 :

Enter your Vehicle number : 999

Input must be a 4-digit number (1000-9999).

Enter your Vehicle number : 1234

Vehicle Number      : 1234
Number of Digits    : 4
Sum of Digits       : 10
Reversed Number     : 4321
Palindrome Status   : Not Palindrome
Number Type         : Even

========================================================================

Sample Input 12 :
10000

Sample Output 12 :

Enter your Vehicle number : 10000

Input must be a 4-digit number (1000-9999).

Enter your Vehicle number : 5678

Vehicle Number      : 5678
Number of Digits    : 4
Sum of Digits       : 26
Reversed Number     : 8765
Palindrome Status   : Not Palindrome
Number Type         : Even

========================================================================
*/