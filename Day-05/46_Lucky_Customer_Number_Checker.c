/*
------------------------------------------------------------------------
Program Name : Lucky Customer Number Checker
Author       : MrLogeshrt
Day          : 5
Program No   : 6
Description  : Determines whether a customer number is
               a Lucky Number by comparing the sum of
               digits in its first half and second half.
               The program accepts only positive numbers
               with an even number of digits.

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

int main()
{
    int cust_num, count = 0;


    // Read and validate input from the user
    do
    {
        count = 0; // Reset count for each iteration

        printf("\nEnter Lucky Customer number : ");
        scanf("%d", &cust_num);

        if (cust_num <= 0)
        {
            printf("\nInvalid number. It must be greater than zero.\n");
        }

        int temp = cust_num;

        // count the digits in the entered customer number
        while (temp > 0)
        {
            count++;
            temp /= 10;
        }

        // ensure the number has an even count of digits
        if (count > 0 && count % 2 != 0)
        {
            printf("\nInvalid number. It must have an even number of digits.\n");
        }

    } while (cust_num <= 0 || count % 2 != 0);
    
    int num = cust_num;
    int first_half = 0, second_half = 0;
    int half_count = count / 2;

    for (int i = 0; i < half_count; i++)
    {
        first_half += num % 10;
        num /= 10;
    }

    for (int i = 0; i < half_count; i++)
    {
        second_half += num % 10;
        num /= 10;
    }

    // Display the results
    printf("\nCustomer Number : %d\n", cust_num);
    printf("First Half Sum  : %d\n", first_half);
    printf("Second Half Sum : %d\n", second_half);

    if (first_half == second_half)
    {
        printf("Lucky Status    : Lucky\n");
    }
    else
    {
        printf("Lucky Status    : Not Lucky\n");
    }

    return 0;
}


/*
========================================================================

Sample Input 1 :
1111

Sample Output 1 :

Enter Lucky Customer number : 1111

Customer Number : 1111
First Half Sum  : 2
Second Half Sum : 2
Lucky Status    : Lucky

========================================================================

Sample Input 2 :
1234

Sample Output 2 :

Enter Lucky Customer number : 1234

Customer Number : 1234
First Half Sum  : 3
Second Half Sum : 7
Lucky Status    : Not Lucky

========================================================================

Sample Input 3 :
9009

Sample Output 3 :

Enter Lucky Customer number : 9009

Customer Number : 9009
First Half Sum  : 9
Second Half Sum : 9
Lucky Status    : Lucky

========================================================================

Sample Input 4 :
123456

Sample Output 4 :

Enter Lucky Customer number : 123456

Customer Number : 123456
First Half Sum  : 9
Second Half Sum : 15
Lucky Status    : Not Lucky

========================================================================

Sample Input 5 :
112233

Sample Output 5 :

Enter Lucky Customer number : 112233

Customer Number : 112233
First Half Sum  : 4
Second Half Sum : 8
Lucky Status    : Not Lucky

========================================================================

Sample Input 6 :
135531

Sample Output 6 :

Enter Lucky Customer number : 135531

Customer Number : 135531
First Half Sum  : 9
Second Half Sum : 9
Lucky Status    : Lucky

========================================================================

Sample Input 7 :
999999

Sample Output 7 :

Enter Lucky Customer number : 999999

Customer Number : 999999
First Half Sum  : 27
Second Half Sum : 27
Lucky Status    : Lucky

========================================================================

Sample Input 8 :
123321

Sample Output 8 :

Enter Lucky Customer number : 123321

Customer Number : 123321
First Half Sum  : 6
Second Half Sum : 6
Lucky Status    : Lucky

========================================================================

Sample Input 9 :
246802

Sample Output 9 :

Enter Lucky Customer number : 246802

Customer Number : 246802
First Half Sum  : 12
Second Half Sum : 10
Lucky Status    : Not Lucky

========================================================================

Sample Input 10 :
505505

Sample Output 10 :

Enter Lucky Customer number : 505505

Customer Number : 505505
First Half Sum  : 10
Second Half Sum : 10
Lucky Status    : Lucky

========================================================================

Sample Input 11 :
100001

Sample Output 11 :

Enter Lucky Customer number : 100001

Customer Number : 100001
First Half Sum  : 1
Second Half Sum : 1
Lucky Status    : Lucky

========================================================================

Sample Input 12 :
987654

Sample Output 12 :

Enter Lucky Customer number : 987654

Customer Number : 987654
First Half Sum  : 24
Second Half Sum : 15
Lucky Status    : Not Lucky

========================================================================

Sample Input 13 :
111111

Sample Output 13 :

Enter Lucky Customer number : 111111

Customer Number : 111111
First Half Sum  : 3
Second Half Sum : 3
Lucky Status    : Lucky

========================================================================

Sample Input 14 :
12345

Sample Output 14 :

Enter Lucky Customer number : 12345

Invalid number. It must have an even number of digits.

Enter Lucky Customer number : 123456

Customer Number : 123456
First Half Sum  : 9
Second Half Sum : 15
Lucky Status    : Not Lucky

========================================================================

Sample Input 15 :
0

Sample Output 15 :

Enter Lucky Customer number : 0

Invalid number. It must be greater than zero.

Enter Lucky Customer number : 1111

Customer Number : 1111
First Half Sum  : 2
Second Half Sum : 2
Lucky Status    : Lucky

========================================================================

Sample Input 16 :
-5555

Sample Output 16 :

Enter Lucky Customer number : -5555

Invalid number. It must be greater than zero.

Enter Lucky Customer number : 2468

Customer Number : 2468
First Half Sum  : 10
Second Half Sum : 14
Lucky Status    : Not Lucky

========================================================================

Sample Input 17 :
555555

Sample Output 17 :

Enter Lucky Customer number : 555555

Customer Number : 555555
First Half Sum  : 15
Second Half Sum : 15
Lucky Status    : Lucky

========================================================================

Sample Input 18 :
1357

Sample Output 18 :

Enter Lucky Customer number : 1357

Customer Number : 1357
First Half Sum  : 8
Second Half Sum : 12
Lucky Status    : Not Lucky

========================================================================

Sample Input 19 :
2468

Sample Output 19 :

Enter Lucky Customer number : 2468

Customer Number : 2468
First Half Sum  : 10
Second Half Sum : 14
Lucky Status    : Not Lucky

========================================================================

Sample Input 20 :
1010

Sample Output 20 :

Enter Lucky Customer number : 1010

Customer Number : 1010
First Half Sum  : 1
Second Half Sum : 1
Lucky Status    : Lucky

========================================================================
*/