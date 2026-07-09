/*
------------------------------------------------------------------------
Program Name : Employee Salary Analytics System
Author       : MrLogeshrt
Day          : 6
Program No   : 1
Description  : Analyzes employee salary records by
               calculating the total salary
               expenditure, highest salary,
               lowest salary, average salary,
               and counting employees earning
               above and below the average salary.
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

1. Employee count must be between 1 and 50.
2. Salary must be greater than or equal to zero.
3. Average salary = Total Salary / Employee Count.
4. Employees earning exactly the average salary are excluded from above/below counts.
------------------------------------------------------------------------

*/


#include <stdio.h>

int main()
{
    int n, high_salary = 0, low_salary = 0;
    long long int total_salary = 0;
    int above_avg = 0, below_avg = 0;
    float average_salary = 0.0f;

    do
    {
        printf("\nEnter the Employee Count : ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("\nInvalid Input. Count must be greater than zero.\n");
        }

        else if (n > 50)
        {
            printf("\nEmployee count must be less than or equal to 50.\n");
        }
    } while (n <= 0 || n > 50);
    
    int emp_salary[n];

    // Read employee salary details and compute statistics
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter Employee %d salary : ", i+1);
        scanf("%d", &emp_salary[i]);

        if (emp_salary[i] < 0)
        {
            printf("\nSalary cannot be negative.\n");
            i--;
            continue;
        }

        if(i == 0)
        {
            high_salary = emp_salary[i];
            low_salary = emp_salary[i];
        }

        else
        {
            if (high_salary < emp_salary[i])
            {
                high_salary = emp_salary[i];
            }

            if (low_salary > emp_salary[i])
            {
                low_salary = emp_salary[i];
            }
        }

        total_salary += emp_salary[i];
    }

    average_salary = (float) total_salary / n;

    // Count employees earning above and below the average salary
    for(int i = 0; i < n; i++)
    {
        if ((float) emp_salary[i] > average_salary)
        {
            above_avg++;
        }

        if ((float) emp_salary[i] < average_salary)
        {
            below_avg++;
        }
    }

    // Display the employee salary analysis report
    printf("\nEmployee Salary Analysis Report\n");
    printf("--------------------------------------\n");
    printf("Employee Count              : %d\n", n);
    printf("Total Salary Expenditure    : %ld\n", total_salary);
    printf("Employees Above Average     : %d\n", above_avg);
    printf("Employees Below Average     : %d\n", below_avg);
    printf("Highest Salary              : %d\n", high_salary);
    printf("Lowest Salary               : %d\n", low_salary);
    printf("Average Salary              : %.2f\n", average_salary);
    printf("--------------------------------------\n");

    return 0;
}



