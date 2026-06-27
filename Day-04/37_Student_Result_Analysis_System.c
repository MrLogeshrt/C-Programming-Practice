/*
------------------------------------------------------------------------
Program Name : Student Result Analysis System
Author       : MrLogeshrt
Day          : 4
Program No   : 7
Description  : Records student marks, validates the input,
               calculates the average mark, pass percentage,
               highest mark, lowest mark, and displays an
               overall examination summary.

Concepts Used:
- Variables
- do-while Loop
- for Loop
- if-else Statements
- Arithmetic Operators
- Relational Operators
- Input Validation
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int students, marks, min, max, pass = 0, total_marks = 0;
    float avg_marks = 0.0f, pass_percentage = 0.0f;

    // Input validation loop: Accept student count until valid
    do 
    {
        printf("\nEnter number of Students : ");
        scanf("%d", &students);

        // Error check: Students must be positive
        if (students <= 0)
        {
            printf("\nStudents count must be greater than zero.\n");
        }
    } while (students <= 0);

    // Main loop: Process each student's marks
    for (int i = 1; i <= students; i++)
    {
        printf("\nEnter student %d mark : ", i);
        scanf("%d", &marks);

        if (marks < 0 || marks > 100)
        {
            i--;
            printf("\nMark must be in the range of 1 to 100.\n");
        }

        else
        {
            // Initialize max and min with first student's marks
            if (i == 1)
            {
                max = marks;
                min = marks;
            }

            else
            {
                if (max < marks)
                {
                    max = marks;
                }

                if (min > marks)
                {
                    min = marks;
                }
            }
            
            // Count passed students (marks >= 50)
            if (marks >= 50)
            {
                pass++;
            }

            total_marks += marks;
        }
    }

    // Calculate average marks
    avg_marks = (float) total_marks / students;
    pass_percentage = ((float) pass / students) * 100;

    // Display final results summary
    printf("\nTotal Students      : %d\n", students);
    printf("Students Passed     : %d\n", pass);
    printf("Students Failed     : %d\n", students - pass);
    printf("Highest Mark        : %d\n", max);
    printf("Lowest Mark         : %d\n", min);
    printf("Average Mark        : %.2f\n", avg_marks);
    printf("Pass Percentage     : %.2f%%\n", pass_percentage);

    return 0;

}


/*
========================================================================

Sample Input 1 :
5
75
80
85
90
70

Sample Output 1 :

Enter number of Students : 5

Enter student 1 mark : 75
Enter student 2 mark : 80
Enter student 3 mark : 85
Enter student 4 mark : 90
Enter student 5 mark : 70

Total Students      : 5
Students Passed     : 5
Students Failed     : 0
Highest Mark        : 90
Lowest Mark         : 70
Average Mark        : 80.00
Pass Percentage     : 100.00%

========================================================================

Sample Input 2 :
6
45
55
65
40
75
50

Sample Output 2 :

Enter number of Students : 6

Enter student 1 mark : 45
Enter student 2 mark : 55
Enter student 3 mark : 65
Enter student 4 mark : 40
Enter student 5 mark : 75
Enter student 6 mark : 50

Total Students      : 6
Students Passed     : 4
Students Failed     : 2
Highest Mark        : 75
Lowest Mark         : 40
Average Mark        : 55.00
Pass Percentage     : 66.67%

========================================================================

Sample Input 3 :
4
30
25
35
40

Sample Output 3 :

Enter number of Students : 4

Enter student 1 mark : 30
Enter student 2 mark : 25
Enter student 3 mark : 35
Enter student 4 mark : 40

Total Students      : 4
Students Passed     : 0
Students Failed     : 4
Highest Mark        : 40
Lowest Mark         : 25
Average Mark        : 32.50
Pass Percentage     : 0.00%

========================================================================

Sample Input 4 :
5
60
60
60
60
60

Sample Output 4 :

Enter number of Students : 5

Enter student 1 mark : 60
Enter student 2 mark : 60
Enter student 3 mark : 60
Enter student 4 mark : 60
Enter student 5 mark : 60

Total Students      : 5
Students Passed     : 5
Students Failed     : 0
Highest Mark        : 60
Lowest Mark         : 60
Average Mark        : 60.00
Pass Percentage     : 100.00%

========================================================================

Sample Input 5 :
1
75

Sample Output 5 :

Enter number of Students : 1

Enter student 1 mark : 75

Total Students      : 1
Students Passed     : 1
Students Failed     : 0
Highest Mark        : 75
Lowest Mark         : 75
Average Mark        : 75.00
Pass Percentage     : 100.00%

========================================================================

Sample Input 6 :
1
30

Sample Output 6 :

Enter number of Students : 1

Enter student 1 mark : 30

Total Students      : 1
Students Passed     : 0
Students Failed     : 1
Highest Mark        : 30
Lowest Mark         : 30
Average Mark        : 30.00
Pass Percentage     : 0.00%

========================================================================

Sample Input 7 :
3
50
50
50

Sample Output 7 :

Enter number of Students : 3

Enter student 1 mark : 50
Enter student 2 mark : 50
Enter student 3 mark : 50

Total Students      : 3
Students Passed     : 3
Students Failed     : 0
Highest Mark        : 50
Lowest Mark         : 50
Average Mark        : 50.00
Pass Percentage     : 100.00%

========================================================================

Sample Input 8 :
3
49
49
49

Sample Output 8 :

Enter number of Students : 3

Enter student 1 mark : 49
Enter student 2 mark : 49
Enter student 3 mark : 49

Total Students      : 3
Students Passed     : 0
Students Failed     : 3
Highest Mark        : 49
Lowest Mark         : 49
Average Mark        : 49.00
Pass Percentage     : 0.00%

========================================================================

Sample Input 9 :
3
100
100
100

Sample Output 9 :

Enter number of Students : 3

Enter student 1 mark : 100
Enter student 2 mark : 100
Enter student 3 mark : 100

Total Students      : 3
Students Passed     : 3
Students Failed     : 0
Highest Mark        : 100
Lowest Mark         : 100
Average Mark        : 100.00
Pass Percentage     : 100.00%

========================================================================

Sample Input 10 :
3
0
0
0

Sample Output 10 :

Enter number of Students : 3

Enter student 1 mark : 0
Enter student 2 mark : 0
Enter student 3 mark : 0

Total Students      : 3
Students Passed     : 0
Students Failed     : 3
Highest Mark        : 0
Lowest Mark         : 0
Average Mark        : 0.00
Pass Percentage     : 0.00%

========================================================================

Sample Input 11 :
5
0
25
50
75
100

Sample Output 11 :

Enter number of Students : 5

Enter student 1 mark : 0
Enter student 2 mark : 25
Enter student 3 mark : 50
Enter student 4 mark : 75
Enter student 5 mark : 100

Total Students      : 5
Students Passed     : 3
Students Failed     : 2
Highest Mark        : 100
Lowest Mark         : 0
Average Mark        : 50.00
Pass Percentage     : 60.00%

========================================================================

Sample Input 12 :
-5
0
10
70
75
80
85
90

Sample Output 12 :

Enter number of Students : -5

Students count must be greater than zero.

Enter number of Students : 0

Students count must be greater than zero.

Enter number of Students : 10

Enter student 1 mark : 70
Enter student 2 mark : 75
Enter student 3 mark : 80
Enter student 4 mark : 85
Enter student 5 mark : 90
Enter student 6 mark : 65
Enter student 7 mark : 55
Enter student 8 mark : 45
Enter student 9 mark : 50
Enter student 10 mark : 60

Total Students      : 10
Students Passed     : 8
Students Failed     : 2
Highest Mark        : 90
Lowest Mark         : 45
Average Mark        : 67.50
Pass Percentage     : 80.00%

========================================================================

Sample Input 13 :
3
-50
80
75
90

Sample Output 13 :

Enter number of Students : 3

Enter student 1 mark : -50

Mark must be in the range of 1 to 100.

Enter student 1 mark : 80
Enter student 2 mark : 75
Enter student 3 mark : 90

Total Students      : 3
Students Passed     : 3
Students Failed     : 0
Highest Mark        : 90
Lowest Mark         : 75
Average Mark        : 81.67
Pass Percentage     : 100.00%

========================================================================

Sample Input 14 :
3
105
85
95
100

Sample Output 14 :

Enter number of Students : 3

Enter student 1 mark : 105

Mark must be in the range of 1 to 100.

Enter student 1 mark : 85
Enter student 2 mark : 95
Enter student 3 mark : 100

Total Students      : 3
Students Passed     : 3
Students Failed     : 0
Highest Mark        : 100
Lowest Mark         : 85
Average Mark        : 93.33
Pass Percentage     : 100.00%

========================================================================

Sample Input 15 :
5
-10
110
50
75
-5
85
95

Sample Output 15 :

Enter number of Students : 5

Enter student 1 mark : -10

Mark must be in the range of 1 to 100.

Enter student 1 mark : 110

Mark must be in the range of 1 to 100.

Enter student 1 mark : 50
Enter student 2 mark : 75
Enter student 3 mark : -5

Mark must be in the range of 1 to 100.

Enter student 3 mark : 85
Enter student 4 mark : 95

Total Students      : 5
Students Passed     : 5
Students Failed     : 0
Highest Mark        : 95
Lowest Mark         : 50
Average Mark        : 80.00
Pass Percentage     : 100.00%

========================================================================
*/