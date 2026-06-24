/*
------------------------------------------------------------------------
Program Name : ATM Withdrawal Validator
Author       : MrLogeshrt
Day          : 2
Program No   : 10
Description  : Validates ATM withdrawal requests based on account balance and withdrawal amount.

Concepts Used:
- Variables
- Arithmetic Operators
- Relational Operators
- Logical Operators
- if-else Statements
- Input/Output Functions
------------------------------------------------------------------------
*/

/*
Constraints for ATM Withdrawal Validation:

1. Minimum Withdrawal Amount : ₹100
2. Maximum Withdrawal Amount : ₹20,000
3. Withdrawal Amount must be a multiple of ₹100
4. Account Balance must be sufficient for the requested withdrawal amount.
5. After withdrawal, the minimum account balance must remain ₹500.
*/


#include <stdio.h>

int main()
{
    float bank_balance = 0.0, amount = 0.0;

    // Obtain the account balance and amount to withdraw from that account
    printf("Enter your account balance : ");
    scanf("%f", &bank_balance);
    printf("Enter an amount to withdraw : ");
    scanf("%f", &amount);

    // Verify the constraints and update the transaction status
    if (bank_balance < 0 || amount < 0)
    {
        printf("\nInvalid account balance or amount.\n");
    }
    
    else
    { 
        if (amount < 100)
        {
            printf("\nTransaction Failed.\n");
            printf("Reason : The minimum withdrawal amount is Rs.100.\n");
        }

        else if (amount > 20000)
        {
            printf("\nTransaction Failed.\n");
            printf("Reason : The maximum withdrawal amount is Rs.20000.\n");
        }

        else if ((int)amount % 100 != 0)
        {
            printf("\nTransaction Failed.\n");
            printf("Reason : Withdrawal amount must be a multiple of Rs.100.\n");
        }

        else if (amount > bank_balance)
        {
            printf("\nTransaction Failed.\n");
            printf("Reason : Insufficient balance in your account.\n");
        }
        
        
        else if ((bank_balance - amount) < 500)
        {
            printf("\nTransaction Failed.\n");
            printf("Reason : The minimum account balance must remain Rs.500.\n");
        }
        
        else 
        {
            printf("\nTransaction Successful.\n");
            printf("Amount Withdrawn : Rs.%.2f\n", amount);
            printf("Remaining Balance : Rs.%.2f\n", (bank_balance - amount));
        }

    }

    return 0;

}


/*

Sample Input 1 :
-2500
3000

Sample Output 1 :
Enter your account balance : -2500
Enter an amount to withdraw : 3000

Invalid account balance or amount.

Sample Input 2 :
5000
3000

Sample Output 2 :
Enter your account balance : 5000
Enter an amount to withdraw : 3000

Transaction Successful.
Amount Withdrawn : Rs.3000.00
Remaining Balance : Rs.2000.00

Sample Input 3 :
5000
4500

Sample Output 3 :
Enter your account balance : 5000
Enter an amount to withdraw : 4500  

Transaction Successful.
Amount Withdrawn : Rs.4500.00
Remaining Balance : Rs.500.00

Sample Input 4 :
5000
7000

Sample Output 4 :
Enter your account balance : 5000
Enter an amount to withdraw : 7000

Transaction Failed.
Reason : Insufficient balance in your account.

Sample Input 5 :
5000
100

Sample Output 5 :
Enter your account balance : 5000
Enter an amount to withdraw : 100

Transaction Successful.
Amount Withdrawn : Rs.100.00
Remaining Balance : Rs.4900.00

Sample Input 6 :
25000
21000

Sample Output 6 :
Enter your account balance : 25000
Enter an amount to withdraw : 21000

Transaction Failed.
Reason : The maximum withdrawal amount is Rs.20000.

Sample Input 7 :
5000
550

Sample Output 7 :
Enter your account balance : 5000
Enter an amount to withdraw : 550

Transaction Failed.
Reason : Withdrawal amount must be a multiple of Rs.100.

Sample Input 8 :
5000
4600

Sample Output 8 :
Enter your account balance : 5000
Enter an amount to withdraw : 4600

Transaction Failed.
Reason : The minimum account balance must remain Rs.500.

*/