/*
========================================================================

Sample Input 1 :
5
50000
60000
55000
65000
70000

Sample Output 1 :

Enter the Employee Count : 5

Enter Employee 1 salary : 50000
Enter Employee 2 salary : 60000
Enter Employee 3 salary : 55000
Enter Employee 4 salary : 65000
Enter Employee 5 salary : 70000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 5
Total Salary Expenditure    : 300000
Employees Above Average     : 3
Employees Below Average     : 2
Highest Salary              : 70000
Lowest Salary               : 50000
Average Salary              : 60000.00
--------------------------------------

========================================================================

Sample Input 2 :
3
40000
40000
40000

Sample Output 2 :

Enter the Employee Count : 3

Enter Employee 1 salary : 40000
Enter Employee 2 salary : 40000
Enter Employee 3 salary : 40000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 3
Total Salary Expenditure    : 120000
Employees Above Average     : 0
Employees Below Average     : 0
Highest Salary              : 40000
Lowest Salary               : 40000
Average Salary              : 40000.00
--------------------------------------

========================================================================

Sample Input 3 :
1
50000

Sample Output 3 :

Enter the Employee Count : 1

Enter Employee 1 salary : 50000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 1
Total Salary Expenditure    : 50000
Employees Above Average     : 0
Employees Below Average     : 0
Highest Salary              : 50000
Lowest Salary               : 50000
Average Salary              : 50000.00
--------------------------------------

========================================================================

Sample Input 4 :
4
30000
50000
40000
60000

Sample Output 4 :

Enter the Employee Count : 4

Enter Employee 1 salary : 30000
Enter Employee 2 salary : 50000
Enter Employee 3 salary : 40000
Enter Employee 4 salary : 60000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 4
Total Salary Expenditure    : 180000
Employees Above Average     : 2
Employees Below Average     : 1
Highest Salary              : 60000
Lowest Salary               : 30000
Average Salary              : 45000.00
--------------------------------------

========================================================================

Sample Input 5 :
6
25000
35000
45000
55000
65000
75000

Sample Output 5 :

Enter the Employee Count : 6

Enter Employee 1 salary : 25000
Enter Employee 2 salary : 35000
Enter Employee 3 salary : 45000
Enter Employee 4 salary : 55000
Enter Employee 5 salary : 65000
Enter Employee 6 salary : 75000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 6
Total Salary Expenditure    : 300000
Employees Above Average     : 3
Employees Below Average     : 3
Highest Salary              : 75000
Lowest Salary               : 25000
Average Salary              : 50000.00
--------------------------------------

========================================================================

Sample Input 6 :
2
100000
50000

Sample Output 6 :

Enter the Employee Count : 2

Enter Employee 1 salary : 100000
Enter Employee 2 salary : 50000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 2
Total Salary Expenditure    : 150000
Employees Above Average     : 1
Employees Below Average     : 1
Highest Salary              : 100000
Lowest Salary               : 50000
Average Salary              : 75000.00
--------------------------------------

========================================================================

Sample Input 7 :
5
0
0
0
0
0

Sample Output 7 :

Enter the Employee Count : 5

Enter Employee 1 salary : 0
Enter Employee 2 salary : 0
Enter Employee 3 salary : 0
Enter Employee 4 salary : 0
Enter Employee 5 salary : 0

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 5
Total Salary Expenditure    : 0
Employees Above Average     : 0
Employees Below Average     : 0
Highest Salary              : 0
Lowest Salary               : 0
Average Salary              : 0.00
--------------------------------------

========================================================================

Sample Input 8 :
4
45000
45000
45000
45000

Sample Output 8 :

Enter the Employee Count : 4

Enter Employee 1 salary : 45000
Enter Employee 2 salary : 45000
Enter Employee 3 salary : 45000
Enter Employee 4 salary : 45000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 4
Total Salary Expenditure    : 180000
Employees Above Average     : 0
Employees Below Average     : 0
Highest Salary              : 45000
Lowest Salary               : 45000
Average Salary              : 45000.00
--------------------------------------

========================================================================

Sample Input 9 :
3
20000
50000
80000

Sample Output 9 :

Enter the Employee Count : 3

Enter Employee 1 salary : 20000
Enter Employee 2 salary : 50000
Enter Employee 3 salary : 80000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 3
Total Salary Expenditure    : 150000
Employees Above Average     : 1
Employees Below Average     : 1
Highest Salary              : 80000
Lowest Salary               : 20000
Average Salary              : 50000.00
--------------------------------------

========================================================================

Sample Input 10 :
7
35000
42000
48000
55000
62000
70000
78000

Sample Output 10 :

Enter the Employee Count : 7

Enter Employee 1 salary : 35000
Enter Employee 2 salary : 42000
Enter Employee 3 salary : 48000
Enter Employee 4 salary : 55000
Enter Employee 5 salary : 62000
Enter Employee 6 salary : 70000
Enter Employee 7 salary : 78000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 7
Total Salary Expenditure    : 390000
Employees Above Average     : 3
Employees Below Average     : 3
Highest Salary              : 78000
Lowest Salary               : 35000
Average Salary              : 55714.29
--------------------------------------

========================================================================

Sample Input 11 :
5
100000
90000
80000
70000
60000

Sample Output 11 :

Enter the Employee Count : 5

Enter Employee 1 salary : 100000
Enter Employee 2 salary : 90000
Enter Employee 3 salary : 80000
Enter Employee 4 salary : 70000
Enter Employee 5 salary : 60000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 5
Total Salary Expenditure    : 400000
Employees Above Average     : 2
Employees Below Average     : 2
Highest Salary              : 100000
Lowest Salary               : 60000
Average Salary              : 80000.00
--------------------------------------

========================================================================

Sample Input 12 :
6
10000
20000
30000
40000
50000
60000

Sample Output 12 :

Enter the Employee Count : 6

Enter Employee 1 salary : 10000
Enter Employee 2 salary : 20000
Enter Employee 3 salary : 30000
Enter Employee 4 salary : 40000
Enter Employee 5 salary : 50000
Enter Employee 6 salary : 60000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 6
Total Salary Expenditure    : 210000
Employees Above Average     : 3
Employees Below Average     : 3
Highest Salary              : 60000
Lowest Salary               : 10000
Average Salary              : 35000.00
--------------------------------------

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter the Employee Count : 0

Invalid Input. Count must be greater than zero.

Enter the Employee Count : 3

Enter Employee 1 salary : 50000
Enter Employee 2 salary : 55000
Enter Employee 3 salary : 60000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 3
Total Salary Expenditure    : 165000
Employees Above Average     : 1
Employees Below Average     : 1
Highest Salary              : 60000
Lowest Salary               : 50000
Average Salary              : 55000.00
--------------------------------------

========================================================================

Sample Input 14 :
51

Sample Output 14 :

Enter the Employee Count : 51

Employee count must be less than or equal to 50.

Enter the Employee Count : 4

Enter Employee 1 salary : 45000
Enter Employee 2 salary : 50000
Enter Employee 3 salary : 55000
Enter Employee 4 salary : 60000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 4
Total Salary Expenditure    : 210000
Employees Above Average     : 2
Employees Below Average     : 1
Highest Salary              : 60000
Lowest Salary               : 45000
Average Salary              : 52500.00
--------------------------------------

========================================================================

Sample Input 15 :
5
-5000
50000
60000
55000
70000

Sample Output 15 :

Enter the Employee Count : 5

Enter Employee 1 salary : -5000

Salary cannot be negative.

Enter Employee 1 salary : 50000
Enter Employee 2 salary : 60000
Enter Employee 3 salary : 55000
Enter Employee 4 salary : 70000

Employee Salary Analysis Report
--------------------------------------
Employee Count              : 5
Total Salary Expenditure    : 285000
Employees Above Average     : 2
Employees Below Average     : 2
Highest Salary              : 70000
Lowest Salary               : 50000
Average Salary              : 57000.00
--------------------------------------

========================================================================
*/