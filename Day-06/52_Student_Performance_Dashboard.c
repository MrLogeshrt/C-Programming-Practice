/*
------------------------------------------------------------------------
Program Name : Student Performance Dashboard
Author       : MrLogeshrt
Day          : 6
Program No   : 2
Description  : Analyzes students' academic performance
               by calculating the highest mark,
               lowest mark, class average,
               grade distribution, and
               pass/fail statistics.
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

1. Student count must be between 1 and 100.
2. Marks must be in the range of 0 to 100.
3. Average mark = Total Marks / Student Count.
4. Students scoring below 50 are considered Fail.
5. Grade classification:
      A : 90 - 100
      B : 80 - 89
      C : 70 - 79
      D : 60 - 69
      E : 50 - 59
      F : Below 50
------------------------------------------------------------------------

*/



#include <stdio.h>

int main()
{
    int n;
    int grade_A = 0, grade_B = 0, grade_C = 0, grade_D = 0, grade_E = 0;
    int fail_count = 0, total_marks = 0;
    int high_mark = 0, low_mark = 0;
    float average_mark = 0.0f;

    do
    {
        printf("\nEnter the number of students : ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("\nInvalid Input. Count must be greater than zero.\n");
        }

        else if (n > 100)
        {
            printf("\nCount must be less than or equal to 100.\n");
        }
    } while (n <= 0 || n > 100);

    int student_mark[n];

    // Read student marks and generate academic statistics
    for(int i = 0; i < n; i++)
    {
        printf("Enter marks for Student %d : ", i+1);
        scanf("%d", &student_mark[i]);

        if (student_mark[i] < 0 || student_mark[i] > 100)
        {
            printf("\nMarks should be in the range of 0 to 100.\n");
            i--;
            continue;
        }

        if(i == 0)
        {
            high_mark = student_mark[i];
            low_mark = student_mark[i];
        }

        else
        {
            if (high_mark < student_mark[i])
            {
                high_mark = student_mark[i];
            }

            if (low_mark > student_mark[i])
            {
                low_mark = student_mark[i];
            }
        }

        total_marks += student_mark[i];

        if (student_mark[i] >= 90)
        {
            grade_A++;
        }

        else if (student_mark[i] >= 80)
        {
            grade_B++;
        }

        else if (student_mark[i] >= 70)
        {
            grade_C++;
        }

        else if (student_mark[i] >= 60)
        {
            grade_D++;
        }

        else if (student_mark[i] >= 50)
        {
            grade_E++;
        }

        else
        {
            fail_count++;
        }
    }
    
    average_mark = (float) total_marks / n;

    // Display the student performance report
    printf("\nStudent Performance Dashboard\n");
    printf("----------------------------------------------\n");
    printf("Number of Students          : %d\n", n);
    printf("Average mark of the class   : %.2f\n", average_mark);
    printf("Highest Mark                : %d\n", high_mark);
    printf("Lowest Mark                 : %d\n", low_mark);
    printf("Grade Distribution          :\n");
    printf("Grade A                     : %d\n", grade_A);
    printf("Grade B                     : %d\n", grade_B);
    printf("Grade C                     : %d\n", grade_C);
    printf("Grade D                     : %d\n", grade_D);
    printf("Grade E                     : %d\n", grade_E);
    printf("Students Pass               : %d\n", n - fail_count);
    printf("Students Fail               : %d\n", fail_count);
    printf("----------------------------------------------\n");

    return 0;
}


