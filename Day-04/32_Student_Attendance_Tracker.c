/*
------------------------------------------------------------------------
Program Name : Student Attendance Tracker
Author       : MrLogeshrt
Day          : 4
Program No   : 2
Description  : Calculates a student's attendance percentage by
               recording daily attendance and displays the
               attendance status based on the final percentage.

Concepts Used:
- Variables
- for Loop
- while Loop
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
    int days = 0, attendance, present = 0;

    // Get total working days from user
    printf("\nEnter total working days : ");
    scanf("%d", &days);

    // Validate that working days is a positive number
    while(days <= 0)
    {
        printf("\nInvalid Working days.\n");
        printf("\nEnter total working days : ");
        scanf("%d", &days);
    }

    // Display attendance code for user reference
    printf("\nAttendance Code :\n");
    printf("1 - Present\n");
    printf("0 - Absent\n\n");

    for (int i = 1; i <= days; i++)
    {
        printf("Enter the day %d attendance : ", i);
        scanf("%d", &attendance);

        // Count present days
        if (attendance == 1)
        {
            present++;
        }

        else if (attendance == 0)
        {
            continue;
        }
        
        else 
        {
            i--;
            printf("\nInvalid Input.\n");
            printf("Retry.\n");
        }
    }

    // Calculate attendance percentage
    float percentage = 0.0f;

    percentage = ((float) present / days) * 100;

    // Display attendance summary
    printf("\nTotal Working Days : %d\n", days);
    printf("Days Present : %d\n", present);
    printf("Days Absent : %d\n", days - present);
    printf("Attendance Percentage : %.2f%%\n", percentage);
    
    // Determine and display attendance status based on percentage
    if (percentage >= 90.0)
    {
        printf("Attendance Status : Excellent\n");
    }

    else if (percentage >= 75.0)
    {
        printf("Attendance Status : Good\n");
    }

    else
    {
        printf("Attendance Status : Needs Improvement\n");
    }

    return 0;


}


/*
========================================================================

Sample Input 1 :
10
1
1
1
1
1
1
1
1
1
1

Sample Output 1 :

Enter total working days : 10

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1
Enter the day 6 attendance : 1
Enter the day 7 attendance : 1
Enter the day 8 attendance : 1
Enter the day 9 attendance : 1
Enter the day 10 attendance : 1

Total Working Days : 10
Days Present : 10
Days Absent : 0
Attendance Percentage : 100.00%
Attendance Status : Excellent

========================================================================

Sample Input 2 :
10
1
1
1
1
1
1
1
1
1
0

Sample Output 2 :

Enter total working days : 10

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1
Enter the day 6 attendance : 1
Enter the day 7 attendance : 1
Enter the day 8 attendance : 1
Enter the day 9 attendance : 1
Enter the day 10 attendance : 0

Total Working Days : 10
Days Present : 9
Days Absent : 1
Attendance Percentage : 90.00%
Attendance Status : Excellent

========================================================================

Sample Input 3 :
10
1
1
1
1
1
1
1
0
0
0

Sample Output 3 :

Enter total working days : 10

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1
Enter the day 6 attendance : 1
Enter the day 7 attendance : 1
Enter the day 8 attendance : 0
Enter the day 9 attendance : 0
Enter the day 10 attendance : 0

Total Working Days : 10
Days Present : 7
Days Absent : 3
Attendance Percentage : 70.00%
Attendance Status : Needs Improvement

========================================================================

Sample Input 4 :
20
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
0
0
0
0
0

Sample Output 4 :

Enter total working days : 20

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1
Enter the day 6 attendance : 1
Enter the day 7 attendance : 1
Enter the day 8 attendance : 1
Enter the day 9 attendance : 1
Enter the day 10 attendance : 1
Enter the day 11 attendance : 1
Enter the day 12 attendance : 1
Enter the day 13 attendance : 1
Enter the day 14 attendance : 1
Enter the day 15 attendance : 1
Enter the day 16 attendance : 0
Enter the day 17 attendance : 0
Enter the day 18 attendance : 0
Enter the day 19 attendance : 0
Enter the day 20 attendance : 0

Total Working Days : 20
Days Present : 15
Days Absent : 5
Attendance Percentage : 75.00%
Attendance Status : Good

========================================================================

Sample Input 5 :
20
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
0
0
0

Sample Output 5 :

Enter total working days : 20

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1
Enter the day 6 attendance : 1
Enter the day 7 attendance : 1
Enter the day 8 attendance : 1
Enter the day 9 attendance : 1
Enter the day 10 attendance : 1
Enter the day 11 attendance : 1
Enter the day 12 attendance : 1
Enter the day 13 attendance : 1
Enter the day 14 attendance : 1
Enter the day 15 attendance : 1
Enter the day 16 attendance : 1
Enter the day 17 attendance : 1
Enter the day 18 attendance : 0
Enter the day 19 attendance : 0
Enter the day 20 attendance : 0

Total Working Days : 20
Days Present : 17
Days Absent : 3
Attendance Percentage : 85.00%
Attendance Status : Good

========================================================================

Sample Input 6 :
10
1
1
1
1
1
0
0
0
0
0

Sample Output 6 :

Enter total working days : 10

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1
Enter the day 6 attendance : 0
Enter the day 7 attendance : 0
Enter the day 8 attendance : 0
Enter the day 9 attendance : 0
Enter the day 10 attendance : 0

Total Working Days : 10
Days Present : 5
Days Absent : 5
Attendance Percentage : 50.00%
Attendance Status : Needs Improvement

========================================================================

Sample Input 7 :
30
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
0
0
0
0
0
0
0
0
0
0

Sample Output 7 :

Enter total working days : 30

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1
Enter the day 6 attendance : 1
Enter the day 7 attendance : 1
Enter the day 8 attendance : 1
Enter the day 9 attendance : 1
Enter the day 10 attendance : 1
Enter the day 11 attendance : 1
Enter the day 12 attendance : 1
Enter the day 13 attendance : 1
Enter the day 14 attendance : 1
Enter the day 15 attendance : 1
Enter the day 16 attendance : 1
Enter the day 17 attendance : 1
Enter the day 18 attendance : 1
Enter the day 19 attendance : 1
Enter the day 20 attendance : 1
Enter the day 21 attendance : 0
Enter the day 22 attendance : 0
Enter the day 23 attendance : 0
Enter the day 24 attendance : 0
Enter the day 25 attendance : 0
Enter the day 26 attendance : 0
Enter the day 27 attendance : 0
Enter the day 28 attendance : 0
Enter the day 29 attendance : 0
Enter the day 30 attendance : 0

Total Working Days : 30
Days Present : 20
Days Absent : 10
Attendance Percentage : 66.67%
Attendance Status : Needs Improvement

========================================================================

Sample Input 8 :
1
1

Sample Output 8 :

Enter total working days : 1

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1

Total Working Days : 1
Days Present : 1
Days Absent : 0
Attendance Percentage : 100.00%
Attendance Status : Excellent

========================================================================

Sample Input 9 :
1
0

Sample Output 9 :

Enter total working days : 1

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 0

Total Working Days : 1
Days Present : 0
Days Absent : 1
Attendance Percentage : 0.00%
Attendance Status : Needs Improvement

========================================================================

Sample Input 10 :
0
5
10

Sample Output 10 :

Enter total working days : 0

Invalid Working days.

Enter total working days : 5

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1

Total Working Days : 5
Days Present : 5
Days Absent : 0
Attendance Percentage : 100.00%
Attendance Status : Excellent

========================================================================

Sample Input 11 :
-5
10
1
1
1
1
1
1
1
1
1
1

Sample Output 11 :

Enter total working days : -5

Invalid Working days.

Enter total working days : 10

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1
Enter the day 6 attendance : 1
Enter the day 7 attendance : 1
Enter the day 8 attendance : 1
Enter the day 9 attendance : 1
Enter the day 10 attendance : 1

Total Working Days : 10
Days Present : 10
Days Absent : 0
Attendance Percentage : 100.00%
Attendance Status : Excellent

========================================================================

Sample Input 12 :
5
2
1
1
1
1
1

Sample Output 12 :

Enter total working days : 5

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 2

Invalid Input.
Retry.
Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1

Total Working Days : 5
Days Present : 5
Days Absent : 0
Attendance Percentage : 100.00%
Attendance Status : Excellent

========================================================================

Sample Input 13 :
5
-1
1
1
1
1
1

Sample Output 13 :

Enter total working days : 5

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : -1

Invalid Input.
Retry.
Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1

Total Working Days : 5
Days Present : 5
Days Absent : 0
Attendance Percentage : 100.00%
Attendance Status : Excellent

========================================================================

Sample Input 14 :
15
1
0
1
1
0
1
1
1
0
1
1
1
1
0
1

Sample Output 14 :

Enter total working days : 15

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 0
Enter the day 3 attendance : 1
Enter the day 4 attendance : 1
Enter the day 5 attendance : 0
Enter the day 6 attendance : 1
Enter the day 7 attendance : 1
Enter the day 8 attendance : 1
Enter the day 9 attendance : 0
Enter the day 10 attendance : 1
Enter the day 11 attendance : 1
Enter the day 12 attendance : 1
Enter the day 13 attendance : 1
Enter the day 14 attendance : 0
Enter the day 15 attendance : 1

Total Working Days : 15
Days Present : 11
Days Absent : 4
Attendance Percentage : 73.33%
Attendance Status : Needs Improvement

========================================================================

Sample Input 15 :
25
1
1
0
1
1
1
0
1
1
1
1
1
0
1
1
1
1
1
0
1
1
1
1
0
1

Sample Output 15 :

Enter total working days : 25

Attendance Code :
1 - Present
0 - Absent

Enter the day 1 attendance : 1
Enter the day 2 attendance : 1
Enter the day 3 attendance : 0
Enter the day 4 attendance : 1
Enter the day 5 attendance : 1
Enter the day 6 attendance : 1
Enter the day 7 attendance : 0
Enter the day 8 attendance : 1
Enter the day 9 attendance : 1
Enter the day 10 attendance : 1
Enter the day 11 attendance : 1
Enter the day 12 attendance : 1
Enter the day 13 attendance : 0
Enter the day 14 attendance : 1
Enter the day 15 attendance : 1
Enter the day 16 attendance : 1
Enter the day 17 attendance : 1
Enter the day 18 attendance : 1
Enter the day 19 attendance : 0
Enter the day 20 attendance : 1
Enter the day 21 attendance : 1
Enter the day 22 attendance : 1
Enter the day 23 attendance : 1
Enter the day 24 attendance : 0
Enter the day 25 attendance : 1

Total Working Days : 25
Days Present : 20
Days Absent : 5
Attendance Percentage : 80.00%
Attendance Status : Good

========================================================================
*/