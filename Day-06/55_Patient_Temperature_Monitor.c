/*
------------------------------------------------------------------------
Program Name : Patient Temperature Analysis Report
Author       : MrLogeshrt
Day          : 6
Program No   : 5
Description  : Monitors patient body temperatures by
               calculating the highest temperature,
               lowest temperature, average temperature,
               and counting normal, fever,
               and critical patients.
------------------------------------------------------------------------

Concepts Used:
- Variables
- Arrays
- for Loop
- Relational Operators
- Conditional Statements
- Running Total
- Maximum and Minimum Search
- Average Calculation
- Input Validation
- Input/Output Functions
------------------------------------------------------------------------

Constraints:

1. Patient count must be between 1 and 100.
2. Temperature must be between 30.0°C and 45.0°C.
3. Average Temperature = Total Temperature / Patient Count.
4. Normal Patient   : Temperature ≤ 37.5°C
5. Fever Patient    : Temperature > 37.5°C and ≤ 39.0°C
6. Critical Patient : Temperature > 39.0°C
------------------------------------------------------------------------

*/



#include <stdio.h>

int main()
{
    int n;
    float high_temp, low_temp;
    int fever_count = 0, normal_count = 0, critical_count = 0;
    float average_temp = 0.0f, total = 0.0f;

    do
    {
        printf("\nEnter Patients Count : ");
        scanf("%d", &n);

        if(n <= 0)
        {
            printf("\nInvalid Input. Count must be positive.\n");
        }

        else if (n > 100)
        {
            printf("\nInvalid Input. Count must be less than 100.\n");
        }
    } while (n <= 0 || n > 100);

    float patient[n];

    // Read patient temperatures and generate health statistics
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter temperature of Patient %d in Celsius : ", i+1);
        scanf("%f", &patient[i]);

        if (patient[i] < 30.0 || patient[i] > 45.0)
        {
            printf("\nTemperature range should be 30*C to 45*C.\n");
            i--;
            continue;
        }

        else
        {
            if(i == 0)
            {
                high_temp = patient[i];
                low_temp = patient[i];
            }

            else
            {
                if(high_temp < patient[i])
                {
                    high_temp = patient[i];
                }

                if(low_temp > patient[i])
                {
                    low_temp = patient[i];
                }
            }
        }

        if(patient[i] > 39.0)
        {
            critical_count++;
        }

        else if (patient[i] > 37.5 && patient[i] <= 39.0)
        {
            fever_count++;
        }

        else
        {
            normal_count++;
        }

        total += patient[i];
    }

    average_temp = total / n;
    
    printf("\n=======================================================\n");
    printf("\tPatient Temperature Monitor\n");
    printf("=======================================================\n");
    printf("Patients Count                  : %d\n", n);
    printf("Average Patient Temperature     : %.2f\n", average_temp);
    printf("Highest Temperature             : %.2f\n", high_temp);
    printf("Lowest Temperature              : %.2f\n", low_temp);
    printf("\nNormal Patient Count            : %d\n", normal_count);
    printf("Fever Patient Count             : %d\n", fever_count);
    printf("Critical Patient Count          : %d\n", critical_count);
    printf("=======================================================\n");

    return 0;
    
}


