/*
------------------------------------------------------------------------
Program Name : Student Grade Analyzer
Author       : MrLogeshrt
Day          : 2
Program No   : 9
Description  : Determines a student's grade and performance category based on the score obtained while validating the input range.

Concepts Used:
- Variables
- Relational Operators
- if-else Statements
- Character Data Type
- Strings
- Input/Output Functions
------------------------------------------------------------------------
*/

 /*
Grade Classification:

90 - 100  -> Grade A

80 - 89   -> Grade B

70 - 79   -> Grade C

60 - 69   -> Grade D

Below 60  -> Grade F
*/


#include <stdio.h>

int main()
{
    int mark;
    char grade;
    char *performance;

    // Read mark as an input
    printf("Enter your Score : ");
    scanf("%d", &mark);

    // Compare the score with grade slabs and allocate grade
    if (mark < 0 || mark > 100)
    {
        printf("\nInvalid Score.\n");
    }

    else 
    {
        if (mark >= 90)
        {
            grade = 'A';
            performance = "Excellent";
        }

        else if (mark >= 80)
        {
            grade = 'B';
            performance = "Very Good";
        }

        else if (mark >= 70)
        {
            grade = 'C';
            performance = "Good";
        }

        else if (mark >= 60)
        {
            grade = 'D';
            performance = "Average";
        }

        else 
        {
            grade = 'F';
            performance = "Needs Improvement";
        }

        // Display the results
        printf("\nScore : %d\n", mark);
        printf("Grade : %c\n", grade);
        printf("Performance : %s\n", performance);
    }

    return 0;

}


/*

Sample Input 1 :
90

Sample Output 1 :
Enter your Score : 90

Score : 90
Grade : A
Performance : Excellent

Sample Input 2 :
89

Sample Output 2 :
Enter your Score : 89

Score : 89
Grade : B
Performance : Very Good

Sample Input 3 :
79

Sample Output 3 :
Enter your Score : 79 

Score : 79
Grade : C
Performance : Good

Sample Input 4 :
60

Sample Output 4 :
Enter your Score : 60

Score : 60
Grade : D
Performance : Average

Sample Input 5 :
59

Sample Output 5 :
Enter your Score : 59

Score : 59
Grade : F
Performance : Needs Improvement

Sample Input 6 :
0

Sample Output 6 :
Enter your Score : 0

Score : 0
Grade : F
Performance : Needs Improvement

Sample Input 7 :
100

Sample Output 7 :
Enter your Score : 100

Score : 100
Grade : A
Performance : Excellent

Sample Input 8 :
-52

Sample Output 8 :
Enter your Score : -52

Invalid Score.

Sample Input 9 :
123

Sample Output 9 :
Enter your Score : 123

Invalid Score.

*/