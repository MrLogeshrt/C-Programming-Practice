/*
------------------------------------------------------------------------
Program Name : Area Calculator
Author       : MrLogeshrt
Day          : 3
Program No   : 7
Description  : Calculates the area of a circle, rectangle, square, or triangle
               based on user input and displays the result.

Concepts Used:
- Variables
- Arithmetic Operators
- Switch Case Statements
- Input/Output Functions
- Menu-Driven Programming
- Decision Making
- Constants
------------------------------------------------------------------------
*/


#include <stdio.h>

#define PI 3.14159265358979323846

int main()
{
    int choice;
    double area;

    printf("\nChoose the shape to calculate area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("4. Triangle\n");

    printf("\nChoice: ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1: 
        {
            double radius;

            printf("\nEnter Radius : ");
            scanf("%lf", &radius);
            
            if (radius <= 0)
            {
                printf("\nInvalid Input.\n");
            }

            else
            {
                area = PI * radius * radius;

                printf("\nArea of Circle : %.2f\n", area);
            }
            
            break;
        }

        case 2: 
        {
            double length, breadth;

            printf("\nEnter Length : ");
            scanf("%lf", &length);
            
            printf("\nEnter Breadth : ");
            scanf("%lf", &breadth) ;

            if (length <= 0 || breadth <= 0)
            {
                printf("\nInvalid Input.\n");
            }

            else
            {
                area = length * breadth;

                printf("\nArea of Rectangle : %.2f\n", area);
            }

            break;
        }   

        case 3: 
        {
            double side;

            printf("\nEnter Side : ");
            scanf("%lf", &side);

            if (side <= 0)
            {
                printf("\nInvalid Input.\n");
            }

            else
            {
                area = side * side;

                printf("\nArea of Square : %.2f\n", area);
            }
            
            break;
        }

        case 4: 
        {
            double base, height;

            printf("\nEnter Base : ");
            scanf("%lf", &base);

            printf("\nEnter Height : ");
            scanf("%lf", &height);

            if (base <= 0 || height <= 0)
            {
                printf("\nInvalid Input.\n");
            }

            else
            {
                area = 0.5 * base * height;

                printf("\nArea of Triangle : %.2f\n", area);
            }

            break;
        }

        default:
            printf("\nInvalid choice\n");
            break;
    }

    return 0;
}


/*
========================================================================

Sample Input 1 :
1
5

Sample Output 1 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 1

Enter Radius : 5

Area of Circle : 78.54

========================================================================

Sample Input 2 :
2
5
3

Sample Output 2 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 2

Enter Length : 5

Enter Breadth = 3

Area of Rectangle : 15.00

========================================================================

Sample Input 3 :
3
4

Sample Output 3 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 3

Enter Side : 4

Area of Square : 16.00

========================================================================

Sample Input 4 :
4
6
2

Sample Output 4 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 4

Enter Base : 6

Enter Height : 2

Area of Triangle : 6.00

========================================================================

Sample Input 5 :
1
0.5

Sample Output 5 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 1

Enter Radius : 0.5

Area of Circle : 0.79

========================================================================

Sample Input 6 :
3
1

Sample Output 6 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 3

Enter Side : 1

Area of Square : 1.00

========================================================================

Sample Input 7 :
2
10
10

Sample Output 7 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 2

Enter Length : 10

Enter Breadth = 10

Area of Rectangle : 100.00

========================================================================

Sample Input 8 :
1
-5

Sample Output 8 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 1

Enter Radius : -5

Invalid Input.

========================================================================

Sample Input 9 :
2
-10
5

Sample Output 9 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 2

Enter Length : -10

Enter Breadth = 5

Invalid Input.

========================================================================

Sample Input 10 :
3
0

Sample Output 10 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 3

Enter Side : 0

Invalid Input.

========================================================================

Sample Input 11 :
4
-6
2

Sample Output 11 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 4

Enter Base : -6

Enter Height : 2

Invalid Input.

========================================================================

Sample Input 12 :
5

Sample Output 12 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 5

Invalid choice

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 0

Invalid choice

========================================================================

Sample Input 14 :
-1

Sample Output 14 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: -1

Invalid choice

========================================================================

Sample Input 15 :
10

Sample Output 15 :

Choose the shape to calculate area:
1. Circle
2. Rectangle
3. Square
4. Triangle

Choice: 10

Invalid choice

========================================================================
*/