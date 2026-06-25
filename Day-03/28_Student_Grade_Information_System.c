/*
------------------------------------------------------------------------
Program Name : Student Grade Information System
Author       : MrLogeshrt
Day          : 3
Program No   : 8
Description  : Displays grade information, score range, performance level, and result status
               based on the student's score (0-100).

Concepts Used:
- Variables
- Switch Case Statements
- Integer Division
- Input Validation
- Input/Output Functions
- Decision Making
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int score;

    printf("\nStudent Grade Information System\n");
    printf("Enter student score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) 
    {
        printf("Invalid score. Enter a value between 0 and 100.\n");
    } 
    
    else 
    {
        switch (score / 10) 
        {
            case 10: 
            case 9:

                printf("\nGrade : A\n");
                printf("Score range : 90 to 100\n");
                printf("Performance level : Excellent\n");
                printf("Result status : Pass\n");
                break;

            case 8:

                printf("\nGrade : B\n");
                printf("Score range : 80 to 89\n");
                printf("Performance level : Good\n");
                printf("Result status : Pass\n");
                break;

            case 7:

                printf("\nGrade : C\n");
                printf("Score range : 70 to 79\n");
                printf("Performance level : Average\n");
                printf("Result status : Pass\n");
                break;

            case 6:

                printf("\nGrade : D\n");
                printf("Score range : 60 to 69\n");
                printf("Performance level : Fair\n");
                printf("Result status : Pass\n");
                break;

            default:

                printf("\nGrade : F\n");
                printf("Score range : 0 to 59\n");
                printf("Performance level : Poor\n");
                printf("Result status : Fail\n");
                break;
        }
    }

    return 0;
}


/*
========================================================================

Sample Input 1 :
95

Sample Output 1 :

Student Grade Information System
Enter student score (0-100): 95

Grade : A
Score range : 90 to 100
Performance level : Excellent
Result status : Pass

========================================================================

Sample Input 2 :
85

Sample Output 2 :

Student Grade Information System
Enter student score (0-100): 85

Grade : B
Score range : 80 to 89
Performance level : Good
Result status : Pass

========================================================================

Sample Input 3 :
75

Sample Output 3 :

Student Grade Information System
Enter student score (0-100): 75

Grade : C
Score range : 70 to 79
Performance level : Average
Result status : Pass

========================================================================

Sample Input 4 :
65

Sample Output 4 :

Student Grade Information System
Enter student score (0-100): 65

Grade : D
Score range : 60 to 69
Performance level : Fair
Result status : Pass

========================================================================

Sample Input 5 :
50

Sample Output 5 :

Student Grade Information System
Enter student score (0-100): 50

Grade : F
Score range : 0 to 59
Performance level : Poor
Result status : Fail

========================================================================

Sample Input 6 :
100

Sample Output 6 :

Student Grade Information System
Enter student score (0-100): 100

Grade : A
Score range : 90 to 100
Performance level : Excellent
Result status : Pass

========================================================================

Sample Input 7 :
0

Sample Output 7 :

Student Grade Information System
Enter student score (0-100): 0

Grade : F
Score range : 0 to 59
Performance level : Poor
Result status : Fail

========================================================================

Sample Input 8 :
-5

Sample Output 8 :

Student Grade Information System
Enter student score (0-100): -5

Invalid score. Enter a value between 0 and 100.

========================================================================

Sample Input 9 :
105

Sample Output 9 :

Student Grade Information System
Enter student score (0-100): 105

Invalid score. Enter a value between 0 and 100.

========================================================================
*/