/*
------------------------------------------------------------------------
Program Name : Package Number Analyzer
Author       : MrLogeshrt
Day          : 5
Program No   : 9
Description  : Analyzes a package number by calculating
               the sum of digits, average digit value,
               reverse of the number, and counting
               prime and composite digits present in
               the package number.
------------------------------------------------------------------------

Concepts Used:
- Variables
- do-while Loop
- while Loop
- for Loop
- Digit Analysis
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
    int package_num;

    // Read and validate the package number
    do
    {
        printf("\nEnter your package number : ");
        scanf("%d", &package_num);

        if (package_num <= 0)
        {
            printf("\nInvalid Input. Package number must be greater than zero.\n");
        }
    } while (package_num <= 0);
    
    // Initialize variables required for package number analysis
    int temp = package_num;
    int sum = 0;
    int reverse = 0;
    int prime_count = 0;
    int count = 0;
    int composite_count = 0;
    int digit = 0;

    // Extract and analyze each digit of the package number
    while (temp > 0)
    {
        digit = temp % 10;
        count++;
        reverse = reverse * 10 + digit;
        sum += digit;

        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            prime_count++;
        }
        else if (digit == 4 || digit == 6 || digit == 8 || digit == 9)
        {
            composite_count++;
        }

        temp /= 10;
    }

    float average = (float) sum / count;

    // Display the package number analysis report
    printf("\nPackage Number          : %d\n", package_num);
    printf("Sum of Digits           : %d\n", sum);
    printf("Average of digits       : %.2f\n", average);
    printf("Digits Count            : %d\n", count);
    printf("Reverse Number          : %d\n", reverse);
    printf("Prime Digits Count      : %d\n", prime_count);
    printf("Composite Digits Count  : %d\n", composite_count);

    return 0;
    
}


/*
========================================================================

Sample Input 1 :
12345

Sample Output 1 :

Enter your package number : 12345

Package Number          : 12345
Sum of Digits           : 15
Average of digits       : 3.00
Digits Count            : 5
Reverse Number          : 54321
Prime Digits Count      : 3
Composite Digits Count  : 1

========================================================================

Sample Input 2 :
98765

Sample Output 2 :

Enter your package number : 98765

Package Number          : 98765
Sum of Digits           : 35
Average of digits       : 7.00
Digits Count            : 5
Reverse Number          : 56789
Prime Digits Count      : 2
Composite Digits Count  : 3

========================================================================

Sample Input 3 :
11111

Sample Output 3 :

Enter your package number : 11111

Package Number          : 11111
Sum of Digits           : 5
Average of digits       : 1.00
Digits Count            : 5
Reverse Number          : 11111
Prime Digits Count      : 0
Composite Digits Count  : 0

========================================================================

Sample Input 4 :
24680

Sample Output 4 :

Enter your package number : 24680

Package Number          : 24680
Sum of Digits           : 20
Average of digits       : 4.00
Digits Count            : 5
Reverse Number          : 8642
Prime Digits Count      : 1
Composite Digits Count  : 3

========================================================================

Sample Input 5 :
23579

Sample Output 5 :

Enter your package number : 23579

Package Number          : 23579
Sum of Digits           : 26
Average of digits       : 5.20
Digits Count            : 5
Reverse Number          : 97532
Prime Digits Count      : 4
Composite Digits Count  : 1

========================================================================

Sample Input 6 :
100

Sample Output 6 :

Enter your package number : 100

Package Number          : 100
Sum of Digits           : 1
Average of digits       : 0.33
Digits Count            : 3
Reverse Number          : 1
Prime Digits Count      : 0
Composite Digits Count  : 0

========================================================================

Sample Input 7 :
999

Sample Output 7 :

Enter your package number : 999

Package Number          : 999
Sum of Digits           : 27
Average of digits       : 9.00
Digits Count            : 3
Reverse Number          : 999
Prime Digits Count      : 0
Composite Digits Count  : 3

========================================================================

Sample Input 8 :
12345678

Sample Output 8 :

Enter your package number : 12345678

Package Number          : 12345678
Sum of Digits           : 36
Average of digits       : 4.50
Digits Count            : 8
Reverse Number          : 87654321
Prime Digits Count      : 4
Composite Digits Count  : 3

========================================================================

Sample Input 9 :
2468

Sample Output 9 :

Enter your package number : 2468

Package Number          : 2468
Sum of Digits           : 20
Average of digits       : 5.00
Digits Count            : 4
Reverse Number          : 8642
Prime Digits Count      : 1
Composite Digits Count  : 3

========================================================================

Sample Input 10 :
3579

Sample Output 10 :

Enter your package number : 3579

Package Number          : 3579
Sum of Digits           : 24
Average of digits       : 6.00
Digits Count            : 4
Reverse Number          : 9753
Prime Digits Count      : 3
Composite Digits Count  : 1

========================================================================

Sample Input 11 :
54321

Sample Output 11 :

Enter your package number : 54321

Package Number          : 54321
Sum of Digits           : 15
Average of digits       : 3.00
Digits Count            : 5
Reverse Number          : 12345
Prime Digits Count      : 3
Composite Digits Count  : 1

========================================================================

Sample Input 12 :
10203

Sample Output 12 :

Enter your package number : 10203

Package Number          : 10203
Sum of Digits           : 6
Average of digits       : 1.20
Digits Count            : 5
Reverse Number          : 30201
Prime Digits Count      : 2
Composite Digits Count  : 0

========================================================================

Sample Input 13 :
77777

Sample Output 13 :

Enter your package number : 77777

Package Number          : 77777
Sum of Digits           : 35
Average of digits       : 7.00
Digits Count            : 5
Reverse Number          : 77777
Prime Digits Count      : 5
Composite Digits Count  : 0

========================================================================

Sample Input 14 :
44444

Sample Output 14 :

Enter your package number : 44444

Package Number          : 44444
Sum of Digits           : 20
Average of digits       : 4.00
Digits Count            : 5
Reverse Number          : 44444
Prime Digits Count      : 0
Composite Digits Count  : 5

========================================================================

Sample Input 15 :
123456789

Sample Output 15 :

Enter your package number : 123456789

Package Number          : 123456789
Sum of Digits           : 45
Average of digits       : 5.00
Digits Count            : 9
Reverse Number          : 987654321
Prime Digits Count      : 4
Composite Digits Count  : 4

========================================================================
*/