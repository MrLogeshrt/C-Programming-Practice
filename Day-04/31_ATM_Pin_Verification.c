/*
------------------------------------------------------------------------
Program Name : ATM PIN Verification System
Author       : MrLogeshrt
Day          : 4
Program No   : 1
Description  : Simulates an ATM PIN verification system that allows
               a maximum of three login attempts before temporarily
               locking the account.

Concepts Used:
- Variables
- While Loop
- if-else Statements
- Relational Operators
- Logical Operators
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int attempt = 0, pin = 2026, user_pin;

    while(attempt < 3)
    {
        // Ask the user for their PIN
        printf("\nEnter your PIN (4 digits) : ");
        scanf("%d", &user_pin);

        if (pin == user_pin)
        {
            printf("\nLogin successful. PIN verified.\n");
            break;
        }

        else
        {
            // Increase the failed attempt counter
            attempt ++;

            if (user_pin < 1000 || user_pin > 9999)
            {
                printf("Invalid PIN format.\n");
                printf("PIN must contain exactly 4 digits.\n");
                printf("Attempts left : %d\n", 3 - attempt);
                continue;
            }

            printf("Incorrect PIN.\n");

            if(attempt == 3)
            {
                printf("\nAccount temporarily locked.\n");
                break;
            }

            // Show how many attempts remain
            printf("Attempts left : %d\n", 3 - attempt);

        }
    }

    return 0;

}


/*
========================================================================

Sample Input 1 :
2026

Sample Output 1 :

Enter your PIN (4 digits) : 2026

Login successful. PIN verified.

========================================================================

Sample Input 2 :
1234
2026

Sample Output 2 :

Enter your PIN (4 digits) : 1234
Incorrect PIN.
Attempts left : 2

Enter your PIN (4 digits) : 2026

Login successful. PIN verified.

========================================================================

Sample Input 3 :
5555
9999
2026

Sample Output 3 :

Enter your PIN (4 digits) : 5555
Incorrect PIN.
Attempts left : 2

Enter your PIN (4 digits) : 9999
Incorrect PIN.
Attempts left : 1

Enter your PIN (4 digits) : 2026

Login successful. PIN verified.

========================================================================

Sample Input 4 :
1111
2222
3333

Sample Output 4 :

Enter your PIN (4 digits) : 1111
Incorrect PIN.
Attempts left : 2

Enter your PIN (4 digits) : 2222
Incorrect PIN.
Attempts left : 1

Enter your PIN (4 digits) : 3333
Incorrect PIN.

Account temporarily locked.

========================================================================

Sample Input 5 :
0000
1111
2222

Sample Output 5 :

Enter your PIN (4 digits) : 0000
Incorrect PIN.
Attempts left : 2

Enter your PIN (4 digits) : 1111
Incorrect PIN.
Attempts left : 1

Enter your PIN (4 digits) : 2222
Incorrect PIN.

Account temporarily locked.

========================================================================

Sample Input 6 :
123
2026

Sample Output 6 :

Enter your PIN (4 digits) : 123
Invalid PIN format.
PIN must contain exactly 4 digits.
Attempts left : 0

Enter your PIN (4 digits) : 2026

Login successful. PIN verified.

========================================================================

Sample Input 7 :
12345
2026

Sample Output 7 :

Enter your PIN (4 digits) : 12345
Invalid PIN format.
PIN must contain exactly 4 digits.
Attempts left : 0

Enter your PIN (4 digits) : 2026

Login successful. PIN verified.

========================================================================

Sample Input 8 :
0
1111
2222

Sample Output 8 :

Enter your PIN (4 digits) : 0
Invalid PIN format.
PIN must contain exactly 4 digits.
Attempts left : 0

Enter your PIN (4 digits) : 1111
Incorrect PIN.
Attempts left : 1

Enter your PIN (4 digits) : 2222
Incorrect PIN.

Account temporarily locked.

========================================================================

Sample Input 9 :
99999
1234
5678

Sample Output 9 :

Enter your PIN (4 digits) : 99999
Invalid PIN format.
PIN must contain exactly 4 digits.
Attempts left : 0

Enter your PIN (4 digits) : 1234
Incorrect PIN.
Attempts left : 1

Enter your PIN (4 digits) : 5678
Incorrect PIN.

Account temporarily locked.

========================================================================

Sample Input 10 :
1000
2026

Sample Output 10 :

Enter your PIN (4 digits) : 1000
Incorrect PIN.
Attempts left : 2

Enter your PIN (4 digits) : 2026

Login successful. PIN verified.

========================================================================

Sample Input 11 :
9999
2026

Sample Output 11 :

Enter your PIN (4 digits) : 9999
Incorrect PIN.
Attempts left : 2

Enter your PIN (4 digits) : 2026

Login successful. PIN verified.

========================================================================

Sample Input 12 :
2025
2026

Sample Output 12 :

Enter your PIN (4 digits) : 2025
Incorrect PIN.
Attempts left : 2

Enter your PIN (4 digits) : 2026

Login successful. PIN verified.

========================================================================

Sample Input 13 :
2027
2026

Sample Output 13 :

Enter your PIN (4 digits) : 2027
Incorrect PIN.
Attempts left : 2

Enter your PIN (4 digits) : 2026

Login successful. PIN verified.

========================================================================

Sample Input 14 :
1111
2222
3333

Sample Output 14 :

Enter your PIN (4 digits) : 1111
Incorrect PIN.
Attempts left : 2

Enter your PIN (4 digits) : 2222
Incorrect PIN.
Attempts left : 1

Enter your PIN (4 digits) : 3333
Incorrect PIN.

Account temporarily locked.

========================================================================

Sample Input 15 :
9000
8000
7000

Sample Output 15 :

Enter your PIN (4 digits) : 9000
Incorrect PIN.
Attempts left : 2

Enter your PIN (4 digits) : 8000
Incorrect PIN.
Attempts left : 1

Enter your PIN (4 digits) : 7000
Incorrect PIN.

Account temporarily locked.

========================================================================
*/