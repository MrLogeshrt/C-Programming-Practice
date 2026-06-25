/*
------------------------------------------------------------------------
Program Name : Scientific Calculator
Author       : MrLogeshrt
Day          : 3
Program No   : 1
Description  : Performs various scientific and arithmetic calculations based on user-selected operations.

Concepts Used:
- Variables
- Arithmetic Operators
- Switch Case Statements
- Conditional Statements
- math.h Library Functions
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main()
{
    int choice;
    double num1, num2, rad;

    // Read inputs from the user
    printf("\n------ SCIENTIFIC CALCULATOR ------\n");
    printf("\n*** Operations ***\n");
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Square Root\n");
    printf("8. Log base 10\n");
    printf("9. Natural log\n");
    printf("10. Sine function\n");
    printf("11. Cosine function\n");
    printf("12. Tangent function\n");
    printf("13. Exit\n");

    // Read the user's menu choice
    printf("\nEnter your choice of operator : ");
    scanf("%d", &choice);

    // Perform the selected operation
    switch(choice) 
    {
        case 1 :
        {
            printf("Enter the number 1 : ");
            scanf("%lf", &num1);
            printf("Enter the number 2 : ");
            scanf("%lf", &num2);

            printf("\nNumber 1 : %.2lf", num1);
            printf("\nNumber 2 : %.2lf", num2);
            printf("\nOperation performed : Addition");
            printf("\nResult : %.2lf\n", (num1 + num2));

            break;
        }

        case 2 :
        {
            printf("Enter the number 1 : ");
            scanf("%lf", &num1);
            printf("Enter the number 2 : ");
            scanf("%lf", &num2);

            printf("\nNumber 1 : %.2lf", num1);
            printf("\nNumber 2 : %.2lf", num2);
            printf("\nOperation performed : Subtraction");
            printf("\nResult : %.2lf\n", (num1 - num2));

            break;
        }

        case 3 :
        {
            printf("Enter the number : ");
            scanf("%lf", &num1);
            printf("Enter the number multiplier : ");
            scanf("%lf", &num2);

            printf("\nNumber : %.2lf", num1);
            printf("\nMultiplier : %.2lf", num2);
            printf("\nOperation performed : Multiplication");
            printf("\nResult : %.2lf\n", (num1 * num2));

            break;
        }

        case 4 :
        {
            printf("Enter the dividend : ");
            scanf("%lf", &num1);
            printf("Enter the divisor : ");
            scanf("%lf", &num2);

            if (num2 != 0.0)
            {
                printf("\nDividend : %.2lf", num1);
                printf("\nDivisor : %.2lf", num2);
                printf("\nOperation performed : Division");
                printf("\nResult : %.2lf\n",  (num1 / num2));

            }

            else
            {
                //Display the division by zero error
                printf("\nDivision by zero is not possible.\n");

            }

            break;
        }

        case 5 :
        {
            printf("Enter the number : ");
            scanf("%lf", &num1);
            printf("Enter the modulo : ");
            scanf("%lf", &num2);

            if (num2 != 0.0)
            {
                printf("\nNumber : %.2lf", num1);
                printf("\nModulo : %.2lf", num2);
                printf("\nOperation performed : Modulus");
                printf("\nResult : %d\n", ((int)num1 % (int)num2));

            }

            else
            {
                //Display the modulus by zero error
                printf("\nModulus by zero is not possible.\n");
            }

            break;
        }

        case 6 :
        {
            printf("Enter the base value : ");
            scanf("%lf", &num1);
            printf("Enter the power value : ");
            scanf("%lf", &num2);

            printf("\nBase : %.2lf", num1);
            printf("\nPower : %.2lf", num2);
            printf("\nOperation performed : Power");
            printf("\nResult : %.2lf\n", pow(num1, num2));

            break;
        }

        case 7 :
        {
            printf("Enter the number : ");
            scanf("%lf", &num1);
            
            if (num1 >= 0)
            {
                printf("\nNumber : %.2lf", num1);
                printf("\nOperation performed : Square Root");
                printf("\nResult : %.2lf\n", sqrt(num1));
            }

            else 
            {
                printf("Square root of negative number is not possible.");
            }

            break;
        }

        case 8 :
        {
            printf("Enter the number : ");
            scanf("%lf", &num1);

            if (num1 > 0)
            {
                printf("\nNumber : %.2lf", num1);
                printf("\nOperation performed : Log base 10");
                printf("\nResult : %.2lf\n", log10(num1));
            }

            else
            {
                printf("Logarithm is defined only for positive numbers.\n");
            }
            
            break;
        }

        case 9 :
        {
            printf("Enter the number : ");
            scanf("%lf", &num1);

            if (num1 > 0)
            {
                printf("\nNumber : %.2lf", num1);
                printf("\nOperation performed : Natural log");
                printf("\nResult : %.2lf\n", log(num1));
            }

            else
            {
                printf("Logarithm is defined only for positive numbers.\n");
            }

            break;
        }

        case 10:
        {
            printf("Enter the angle in degree : ");
            scanf("%lf", &num1);

            rad = num1 * (PI / 180.0);

            printf("\nAngle in Degree : %.2lf", num1);
            printf("\nAngle in Radian : %.4lf", rad);
            printf("\nOperation performed : Sine function");
            printf("\nResult : %.4lf\n", sin(rad));

            break;
        }

        case 11:
        {
            printf("Enter the angle in degree : ");
            scanf("%lf", &num1);

            rad = num1 * (PI / 180.0);

            printf("\nAngle in Degree : %.2lf", num1);
            printf("\nAngle in Radian : %.4lf", rad);
            printf("\nOperation performed : Cosine function");
            printf("\nResult : %.4lf\n", cos(rad));

            break;
        }

        case 12:
        {
            printf("Enter the angle in degree : ");
            scanf("%lf", &num1);

            rad = num1 * (PI / 180.0);

            printf("\nAngle in Degree : %.2lf", num1);
            printf("\nAngle in Radian : %.4lf", rad);
            printf("\nOperation performed : Tangent function");
            printf("\nResult : %.4lf\n", tan(rad));

            break;
        }

        case 13 :
        {
            //Display the exit message
            printf("\nExit successful.\n");

            break;
        }

        default :
        {
            printf("\nInvalid Choice.\n");

            break;
        }
    }

    return 0;

}


/*
========================================================================
Sample Test Cases for Scientific Calculator Program
========================================================================

Sample Input 1 :
1
10
20

Sample Output 1 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 1
Enter the number 1 : 10
Enter the number 2 : 20

Number 1 : 10.00
Number 2 : 20.00
Operation performed : Addition
Result : 30.00

========================================================================

Sample Input 2 :
2
50
15

Sample Output 2 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 2
Enter the number 1 : 50
Enter the number 2 : 15

Number 1 : 50.00
Number 2 : 15.00
Operation performed : Subtraction
Result : 35.00

========================================================================

Sample Input 3 :
3
12
5

Sample Output 3 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 3
Enter the number : 12
Enter the number multiplier : 5

Number : 12.00
Multiplier : 5.00
Operation performed : Multiplication
Result : 60.00

========================================================================

Sample Input 4 :
4
100
4

Sample Output 4 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 4
Enter the dividend : 100
Enter the divisor : 4

Dividend : 100.00
Divisor : 4.00
Operation performed : Division
Result : 25.00

========================================================================

Sample Input 5 :
4
100
0

Sample Output 5 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 4
Enter the dividend : 100
Enter the divisor : 0

Division by zero is not possible.

========================================================================

Sample Input 6 :
5
25
4

Sample Output 6 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 5
Enter the number : 25
Enter the modulo : 4

Number : 25.00
Modulo : 4.00
Operation performed : Modulus
Result : 1

========================================================================

Sample Input 7 :
5
25
0

Sample Output 7 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 5
Enter the number : 25
Enter the modulo : 0

Modulus by zero is not possible.

========================================================================

Sample Input 8 :
6
2
8

Sample Output 8 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 6
Enter the base value : 2
Enter the power value : 8

Base : 2.00
Power : 8.00
Operation performed : Power
Result : 256.00

========================================================================

Sample Input 9 :
7
81

Sample Output 9 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 7
Enter the number : 81

Number : 81.00
Operation performed : Square Root
Result : 9.00

========================================================================

Sample Input 10 :
7
-16

Sample Output 10 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 7
Enter the number : -16

Square root of negative number is not possible.

========================================================================

Sample Input 11 :
8
1000

Sample Output 11 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 8
Enter the number : 1000

Number : 1000.00
Operation performed : Log base 10
Result : 3.00

========================================================================

Sample Input 12 :
8
-5

Sample Output 12 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 8
Enter the number : -5

Logarithm is defined only for positive numbers.

========================================================================

Sample Input 13 :
9
2.718281828

Sample Output 13 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 9
Enter the number : 2.718281828

Number : 2.72
Operation performed : Natural log
Result : 1.00

========================================================================

Sample Input 14 :
9
0

Sample Output 14 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 9
Enter the number : 0

Logarithm is defined only for positive numbers.

========================================================================

Sample Input 15 :
10
30

Sample Output 15 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 10
Enter the angle in degree : 30

Angle in Degree : 30.00
Angle in Radian : 0.5236
Operation performed : Sine function
Result : 0.5000

========================================================================

Sample Input 16 :
11
60

Sample Output 16 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 11
Enter the angle in degree : 60

Angle in Degree : 60.00
Angle in Radian : 1.0472
Operation performed : Cosine function
Result : 0.5000

========================================================================

Sample Input 17 :
12
45

Sample Output 17 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 12
Enter the angle in degree : 45

Angle in Degree : 45.00
Angle in Radian : 0.7854
Operation performed : Tangent function
Result : 1.0000

========================================================================

Sample Input 18 :
13

Sample Output 18 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 13

Exit successful.

========================================================================

Sample Input 19 :
99

Sample Output 19 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 99

Invalid Choice.

========================================================================

Sample Input 20 :
1
-5
-10

Sample Output 20 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 1
Enter the number 1 : -5
Enter the number 2 : -10

Number 1 : -5.00
Number 2 : -10.00
Operation performed : Addition
Result : -15.00

========================================================================

Sample Input 21 :
2
100
100

Sample Output 21 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 2
Enter the number 1 : 100
Enter the number 2 : 100

Number 1 : 100.00
Number 2 : 100.00
Operation performed : Subtraction
Result : 0.00

========================================================================

Sample Input 22 :
3
0
50

Sample Output 22 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 3
Enter the number : 0
Enter the number multiplier : 50

Number : 0.00
Multiplier : 50.00
Operation performed : Multiplication
Result : 0.00

========================================================================

Sample Input 23 :
4
7.5
2.5

Sample Output 23 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 4
Enter the dividend : 7.5
Enter the divisor : 2.5

Dividend : 7.50
Divisor : 2.50
Operation performed : Division
Result : 3.00

========================================================================

Sample Input 24 :
6
10
3

Sample Output 24 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 6
Enter the base value : 10
Enter the power value : 3

Base : 10.00
Power : 3.00
Operation performed : Power
Result : 1000.00

========================================================================

Sample Input 25 :
7
0

Sample Output 25 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 7
Enter the number : 0

Number : 0.00
Operation performed : Square Root
Result : 0.00

========================================================================

Sample Input 26 :
8
100

Sample Output 26 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 8
Enter the number : 100

Number : 100.00
Operation performed : Log base 10
Result : 2.00

========================================================================

Sample Input 27 :
9
1

Sample Output 27 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 9
Enter the number : 1

Number : 1.00
Operation performed : Natural log
Result : 0.00

========================================================================

Sample Input 28 :
10
0

Sample Output 28 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 10
Enter the angle in degree : 0

Angle in Degree : 0.00
Angle in Radian : 0.0000
Operation performed : Sine function
Result : 0.0000

========================================================================

Sample Input 29 :
11
0

Sample Output 29 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 11
Enter the angle in degree : 0

Angle in Degree : 0.00
Angle in Radian : 0.0000
Operation performed : Cosine function
Result : 1.0000

========================================================================

Sample Input 30 :
12
90

Sample Output 30 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 12
Enter the angle in degree : 90

Angle in Degree : 90.00
Angle in Radian : 1.5708
Operation performed : Tangent function
Result : 1.633124e+16

========================================================================

Sample Input 31 :
0

Sample Output 31 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 0

Invalid Choice.

========================================================================

Sample Input 32 :
-1

Sample Output 32 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : -1

Invalid Choice.

========================================================================

Sample Input 33 :
1
0.5
0.5

Sample Output 33 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 1
Enter the number 1 : 0.5
Enter the number 2 : 0.5

Number 1 : 0.50
Number 2 : 0.50
Operation performed : Addition
Result : 1.00

========================================================================

Sample Input 34 :
6
2
0.5

Sample Output 34 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 6
Enter the base value : 2
Enter the power value : 0.5

Base : 2.00
Power : 0.50
Operation performed : Power
Result : 1.41

========================================================================

Sample Input 35 :
10
180

Sample Output 35 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 10
Enter the angle in degree : 180

Angle in Degree : 180.00
Angle in Radian : 3.1416
Operation performed : Sine function
Result : 0.0000

========================================================================

Sample Input 36 :
11
90

Sample Output 36 :

------ SCIENTIFIC CALCULATOR ------

*** Operations ***

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Log base 10
9. Natural log
10. Sine function
11. Cosine function
12. Tangent function
13. Exit

Enter your choice of operator : 11
Enter the angle in degree : 90

Angle in Degree : 90.00
Angle in Radian : 1.5708
Operation performed : Cosine function
Result : 0.0000

========================================================================
*/