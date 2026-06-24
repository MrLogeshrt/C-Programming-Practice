/*
------------------------------------------------------------------------
Program Name : Largest of Three Numbers
Author       : MrLogeshrt
Day          : 2
Program No   : 2
Description  : Check and display the largest of three integer inputs given by the user.

Concepts Used:
- Variables
- Nested if Statements
- Relational Operators
- Logical Operators (&&)
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int a, b, c;

    // Obtain three integer inputs from the user
    printf("Enter a number 1 : ");
    scanf("%d", &a);
    printf("Enter a number 2 : ");
    scanf("%d", &b);
    printf("Enter a number 3 : ");
    scanf("%d", &c);

    // Check the greatest of three numbers using nested if conditions
    if (a == b && a == c && b == c)
    {
        printf("\nAll the three values are equal.\n");
    }
    
    else if (a > b)
    {
        if (a > c)
        {
            printf("\nAmong the three numbers %d, %d and %d, the greatest number is %d.\n", a, b, c, a);
        }

        else if (a < c)
        {
            printf("\nAmong the three numbers %d, %d and %d, the greatest number is %d.\n", a, b, c, c);
        }

        else 
        {
            printf("\n%d and %d are equal and are the largest number.\n", a, c);
        }
    }

    else if (b > a)
    {
        if (b > c)
        {
            printf("\nAmong the three numbers %d, %d and %d, the greatest number is %d.\n", a, b, c, b);
        }
        
        else if (b < c)
        {
            printf("\nAmong the three numbers %d, %d and %d, the greatest number is %d.\n", a, b, c, c);
        }

        else 
        {
            printf("\n%d and %d are equal and are the largest number.\n", b, c);
        }
    }

    else 
    {
        printf("\n%d and %d are equal and are the largest number.\n", a, b);
    }

    return 0;

}


/*
Sample Input 1 :
1
1
1

Sample Output 1 :
Enter a number 1 : 1
Enter a number 2 : 1
Enter a number 3 : 1

All the three values are equal.

Sample Input 2 :
2
2
1

Sample Output 2 :
Enter a number 1 : 2
Enter a number 2 : 2
Enter a number 3 : 1

2 and 2 are equal and are the largest number.

Sample Input 3 :
1
3
2

Sample Output 3 :
Enter a number 1 : 1
Enter a number 2 : 3
Enter a number 3 : 2

Among the three numbers 1, 3 and 2, the greatest number is 3.

Sample Input 4 :
1
2
3

Sample Output 4 :
Enter a number 1 : 1
Enter a number 2 : 2
Enter a number 3 : 3

Among the three numbers 1, 2 and 3, the greatest number is 3.

Sample Input 5 :
2
2
1

Sample Output 5 :
Enter a number 1 : 2
Enter a number 2 : 2
Enter a number 3 : 1

2 and 2 are equal and are the largest number.

Sample Input 6 :
5
6
6

Sample Output 6 :
Enter a number 1 : 5
Enter a number 2 : 6
Enter a number 3 : 6

6 and 6 are equal and are the largest number.

Sample Input 7 :
5
2
5

Sample Output 7 :
Enter a number 1 : 5
Enter a number 2 : 2
Enter a number 3 : 5

5 and 5 are equal and are the largest number.
*/