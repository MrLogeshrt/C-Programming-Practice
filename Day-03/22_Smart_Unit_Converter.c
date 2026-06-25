/*
------------------------------------------------------------------------
Program Name : Smart Unit Converter
Author       : MrLogeshrt
Day          : 3
Program No   : 2
Description  : Performs various unit conversion operations based on user input.

Concepts Used:
- Variables
- Arithmetic Operators
- Switch Case Statements
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    double input, output;
    int choice;

    // Display the conversion menu
    printf("\n------ SMART UNIT CONVERTER ------\n");
    printf("\n*** Available Conversions ***\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Kilometer to Meter\n");
    printf("4. Meter to Kilometer\n");
    printf("5. Kilogram to Gram\n");
    printf("6. Gram to Kilogram\n");

    // Read user's conversion choice
    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    // Perform the selected conversion
    switch (choice)
    {
        case 1 :
        {
            printf("\nEnter temperature in Celsius : ");
            scanf("%lf", &input);

            output = (input * 9 / 5) + 32;
            printf("\nTemperature in Celsius : %.2lf", input);
            printf("\nTemperature in Fahrenheit : %.2lf\n", output);

            break;            
        }

        case 2 :
        {
            printf("\nEnter temperature in Fahrenheit : ");
            scanf("%lf", &input);

            output = (input - 32) * 5 / 9;
            printf("\nTemperature in Fahrenheit : %.2lf", input);
            printf("\nTemperature in Celsius : %.2lf\n", output);

            break;            
        }

        case 3 :
        {
            printf("\nEnter distance in kilometer : ");
            scanf("%lf", &input);

            // Validate that distance and weight values are non-negative
            if(input < 0)
            {
                printf("\nValue cannot be negative.\n");
            }
            
            else
            {
                output = input * 1000;
                printf("\nDistance in Kilometer : %.2lf", input);
                printf("\nDistance in Meter : %.2lf\n", output);
            }

            break;            
        }

        case 4 :
        {
            printf("\nEnter distance in meter : ");
            scanf("%lf", &input);

            // Validate that distance and weight values are non-negative
            if(input < 0)
            {
                printf("\nValue cannot be negative.\n");
            }
            
            else
            {
                output = input / 1000.0;
                printf("\nDistance in Meter : %.2lf", input);
                printf("\nDistance in Kilometer : %.2lf\n", output);
            }

            break;            
        }

        case 5 :
        {
            printf("\nEnter weight in kilogram : ");
            scanf("%lf", &input);

            // Validate that distance and weight values are non-negative
            if(input < 0)
            {
                printf("\nValue cannot be negative.\n");
            }
            
            else
            {
                output = input * 1000;
                printf("\nWeight in Kilogram : %.2lf", input);
                printf("\nWeight in Gram : %.2lf\n", output);
            }

            break;            
        }

        case 6 :
        {
            printf("\nEnter weight in gram : ");
            scanf("%lf", &input);

            // Validate that distance and weight values are non-negative
            if(input < 0)
            {
                printf("\nValue cannot be negative.\n");
            }
            
            else
            {
                output = input / 1000.0;
                printf("\nWeight in gram : %.2lf", input);
                printf("\nWeight in Kilogram : %.2lf\n", output);
            }

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
========================================================================
Sample Test Cases for Smart Unit Converter Program
========================================================================

NORMAL CASES
============

Sample Input 1 :
1
25

Sample Output 1 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 1
Enter temperature in Celsius : 25

Temperature in Celsius : 25.00
Temperature in Fahrenheit : 77.00

========================================================================

Sample Input 2 :
2
98.6

Sample Output 2 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 2
Enter temperature in Fahrenheit : 98.6

Temperature in Fahrenheit : 98.6
Temperature in Celsius : 37.00

========================================================================

Sample Input 3 :
3
5.5

Sample Output 3 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 3
Enter distance in kilometer : 5.5

Distance in Kilometer : 5.50
Distance in Meter : 5500.00

========================================================================

Sample Input 4 :
4
500

Sample Output 4 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 4
Enter distance in meter : 500

Distance in Meter : 500.00
Distance in Kilometer : 0.50

========================================================================

Sample Input 5 :
5
75

Sample Output 5 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 5
Enter weight in kilogram : 75

Weight in Kilogram : 75.00
Weight in Gram : 75000.00

========================================================================

Sample Input 6 :
6
500

Sample Output 6 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 6
Enter weight in gram : 500

Weight in gram : 500.00
Weight in Kilogram : 0.50

========================================================================

BOUNDARY CASES
==============

Sample Input 7 :
1
0

Sample Output 7 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 1
Enter temperature in Celsius : 0

Temperature in Celsius : 0.00
Temperature in Fahrenheit : 32.00

========================================================================

Sample Input 8 :
1
100

Sample Output 8 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 1
Enter temperature in Celsius : 100

Temperature in Celsius : 100.00
Temperature in Fahrenheit : 212.00

========================================================================

Sample Input 9 :
3
0

Sample Output 9 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 3
Enter distance in kilometer : 0

Distance in Kilometer : 0.00
Distance in Meter : 0.00

========================================================================

Sample Input 10 :
3
-5

Sample Output 10 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 3
Enter distance in kilometer : -5

Value cannot be negative.

========================================================================

Sample Input 11 :
5
0

Sample Output 11 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 5
Enter weight in kilogram : 0

Weight in Kilogram : 0.00
Weight in Gram : 0.00

========================================================================

Sample Input 12 :
6
-100

Sample Output 12 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 6
Enter weight in gram : -100

Value cannot be negative.

========================================================================

INVALID CHOICE CASES
====================

Sample Input 13 :
10

Sample Output 13 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 10

Invalid Choice.

========================================================================

Sample Input 14 :
0

Sample Output 14 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : 0

Invalid Choice.

========================================================================

Sample Input 15 :
-1

Sample Output 15 :

------ SMART UNIT CONVERTER ------

*** Available Conversions ***
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometer to Meter
4. Meter to Kilometer
5. Kilogram to Gram
6. Gram to Kilogram

Enter your choice : -1

Invalid Choice.

========================================================================
*/