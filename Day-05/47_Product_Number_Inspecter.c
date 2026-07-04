/*
------------------------------------------------------------------------
Program Name : Product Number Inspector
Author       : MrLogeshrt
Day          : 5
Program No   : 7
Description  : Analyzes a product serial number by determining
               the total number of digits, highest digit,
               lowest digit, and displaying its digits in
               ascending and descending order.
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

int main()
{
    int product_num, count = 0;

    // Read and validate inputs from the user
    do
    {
        printf("\nEnter the product serial number : ");
        scanf("%d", &product_num);

        if (product_num <= 0)
        {
            printf("\nInvalid product number. It must be greater than zero.\n");
        }

    } while (product_num <= 0);

    int temp = product_num;
    int max = 0, min = 9;
    int digit;

    while(temp != 0)
    {
        digit = temp % 10;
        
        if (digit > max)
        {
            max = digit;
        }

        if (digit < min)
        {
            min = digit;
        }

        count++;

        temp /= 10;
    }

    // Display the results
    printf("\nProduct Number  : %d\n", product_num);
    printf("Digits Count    : %d\n", count);
    printf("Highest Digit   : %d\n", max);
    printf("Lowest Digit    : %d\n", min);
    printf("Ascending Order : \n");

    for (int i = 0; i <= 9; i++)
    {
        int temp = product_num;
        int digit = 0;

        while(temp > 0)
        {
            digit = temp % 10;
            
            if (digit == i)
            {
                printf("%d", digit);
            }

            temp /= 10;
        }

        if (i == 9)
        {
            printf("\n");
        }
    }

    printf("Descending Order : \n");
    
    for (int i = 9; i >= 0; i--)
    {
        int temp = product_num;
        int digit = 0;

        while(temp > 0)
        {
            digit = temp % 10;
            
            if (digit == i)
            {
                printf("%d", digit);
            }

            temp /= 10;
        }

        if (i == 0)
        {
            printf("\n");
        }
    }

    return 0;
}