/*
========================================================================

Sample Input 1 :
5
95
85
75
65
55

Sample Output 1 :

Enter the number of students : 5
Enter marks for Student 1 : 95
Enter marks for Student 2 : 85
Enter marks for Student 3 : 75
Enter marks for Student 4 : 65
Enter marks for Student 5 : 55

Student Performance Dashboard
----------------------------------------------
Number of Students          : 5
Average mark of the class   : 75.00
Highest Mark                : 95
Lowest Mark                 : 55
Grade Distribution          :
Grade A                     : 1
Grade B                     : 1
Grade C                     : 1
Grade D                     : 1
Grade E                     : 1
Students Pass               : 5
Students Fail               : 0
----------------------------------------------

========================================================================

Sample Input 2 :
4
100
90
80
70

Sample Output 2 :

Enter the number of students : 4
Enter marks for Student 1 : 100
Enter marks for Student 2 : 90
Enter marks for Student 3 : 80
Enter marks for Student 4 : 70

Student Performance Dashboard
----------------------------------------------
Number of Students          : 4
Average mark of the class   : 85.00
Highest Mark                : 100
Lowest Mark                 : 70
Grade Distribution          :
Grade A                     : 2
Grade B                     : 1
Grade C                     : 1
Grade D                     : 0
Grade E                     : 0
Students Pass               : 4
Students Fail               : 0
----------------------------------------------

========================================================================

Sample Input 3 :
3
45
35
25

Sample Output 3 :

Enter the number of students : 3
Enter marks for Student 1 : 45
Enter marks for Student 2 : 35
Enter marks for Student 3 : 25

Student Performance Dashboard
----------------------------------------------
Number of Students          : 3
Average mark of the class   : 35.00
Highest Mark                : 45
Lowest Mark                 : 25
Grade Distribution          :
Grade A                     : 0
Grade B                     : 0
Grade C                     : 0
Grade D                     : 0
Grade E                     : 0
Students Pass               : 0
Students Fail               : 3
----------------------------------------------

========================================================================

Sample Input 4 :
6
92
88
76
64
52
48

Sample Output 4 :

Enter the number of students : 6
Enter marks for Student 1 : 92
Enter marks for Student 2 : 88
Enter marks for Student 3 : 76
Enter marks for Student 4 : 64
Enter marks for Student 5 : 52
Enter marks for Student 6 : 48

Student Performance Dashboard
----------------------------------------------
Number of Students          : 6
Average mark of the class   : 70.00
Highest Mark                : 92
Lowest Mark                 : 48
Grade Distribution          :
Grade A                     : 1
Grade B                     : 1
Grade C                     : 1
Grade D                     : 1
Grade E                     : 1
Students Pass               : 5
Students Fail               : 1
----------------------------------------------

========================================================================

Sample Input 5 :
1
75

Sample Output 5 :

Enter the number of students : 1
Enter marks for Student 1 : 75

Student Performance Dashboard
----------------------------------------------
Number of Students          : 1
Average mark of the class   : 75.00
Highest Mark                : 75
Lowest Mark                 : 75
Grade Distribution          :
Grade A                     : 0
Grade B                     : 0
Grade C                     : 1
Grade D                     : 0
Grade E                     : 0
Students Pass               : 1
Students Fail               : 0
----------------------------------------------

========================================================================

Sample Input 6 :
5
90
90
90
90
90

Sample Output 6 :

Enter the number of students : 5
Enter marks for Student 1 : 90
Enter marks for Student 2 : 90
Enter marks for Student 3 : 90
Enter marks for Student 4 : 90
Enter marks for Student 5 : 90

Student Performance Dashboard
----------------------------------------------
Number of Students          : 5
Average mark of the class   : 90.00
Highest Mark                : 90
Lowest Mark                 : 90
Grade Distribution          :
Grade A                     : 5
Grade B                     : 0
Grade C                     : 0
Grade D                     : 0
Grade E                     : 0
Students Pass               : 5
Students Fail               : 0
----------------------------------------------

========================================================================

Sample Input 7 :
4
50
50
50
50

Sample Output 7 :

Enter the number of students : 4
Enter marks for Student 1 : 50
Enter marks for Student 2 : 50
Enter marks for Student 3 : 50
Enter marks for Student 4 : 50

Student Performance Dashboard
----------------------------------------------
Number of Students          : 4
Average mark of the class   : 50.00
Highest Mark                : 50
Lowest Mark                 : 50
Grade Distribution          :
Grade A                     : 0
Grade B                     : 0
Grade C                     : 0
Grade D                     : 0
Grade E                     : 4
Students Pass               : 4
Students Fail               : 0
----------------------------------------------

========================================================================

Sample Input 8 :
7
95
87
78
69
58
49
40

Sample Output 8 :

Enter the number of students : 7
Enter marks for Student 1 : 95
Enter marks for Student 2 : 87
Enter marks for Student 3 : 78
Enter marks for Student 4 : 69
Enter marks for Student 5 : 58
Enter marks for Student 6 : 49
Enter marks for Student 7 : 40

Student Performance Dashboard
----------------------------------------------
Number of Students          : 7
Average mark of the class   : 68.14
Highest Mark                : 95
Lowest Mark                 : 40
Grade Distribution          :
Grade A                     : 1
Grade B                     : 1
Grade C                     : 1
Grade D                     : 1
Grade E                     : 1
Students Pass               : 5
Students Fail               : 2
----------------------------------------------

========================================================================

Sample Input 9 :
3
100
100
100

Sample Output 9 :

Enter the number of students : 3
Enter marks for Student 1 : 100
Enter marks for Student 2 : 100
Enter marks for Student 3 : 100

Student Performance Dashboard
----------------------------------------------
Number of Students          : 3
Average mark of the class   : 100.00
Highest Mark                : 100
Lowest Mark                 : 100
Grade Distribution          :
Grade A                     : 3
Grade B                     : 0
Grade C                     : 0
Grade D                     : 0
Grade E                     : 0
Students Pass               : 3
Students Fail               : 0
----------------------------------------------

========================================================================

Sample Input 10 :
5
0
0
0
0
0

Sample Output 10 :

Enter the number of students : 5
Enter marks for Student 1 : 0
Enter marks for Student 2 : 0
Enter marks for Student 3 : 0
Enter marks for Student 4 : 0
Enter marks for Student 5 : 0

Student Performance Dashboard
----------------------------------------------
Number of Students          : 5
Average mark of the class   : 0.00
Highest Mark                : 0
Lowest Mark                 : 0
Grade Distribution          :
Grade A                     : 0
Grade B                     : 0
Grade C                     : 0
Grade D                     : 0
Grade E                     : 0
Students Pass               : 0
Students Fail               : 5
----------------------------------------------

========================================================================

Sample Input 11 :
6
89
79
69
59
49
39

Sample Output 11 :

Enter the number of students : 6
Enter marks for Student 1 : 89
Enter marks for Student 2 : 79
Enter marks for Student 3 : 69
Enter marks for Student 4 : 59
Enter marks for Student 5 : 49
Enter marks for Student 6 : 39

Student Performance Dashboard
----------------------------------------------
Number of Students          : 6
Average mark of the class   : 64.00
Highest Mark                : 89
Lowest Mark                 : 39
Grade Distribution          :
Grade A                     : 0
Grade B                     : 1
Grade C                     : 1
Grade D                     : 1
Grade E                     : 1
Students Pass               : 4
Students Fail               : 2
----------------------------------------------

========================================================================

Sample Input 12 :
8
91
82
73
64
55
46
37
28

Sample Output 12 :

Enter the number of students : 8
Enter marks for Student 1 : 91
Enter marks for Student 2 : 82
Enter marks for Student 3 : 73
Enter marks for Student 4 : 64
Enter marks for Student 5 : 55
Enter marks for Student 6 : 46
Enter marks for Student 7 : 37
Enter marks for Student 8 : 28

Student Performance Dashboard
----------------------------------------------
Number of Students          : 8
Average mark of the class   : 58.50
Highest Mark                : 91
Lowest Mark                 : 28
Grade Distribution          :
Grade A                     : 1
Grade B                     : 1
Grade C                     : 1
Grade D                     : 1
Grade E                     : 1
Students Pass               : 5
Students Fail               : 3
----------------------------------------------

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter the number of students : 0

Invalid Input. Count must be greater than zero.

Enter the number of students : 3
Enter marks for Student 1 : 85
Enter marks for Student 2 : 75
Enter marks for Student 3 : 65

Student Performance Dashboard
----------------------------------------------
Number of Students          : 3
Average mark of the class   : 75.00
Highest Mark                : 85
Lowest Mark                 : 65
Grade Distribution          :
Grade A                     : 0
Grade B                     : 1
Grade C                     : 1
Grade D                     : 1
Grade E                     : 0
Students Pass               : 3
Students Fail               : 0
----------------------------------------------

========================================================================

Sample Input 14 :
101

Sample Output 14 :

Enter the number of students : 101

Count must be less than or equal to 100.

Enter the number of students : 4
Enter marks for Student 1 : 92
Enter marks for Student 2 : 82
Enter marks for Student 3 : 72
Enter marks for Student 4 : 62

Student Performance Dashboard
----------------------------------------------
Number of Students          : 4
Average mark of the class   : 77.00
Highest Mark                : 92
Lowest Mark                 : 62
Grade Distribution          :
Grade A                     : 1
Grade B                     : 1
Grade C                     : 1
Grade D                     : 1
Grade E                     : 0
Students Pass               : 4
Students Fail               : 0
----------------------------------------------

========================================================================

Sample Input 15 :
5
95
-10
85
105
75

Sample Output 15 :

Enter the number of students : 5
Enter marks for Student 1 : 95
Enter marks for Student 2 : -10

Marks should be in the range of 0 to 100.

Enter marks for Student 2 : 85
Enter marks for Student 3 : 105

Marks should be in the range of 0 to 100.

Enter marks for Student 3 : 75
Enter marks for Student 4 : 85
Enter marks for Student 5 : 95

Student Performance Dashboard
----------------------------------------------
Number of Students          : 5
Average mark of the class   : 86.00
Highest Mark                : 95
Lowest Mark                 : 75
Grade Distribution          :
Grade A                     : 2
Grade B                     : 2
Grade C                     : 1
Grade D                     : 0
Grade E                     : 0
Students Pass               : 5
Students Fail               : 0
----------------------------------------------

========================================================================
*/