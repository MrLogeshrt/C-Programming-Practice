/*
------------------------------------------------------------------------
Program Name : Employee ID Vlidator
Author       : MrLogeshrt
Day          : 5
Program No   : 1
Description  : Analyzes a given employee ID by extracting and displaying its numerical 
               properties, including the sum of digits, total number of digits, 
               first digit, last digit, and whether the ID is even or odd. 
               The program also validates that the entered employee ID is a positive integer.

Concepts Used:
- Variables
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
    long long int id;

    // Read the employee ID from the user
    printf("\nEnter Employee ID : ");
    scanf("%lld", &id);

    // Validate that the employee ID is a positive number
    if (id <= 0)
    {
        printf("\nInvalid Employee ID. ID must be a greater than zero.\n");
        return 0;
    }

    // Initialize variables required for digit analysis
    long long int temp = id;
    int sum_of_digits = 0;
    int digit_count = 0;
    int last_digit = temp % 10;
    int first_digit = 0;

    // Extract and analyze each digit of the employee ID
    while (temp > 0)
    {
        int digit = temp % 10;
        sum_of_digits += digit;
        first_digit = digit;
        digit_count++;
        temp /= 10;
    }

    // Display the employee ID analysis report
    printf("\nEmployee ID         : %lld\n", id);
    printf("Sum of digits       : %d\n", sum_of_digits);
    printf("Number of digits    : %d\n", digit_count);
    printf("Even or Odd         : %s\n", (id % 2 == 0) ? "Even" : "Odd");
    printf("First digit         : %d\n", first_digit);
    printf("Last digit          : %d\n", last_digit);

    return 0;
}


/*
========================================================================

Sample Input 1 :
12345

Sample Output 1 :

Enter Employee ID : 12345

Employee ID         : 12345
Sum of digits       : 15
Number of digits    : 5
Even or Odd         : Odd
First digit         : 1
Last digit          : 5

========================================================================

Sample Input 2 :
98765

Sample Output 2 :

Enter Employee ID : 98765

Employee ID         : 98765
Sum of digits       : 35
Number of digits    : 5
Even or Odd         : Odd
First digit         : 9
Last digit          : 5

========================================================================

Sample Input 3 :
24680

Sample Output 3 :

Enter Employee ID : 24680

Employee ID         : 24680
Sum of digits       : 20
Number of digits    : 5
Even or Odd         : Even
First digit         : 2
Last digit          : 0

========================================================================

Sample Input 4 :
13579

Sample Output 4 :

Enter Employee ID : 13579

Employee ID         : 13579
Sum of digits       : 25
Number of digits    : 5
Even or Odd         : Odd
First digit         : 1
Last digit          : 9

========================================================================

Sample Input 5 :
11111

Sample Output 5 :

Enter Employee ID : 11111

Employee ID         : 11111
Sum of digits       : 5
Number of digits    : 5
Even or Odd         : Odd
First digit         : 1
Last digit          : 1

========================================================================

Sample Input 6 :
22222

Sample Output 6 :

Enter Employee ID : 22222

Employee ID         : 22222
Sum of digits       : 10
Number of digits    : 5
Even or Odd         : Even
First digit         : 2
Last digit          : 2

========================================================================

Sample Input 7 :
1

Sample Output 7 :

Enter Employee ID : 1

Employee ID         : 1
Sum of digits       : 1
Number of digits    : 1
Even or Odd         : Odd
First digit         : 1
Last digit          : 1

========================================================================

Sample Input 8 :
2

Sample Output 8 :

Enter Employee ID : 2

Employee ID         : 2
Sum of digits       : 2
Number of digits    : 1
Even or Odd         : Even
First digit         : 2
Last digit          : 2

========================================================================

Sample Input 9 :
10

Sample Output 9 :

Enter Employee ID : 10

Employee ID         : 10
Sum of digits       : 1
Number of digits    : 2
Even or Odd         : Even
First digit         : 1
Last digit          : 0

========================================================================

Sample Input 10 :
100

Sample Output 10 :

Enter Employee ID : 100

Employee ID         : 100
Sum of digits       : 1
Number of digits    : 3
Even or Odd         : Even
First digit         : 1
Last digit          : 0

========================================================================

Sample Input 11 :
123456789

Sample Output 11 :

Enter Employee ID : 123456789

Employee ID         : 123456789
Sum of digits       : 45
Number of digits    : 9
Even or Odd         : Odd
First digit         : 1
Last digit          : 9

========================================================================

Sample Input 12 :
9876543210

Sample Output 12 :

Enter Employee ID : 9876543210

Employee ID         : 9876543210
Sum of digits       : 45
Number of digits    : 10
Even or Odd         : Even
First digit         : 9
Last digit          : 0

========================================================================

Sample Input 13 :
5050505

Sample Output 13 :

Enter Employee ID : 5050505

Employee ID         : 5050505
Sum of digits       : 20
Number of digits    : 7
Even or Odd         : Odd
First digit         : 5
Last digit          : 5

========================================================================

Sample Input 14 :
4242424

Sample Output 14 :

Enter Employee ID : 4242424

Employee ID         : 4242424
Sum of digits       : 28
Number of digits    : 7
Even or Odd         : Even
First digit         : 4
Last digit          : 4

========================================================================

Sample Input 15 :
9999999999

Sample Output 15 :

Enter Employee ID : 9999999999

Employee ID         : 9999999999
Sum of digits       : 90
Number of digits    : 10
Even or Odd         : Even
First digit         : 9
Last digit          : 9

========================================================================

Sample Input 16 :
0

Sample Output 16 :

Enter Employee ID : 0

Invalid Employee ID. ID must be a greater than zero.

========================================================================

Sample Input 17 :
-12345

Sample Output 17 :

Enter Employee ID : -12345

Invalid Employee ID. ID must be a greater than zero.

========================================================================

Sample Input 18 :
-1

Sample Output 18 :

Enter Employee ID : -1

Invalid Employee ID. ID must be a greater than zero.

========================================================================

Sample Input 19 :
505

Sample Output 19 :

Enter Employee ID : 505

Employee ID         : 505
Sum of digits       : 10
Number of digits    : 3
Even or Odd         : Odd
First digit         : 5
Last digit          : 5

========================================================================

Sample Input 20 :
2468

Sample Output 20 :

Enter Employee ID : 2468

Employee ID         : 2468
Sum of digits       : 20
Number of digits    : 4
Even or Odd         : Even
First digit         : 2
Last digit          : 8

========================================================================
*/