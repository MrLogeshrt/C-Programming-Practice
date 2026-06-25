/*
------------------------------------------------------------------------
Program Name : Product Billing System
Author       : MrLogeshrt
Day          : 3
Program No   : 10
Description  : Displays product information and calculates the total bill based on the selected product and quantity.

Concepts Used:
- Variables
- Switch Case Statements
- Input/Output Functions
- Menu-Driven Programming
- Decision Making
------------------------------------------------------------------------
*/


#include <stdio.h>

int main(void)
{
    int choice;

    printf("========= PRODUCT CATALOG =========\n");
    printf("1. Laptop\n");
    printf("2. Mobile\n");
    printf("3. Headphones\n");
    printf("4. Smart Watch\n");
    printf("5. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            int price = 55000, quantity = 0, total_price = 0;

            printf("Product Name : Dell Inspiron 15\n");
            printf("Price        : Rs.%d\n", price);
            printf("Warranty     : 2 Years\n");
            printf("Availability : In Stock\n");

            printf("\nEnter Quantity: ");
            scanf("%d", &quantity);
            
            if (quantity > 0) 
            {
                total_price = quantity * price;

                printf("Quantity     : %d\n", quantity);
                printf("Total Cost   : Rs.%d\n", total_price);
            }

            else
            {
                printf("\nQuantity must be greater than zero.\n");
            }

            break;
        }
        case 2:
        {
            int price = 22000, quantity = 0, total_price = 0;

            printf("Product Name : Samsung Galaxy M35\n");
            printf("Price        : Rs.%d\n", price);
            printf("Warranty     : 1 Year\n");
            printf("Availability : In Stock\n");

            printf("Enter Quantity: ");
            scanf("%d", &quantity);
            
            if (quantity > 0) 
            {
                total_price = quantity * price;
                
                printf("Quantity     : %d\n", quantity);
                printf("Total Cost   : Rs.%d\n", total_price);
            }

            else
            {
                printf("\nQuantity must be greater than zero.\n");
            }

            break;
        }
        case 3:
        {
            int price = 4500, quantity = 0, total_price = 0;

            printf("Product Name : Sony WH-CH520\n");
            printf("Price        : Rs.%d\n", price);
            printf("Warranty     : 1 Year\n");
            printf("Availability : Limited Stock\n");

            printf("Enter Quantity: ");
            scanf("%d", &quantity);
            
            if (quantity > 0) 
            {
                total_price = quantity * price;
                printf("Quantity     : %d\n", quantity);
                printf("Total Cost   : Rs.%d\n", total_price);
            }

            else
            {
                printf("\nQuantity must be greater than zero.\n");
            }

            break;
        }
        case 4:
        {
            int price = 3500, quantity = 0, total_price = 0;

            printf("Product Name : Noise ColorFit Pro\n");
            printf("Price        : Rs.%d\n", price);
            printf("Warranty     : 1 Year\n");
            printf("Availability : Out of Stock\n");

            printf("Enter Quantity: ");
            scanf("%d", &quantity);
            
            if (quantity > 0) 
            {
                total_price = quantity * price;
                printf("Quantity     : %d\n", quantity);
                printf("Total Cost   : Rs.%d\n", total_price);
            }

            else
            {
                printf("\nQuantity must be greater than zero.\n");
            }

            break;
        }
        case 5:
        {
            printf("\nExiting Product Catalog.\n");
            break;
        }
        default:
        {
            printf("\nInvalid Choice. Please select a valid option.\n");
            break;
        }
    }

    return 0;
}


/*
========================================================================

Sample Input 1 :
1
2

Sample Output 1 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 1
Product Name : Dell Inspiron 15
Price        : Rs.55000
Warranty     : 2 Years
Availability : In Stock

Enter Quantity: 2
Quantity     : 2
Total Cost   : Rs.110000

========================================================================

Sample Input 2 :
2
1

Sample Output 2 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 2
Product Name : Samsung Galaxy M35
Price        : Rs.22000
Warranty     : 1 Year
Availability : In Stock

Enter Quantity: 1
Quantity     : 1
Total Cost   : Rs.22000

========================================================================

Sample Input 3 :
3
3

Sample Output 3 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 3
Product Name : Sony WH-CH520
Price        : Rs.4500
Warranty     : 1 Year
Availability : Limited Stock

Enter Quantity: 3
Quantity     : 3
Total Cost   : Rs.13500

========================================================================

Sample Input 4 :
4
5

Sample Output 4 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 4
Product Name : Noise ColorFit Pro
Price        : Rs.3500
Warranty     : 1 Year
Availability : Out of Stock

Enter Quantity: 5
Quantity     : 5
Total Cost   : Rs.17500

========================================================================

Sample Input 5 :
5

Sample Output 5 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 5

Exiting Product Catalog.

========================================================================

Sample Input 6 :
1
1

Sample Output 6 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 1
Product Name : Dell Inspiron 15
Price        : Rs.55000
Warranty     : 2 Years
Availability : In Stock

Enter Quantity: 1
Quantity     : 1
Total Cost   : Rs.55000

========================================================================

Sample Input 7 :
2
100

Sample Output 7 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 2
Product Name : Samsung Galaxy M35
Price        : Rs.22000
Warranty     : 1 Year
Availability : In Stock

Enter Quantity: 100
Quantity     : 100
Total Cost   : Rs.2200000

========================================================================

Sample Input 8 :
3
1

Sample Output 8 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 3
Product Name : Sony WH-CH520
Price        : Rs.4500
Warranty     : 1 Year
Availability : Limited Stock

Enter Quantity: 1
Quantity     : 1
Total Cost   : Rs.4500

========================================================================

Sample Input 9 :
1
-5

Sample Output 9 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 1
Product Name : Dell Inspiron 15
Price        : Rs.55000
Warranty     : 2 Years
Availability : In Stock

Enter Quantity: -5

Quantity must be greater than zero.

========================================================================

Sample Input 10 :
2
-1

Sample Output 10 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 2
Product Name : Samsung Galaxy M35
Price        : Rs.22000
Warranty     : 1 Year
Availability : In Stock

Enter Quantity: -1

Quantity must be greater than zero.

========================================================================

Sample Input 11 :
4
-10

Sample Output 11 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 4
Product Name : Noise ColorFit Pro
Price        : Rs.3500
Warranty     : 1 Year
Availability : Out of Stock

Enter Quantity: -10

Quantity must be greater than zero.

========================================================================

Sample Input 12 :
6

Sample Output 12 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 6

Invalid Choice. Please select a valid option.

========================================================================

Sample Input 13 :
0

Sample Output 13 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 0

Invalid Choice. Please select a valid option.

========================================================================

Sample Input 14 :
-1

Sample Output 14 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: -1

Invalid Choice. Please select a valid option.

========================================================================

Sample Input 15 :
10

Sample Output 15 :

========= PRODUCT CATALOG =========
1. Laptop
2. Mobile
3. Headphones
4. Smart Watch
5. Exit

Enter your choice: 10

Invalid Choice. Please select a valid option.

========================================================================
*/