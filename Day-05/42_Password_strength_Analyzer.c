/*
------------------------------------------------------------------------
Program Name : Password Strength Analyzer
Author       : MrLogeshrt
Day          : 5
Program No   : 2
Description  : Analyzes a 4-digit PIN by extracting and displaying its numerical 
               properties, including the sum of digits, largest digit, smallest digit, 
               and number of repeated digits. The program also determines PIN strength 
               (Strong, Medium, or Weak) based on the presence of repeated digits.
               The program validates that the entered PIN is exactly 4 digits.

Concepts Used:
- Variables
- do-while Loop
- for Loop
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
    int pin;

    // Read and validate the 4-digit PIN from the user
    do
    {
        printf("\nEnter a 4-digit PIN : ");
        scanf("%d", &pin);

        if (pin <= 0)
        {
            printf("PIN must be a positive number.\n");
        }
        else if (pin < 1000 || pin > 9999)
        {
            printf("\nInvalid PIN format.\n");
            printf("PIN must contain exactly 4 digits.\n");
        }
        
    } while (pin < 1000 || pin > 9999);

    // Initialize variables required for PIN analysis
    int sum = 0;
    int min = 9;  
    int max = 0;  
    int repeat_count = 0;  
    int temp = pin;

    // Extract and analyze each digit of the PIN
    for (int i = 1; i <= 4; i++)
    {
        int digit = temp % 10;
        sum += digit;

        // Update min and max
        if (digit < min)
        {
            min = digit;
        }

        if (digit > max)
        {
            max = digit;
        }

        temp /= 10;
    }

    // Check for repeated digits by comparing each digit with others
    temp = pin;

    for (int i = 1; i <= 4; i++)
    {
        int digit1 = temp % 10;
        int temp2 = pin;

        // Compare current digit with all other digits
        for (int j = 1; j <= 4; j++)
        {
            int digit2 = temp2 % 10;

            // Count repetitions (but avoid counting the same position twice)
            if (i != j && digit1 == digit2)
            {
                repeat_count++;
            }

            temp2 /= 10;
        }

        temp /= 10;
    }

    // Since we count each pair twice, divide by 2
    repeat_count = repeat_count / 2;

    // Display the PIN analysis report
    printf("\nNumber of Digits  : 4\n");
    printf("Sum of digits     : %d\n", sum);
    printf("Largest digit     : %d\n", max);
    printf("Smallest digit    : %d\n", min);
    printf("Repeated Digits   : %d\n", repeat_count);

    // Determine PIN strength based on repeated digits
    if (repeat_count == 0)
    {
        printf("PIN Strength      : Strong PIN.\n");
    }
    else if (repeat_count == 1)
    {
        printf("PIN Strength      : Medium PIN.\n");
    }
    else
    {
        printf("PIN Strength      : Weak PIN.\n");
    }

    return 0;
}


/*
========================================================================

Sample Input 1 :
1234

Sample Output 1 :

Enter a 4-digit PIN : 1234

Number of Digits  : 4
Sum of digits     : 10
Largest digit     : 4
Smallest digit    : 1
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 2 :
1123

Sample Output 2 :

Enter a 4-digit PIN : 1123

Number of Digits  : 4
Sum of digits     : 7
Largest digit     : 3
Smallest digit    : 1
Repeated Digits   : 1
PIN Strength      : Medium PIN.

========================================================================

Sample Input 3 :
1111

Sample Output 3 :

Enter a 4-digit PIN : 1111

Number of Digits  : 4
Sum of digits     : 4
Largest digit     : 1
Smallest digit    : 1
Repeated Digits   : 6
PIN Strength      : Weak PIN.

========================================================================

Sample Input 4 :
5678

Sample Output 4 :

Enter a 4-digit PIN : 5678

Number of Digits  : 4
Sum of digits     : 26
Largest digit     : 8
Smallest digit    : 5
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 5 :
2244

Sample Output 5 :

Enter a 4-digit PIN : 2244

Number of Digits  : 4
Sum of digits     : 12
Largest digit     : 4
Smallest digit    : 2
Repeated Digits   : 2
PIN Strength      : Weak PIN.

========================================================================

Sample Input 6 :
9876

Sample Output 6 :

Enter a 4-digit PIN : 9876

Number of Digits  : 4
Sum of digits     : 30
Largest digit     : 9
Smallest digit    : 6
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 7 :
1122

Sample Output 7 :

Enter a 4-digit PIN : 1122

Number of Digits  : 4
Sum of digits     : 6
Largest digit     : 2
Smallest digit    : 1
Repeated Digits   : 2
PIN Strength      : Weak PIN.

========================================================================

Sample Input 8 :
5555

Sample Output 8 :

Enter a 4-digit PIN : 5555

Number of Digits  : 4
Sum of digits     : 20
Largest digit     : 5
Smallest digit    : 5
Repeated Digits   : 6
PIN Strength      : Weak PIN.

========================================================================

Sample Input 9 :
1357

Sample Output 9 :

Enter a 4-digit PIN : 1357

Number of Digits  : 4
Sum of digits     : 16
Largest digit     : 7
Smallest digit    : 1
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 10 :
2468

Sample Output 10 :

Enter a 4-digit PIN : 2468

Number of Digits  : 4
Sum of digits     : 20
Largest digit     : 8
Smallest digit    : 2
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 11 :
1231

Sample Output 11 :

Enter a 4-digit PIN : 1231

Number of Digits  : 4
Sum of digits     : 7
Largest digit     : 3
Smallest digit    : 1
Repeated Digits   : 1
PIN Strength      : Medium PIN.

========================================================================

Sample Input 12 :
1212

Sample Output 12 :

Enter a 4-digit PIN : 1212

Number of Digits  : 4
Sum of digits     : 6
Largest digit     : 2
Smallest digit    : 1
Repeated Digits   : 2
PIN Strength      : Weak PIN.

========================================================================

Sample Input 13 :
3456

Sample Output 13 :

Enter a 4-digit PIN : 3456

Number of Digits  : 4
Sum of digits     : 18
Largest digit     : 6
Smallest digit    : 3
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 14 :
7890

Sample Output 14 :

Enter a 4-digit PIN : 7890

Number of Digits  : 4
Sum of digits     : 24
Largest digit     : 9
Smallest digit    : 0
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 15 :
1000

Sample Output 15 :

Enter a 4-digit PIN : 1000

Number of Digits  : 4
Sum of digits     : 1
Largest digit     : 1
Smallest digit    : 0
Repeated Digits   : 3
PIN Strength      : Weak PIN.

========================================================================

Sample Input 16 :
0

Sample Output 16 :

Enter a 4-digit PIN : 0

PIN must be a positive number.

Enter a 4-digit PIN : 1234

Number of Digits  : 4
Sum of digits     : 10
Largest digit     : 4
Smallest digit    : 1
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 17 :
-1234

Sample Output 17 :

Enter a 4-digit PIN : -1234

PIN must be a positive number.

Enter a 4-digit PIN : 5678

Number of Digits  : 4
Sum of digits     : 26
Largest digit     : 8
Smallest digit    : 5
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 18 :
999

Sample Output 18 :

Enter a 4-digit PIN : 999

Invalid PIN format.
PIN must contain exactly 4 digits.

Enter a 4-digit PIN : 1234

Number of Digits  : 4
Sum of digits     : 10
Largest digit     : 4
Smallest digit    : 1
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 19 :
12345

Sample Output 19 :

Enter a 4-digit PIN : 12345

Invalid PIN format.
PIN must contain exactly 4 digits.

Enter a 4-digit PIN : 5678

Number of Digits  : 4
Sum of digits     : 26
Largest digit     : 8
Smallest digit    : 5
Repeated Digits   : 0
PIN Strength      : Strong PIN.

========================================================================

Sample Input 20 :
1001

Sample Output 20 :

Enter a 4-digit PIN : 1001

Number of Digits  : 4
Sum of digits     : 2
Largest digit     : 1
Smallest digit    : 0
Repeated Digits   : 2
PIN Strength      : Weak PIN.

========================================================================
*/