/*
========================================================================

Sample Input 1 :
5
37.0
38.5
39.5
36.5
40.0

Sample Output 1 :

Enter Patients Count : 5

Enter temperature of Patient 1 in Celsius : 37.0
Enter temperature of Patient 2 in Celsius : 38.5
Enter temperature of Patient 3 in Celsius : 39.5
Enter temperature of Patient 4 in Celsius : 36.5
Enter temperature of Patient 5 in Celsius : 40.0

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 5
Average Patient Temperature     : 38.30
Highest Temperature             : 40.00
Lowest Temperature              : 36.50

Normal Patient Count            : 2
Fever Patient Count             : 1
Critical Patient Count          : 2
=======================================================

========================================================================

Sample Input 2 :
3
37.5
37.5
37.5

Sample Output 2 :

Enter Patients Count : 3

Enter temperature of Patient 1 in Celsius : 37.5
Enter temperature of Patient 2 in Celsius : 37.5
Enter temperature of Patient 3 in Celsius : 37.5

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 3
Average Patient Temperature     : 37.50
Highest Temperature             : 37.50
Lowest Temperature              : 37.50

Normal Patient Count            : 3
Fever Patient Count             : 0
Critical Patient Count          : 0
=======================================================

========================================================================

Sample Input 3 :
1
36.0

Sample Output 3 :

Enter Patients Count : 1

Enter temperature of Patient 1 in Celsius : 36.0

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 1
Average Patient Temperature     : 36.00
Highest Temperature             : 36.00
Lowest Temperature              : 36.00

Normal Patient Count            : 1
Fever Patient Count             : 0
Critical Patient Count          : 0
=======================================================

========================================================================

Sample Input 4 :
4
39.0
39.1
39.0
39.1

Sample Output 4 :

Enter Patients Count : 4

Enter temperature of Patient 1 in Celsius : 39.0
Enter temperature of Patient 2 in Celsius : 39.1
Enter temperature of Patient 3 in Celsius : 39.0
Enter temperature of Patient 4 in Celsius : 39.1

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 4
Average Patient Temperature     : 39.05
Highest Temperature             : 39.10
Lowest Temperature              : 39.00

Normal Patient Count            : 0
Fever Patient Count             : 2
Critical Patient Count          : 2
=======================================================

========================================================================

Sample Input 5 :
5
40.5
41.0
42.0
41.5
40.8

Sample Output 5 :

Enter Patients Count : 5

Enter temperature of Patient 1 in Celsius : 40.5
Enter temperature of Patient 2 in Celsius : 41.0
Enter temperature of Patient 3 in Celsius : 42.0
Enter temperature of Patient 4 in Celsius : 41.5
Enter temperature of Patient 5 in Celsius : 40.8

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 5
Average Patient Temperature     : 41.16
Highest Temperature             : 42.00
Lowest Temperature              : 40.50

Normal Patient Count            : 0
Fever Patient Count             : 0
Critical Patient Count          : 5
=======================================================

========================================================================

Sample Input 6 :
6
36.0
36.5
37.0
37.2
37.4
37.5

Sample Output 6 :

Enter Patients Count : 6

Enter temperature of Patient 1 in Celsius : 36.0
Enter temperature of Patient 2 in Celsius : 36.5
Enter temperature of Patient 3 in Celsius : 37.0
Enter temperature of Patient 4 in Celsius : 37.2
Enter temperature of Patient 5 in Celsius : 37.4
Enter temperature of Patient 6 in Celsius : 37.5

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 6
Average Patient Temperature     : 36.93
Highest Temperature             : 37.50
Lowest Temperature              : 36.00

Normal Patient Count            : 6
Fever Patient Count             : 0
Critical Patient Count          : 0
=======================================================

========================================================================

Sample Input 7 :
5
37.6
38.0
38.5
38.9
39.0

Sample Output 7 :

Enter Patients Count : 5

Enter temperature of Patient 1 in Celsius : 37.6
Enter temperature of Patient 2 in Celsius : 38.0
Enter temperature of Patient 3 in Celsius : 38.5
Enter temperature of Patient 4 in Celsius : 38.9
Enter temperature of Patient 5 in Celsius : 39.0

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 5
Average Patient Temperature     : 38.40
Highest Temperature             : 39.00
Lowest Temperature              : 37.60

Normal Patient Count            : 0
Fever Patient Count             : 5
Critical Patient Count          : 0
=======================================================

========================================================================

Sample Input 8 :
7
35.5
36.0
37.0
38.0
39.0
40.0
41.0

Sample Output 8 :

Enter Patients Count : 7

Enter temperature of Patient 1 in Celsius : 35.5
Enter temperature of Patient 2 in Celsius : 36.0
Enter temperature of Patient 3 in Celsius : 37.0
Enter temperature of Patient 4 in Celsius : 38.0
Enter temperature of Patient 5 in Celsius : 39.0
Enter temperature of Patient 6 in Celsius : 40.0
Enter temperature of Patient 7 in Celsius : 41.0

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 7
Average Patient Temperature     : 38.21
Highest Temperature             : 41.00
Lowest Temperature              : 35.50

Normal Patient Count            : 3
Fever Patient Count             : 2
Critical Patient Count          : 2
=======================================================

========================================================================

Sample Input 9 :
4
37.5
37.51
39.0
39.01

Sample Output 9 :

Enter Patients Count : 4

Enter temperature of Patient 1 in Celsius : 37.5
Enter temperature of Patient 2 in Celsius : 37.51
Enter temperature of Patient 3 in Celsius : 39.0
Enter temperature of Patient 4 in Celsius : 39.01

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 4
Average Patient Temperature     : 38.26
Highest Temperature             : 39.01
Lowest Temperature              : 37.50

Normal Patient Count            : 1
Fever Patient Count             : 2
Critical Patient Count          : 1
=======================================================

========================================================================

Sample Input 10 :
3
30.0
37.5
45.0

Sample Output 10 :

Enter Patients Count : 3

Enter temperature of Patient 1 in Celsius : 30.0
Enter temperature of Patient 2 in Celsius : 37.5
Enter temperature of Patient 3 in Celsius : 45.0

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 3
Average Patient Temperature     : 37.50
Highest Temperature             : 45.00
Lowest Temperature              : 30.00

Normal Patient Count            : 2
Fever Patient Count             : 0
Critical Patient Count          : 1
=======================================================

========================================================================

Sample Input 11 :
5
36.8
37.2
38.2
39.5
40.5

Sample Output 11 :

Enter Patients Count : 5

Enter temperature of Patient 1 in Celsius : 36.8
Enter temperature of Patient 2 in Celsius : 37.2
Enter temperature of Patient 3 in Celsius : 38.2
Enter temperature of Patient 4 in Celsius : 39.5
Enter temperature of Patient 5 in Celsius : 40.5

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 5
Average Patient Temperature     : 38.38
Highest Temperature             : 40.50
Lowest Temperature              : 36.80

Normal Patient Count            : 2
Fever Patient Count             : 1
Critical Patient Count          : 2
=======================================================

========================================================================

Sample Input 12 :
6
37.0
37.0
37.0
37.0
37.0
37.0

Sample Output 12 :

Enter Patients Count : 6

Enter temperature of Patient 1 in Celsius : 37.0
Enter temperature of Patient 2 in Celsius : 37.0
Enter temperature of Patient 3 in Celsius : 37.0
Enter temperature of Patient 4 in Celsius : 37.0
Enter temperature of Patient 5 in Celsius : 37.0
Enter temperature of Patient 6 in Celsius : 37.0

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 6
Average Patient Temperature     : 37.00
Highest Temperature             : 37.00
Lowest Temperature              : 37.00

Normal Patient Count            : 6
Fever Patient Count             : 0
Critical Patient Count          : 0
=======================================================

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter Patients Count : 0

Invalid Input. Count must be positive.

Enter Patients Count : 4

Enter temperature of Patient 1 in Celsius : 37.0
Enter temperature of Patient 2 in Celsius : 38.5
Enter temperature of Patient 3 in Celsius : 39.5
Enter temperature of Patient 4 in Celsius : 40.0

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 4
Average Patient Temperature     : 38.75
Highest Temperature             : 40.00
Lowest Temperature              : 37.00

Normal Patient Count            : 1
Fever Patient Count             : 1
Critical Patient Count          : 2
=======================================================

========================================================================

Sample Input 14 :
101

Sample Output 14 :

Enter Patients Count : 101

Invalid Input. Count must be less than 100.

Enter Patients Count : 3

Enter temperature of Patient 1 in Celsius : 36.5
Enter temperature of Patient 2 in Celsius : 38.0
Enter temperature of Patient 3 in Celsius : 40.5

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 3
Average Patient Temperature     : 38.33
Highest Temperature             : 40.50
Lowest Temperature              : 36.50

Normal Patient Count            : 1
Fever Patient Count             : 1
Critical Patient Count          : 1
=======================================================

========================================================================

Sample Input 15 :
5
29.0
37.5
46.0
38.0
39.0

Sample Output 15 :

Enter Patients Count : 5

Enter temperature of Patient 1 in Celsius : 29.0

Temperature range should be 30*C to 45*C.

Enter temperature of Patient 1 in Celsius : 37.5
Enter temperature of Patient 2 in Celsius : 46.0

Temperature range should be 30*C to 45*C.

Enter temperature of Patient 2 in Celsius : 38.0
Enter temperature of Patient 3 in Celsius : 39.0
Enter temperature of Patient 4 in Celsius : 36.5
Enter temperature of Patient 5 in Celsius : 37.0

=======================================================
	Patient Temperature Monitor
=======================================================
Patients Count                  : 5
Average Patient Temperature     : 37.60
Highest Temperature             : 39.00
Lowest Temperature              : 36.50

Normal Patient Count            : 4
Fever Patient Count             : 1
Critical Patient Count          : 0
=======================================================

========================================================================
*/