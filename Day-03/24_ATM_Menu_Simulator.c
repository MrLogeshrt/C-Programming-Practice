/*
------------------------------------------------------------------------
Program Name : ATM Menu Simulator
Author       : MrLogeshrt
Day          : 3
Program No   : 4
Description  : Simulates basic ATM operations such as balance inquiry, cash deposit, cash withdrawal, and exit functionality with transaction validation rules.

Concepts Used:
- Variables
- Arithmetic Operators
- Relational Operators
- Logical Operators
- Switch Case Statements
- if-else Statements
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int choice;
    double amount, balance = 5000.0;

    // Display ATM menu options
    printf("\n______ MENU ______\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1 :
        {
            // Display current account balance
            printf("\nYour Account Balance : %.2lf\n", balance);
            break;
        }

        case 2 :
        {
            // Accept deposit amount from user
            printf("\nEnter amount to deposit : ");
            scanf("%lf", &amount);

            // Validate deposit amount
            if (amount <=  0)
            {
                printf("\nInvalid Amount.\n");
            }

            else 
            {
                // Update account balance after successful deposit
                balance += amount;
                printf("\nStatus : Successful\n");
                printf("Available Balance : %.2lf\n", balance);
            }

            break;
        }

        case 3 :
        {
            // Accept withdrawal amount from user
            printf("\nEnter amount to withdraw : ");
            scanf("%lf", &amount);

            // Validate withdrawal rules
            if (amount <= 0)
            {
                printf("\nTransaction Failed.\n");
                printf("Reason : Invalid Amount.\n");
            }

            else if (amount < 100)
            {
                printf("\nTransaction Failed.\n");
                printf("Reason : Minimum withdrawal limit is 100.\n");
            }

            else if (amount > 20000)
            {
                printf("\nTransaction Failed.\n");
                printf("Reason : Maximum withdrawal limit is 20000.\n");
            }

            else if ((int)amount % 100 != 0)
            {
                printf("\nTransaction Failed.\n");
                printf("Reason : Withdrawal amount must be multiple of 100.\n");
            }

            // Ensure minimum balance is maintained
            else if ((balance - amount) < 500)
            {
                printf("\nTransaction Failed.\n");
                printf("Reason : The minimum account balance must remain Rs.500.\n");
            }

            else if (balance < amount)
            {
                printf("\nTransaction Failed.\n");
                printf("Reason : Insufficient account balance.\n");
            }

            else
            {
                // Process successful withdrawal
                printf("\nWithdrawal Successful.\n");
                printf("Amount withdrawn : %.2lf\n", amount);
                balance -= amount;
                printf("Available balance : %.2lf\n", balance);
            }

            break;
        }

        case 4 :
        {
            // Terminate ATM session
            printf("\nExit Complete.\n");
            break;
        }

        default :
        {
            printf("\nInvalid Choice.\n");
        }

    }

    return 0;

}


/*

Sample Input 1 :
1

Sample Output 1 :

Your Account Balance : 5000.00

---

Sample Input 2 :

2
1000

Sample Output 2 :

Status : Successful
Available Balance : 6000.00

---

Sample Input 3 :

2
-500

Sample Output 3 :

Invalid Amount.

---

Sample Input 4 :

3
1000

Sample Output 4 :

Withdrawal Successfull.
Amount withdrawed : 1000.00
Available balance : 4000.00

---

Sample Input 5 :

3
-100

Sample Output 5 :

Transaction Failed.
Reason : Invalid Amount.

---

Sample Input 6 :

3
50

Sample Output 6 :

Transaction Failed.
Reason : Minimum withdrwal limit is 100.

---

Sample Input 7 :

3
20500

Sample Output 7 :

Transaction Failed.
Reason : Maximum withdrawal limit is 20000.

---

Sample Input 8 :

3
1250

Sample Output 8 :

Transaction Failed.
Reason : Withdrawal amount must be multiple of 100.

---

Sample Input 9 :

3
4700

Sample Output 9 :

Transaction Failed.
Reason : The minimum account balance must remain Rs.500.

---

Sample Input 10 :

3
6000

Sample Output 10 :

Transaction Failed.
Reason : Insufficient account balance.

---

Sample Input 11 :

4

Sample Output 11 :

Exit Complete.

---

Sample Input 12 :

99

Sample Output 12 :

Invalid Choice.

*/