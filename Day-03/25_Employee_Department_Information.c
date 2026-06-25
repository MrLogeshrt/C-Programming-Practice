/*
------------------------------------------------------------------------
Program Name : Employee Department Information
Author       : MrLogeshrt
Day          : 3
Program No   : 5
Description  : Displays department information based on user menu selection and allows exit from the program.

Concepts Used:
- Variables
- Switch Case Statements
- Input/Output Functions
- Menu-Driven Programming
- Decision Making
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int choice;

    // Display menu
    printf("\n______ Menu ______\n");
    printf("1. HR\n");
    printf("2. Finance\n");
    printf("3. Production\n");
    printf("4. Quality\n");
    printf("5. R&D\n");
    printf("6. Exit\n");

    // Read user input
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    // Validate input and display results
    switch (choice)
    {
        case 1:
            printf("\nDepartment Name: HR\n");
            printf("\nResponsibilities: Recruitment, employee relations, training, and benefits administration.\n");
            break;

        case 2:
            printf("\nDepartment Name: Finance\n");
            printf("\nResponsibilities: Financial planning, budgeting, accounting, and payroll management.\n");
            break;

        case 3:
            printf("\nDepartment Name: Production\n");
            printf("\nResponsibilities: Manufacturing, process control, production scheduling, and quality output.\n");
            break;

        case 4:
            printf("\nDepartment Name: Quality\n");
            printf("\nResponsibilities: Quality assurance, inspections, compliance, and continuous improvement.\n");
            break;

        case 5:
            printf("\nDepartment Name: R&D\n");
            printf("\nResponsibilities: Research, product development, innovation, and technical analysis.\n");
            break;

        case 6:
            printf("\nExiting program.\n");
            break;

        default:
            printf("\nInvalid option. Please try again.\n");
            break;
    }

    return 0;
}


/*

Sample Input 1 :
1

Sample Output 1 :
Department Name: HR
Responsibilities: Recruitment, employee relations, training, and benefits administration.

Sample Input 2 :
2

Sample Output 2 :
Department Name: Finance
Responsibilities: Financial planning, budgeting, accounting, and payroll management.

Sample Input 3 :
3

Sample Output 3 :
Department Name: Production
Responsibilities: Manufacturing, process control, production scheduling, and quality output.

Sample Input 4 :
4

Sample Output 4 :
Department Name: Quality
Responsibilities: Quality assurance, inspections, compliance, and continuous improvement.

Sample Input 5 :
5

Sample Output 5 :
Department Name: R&D
Responsibilities: Research, product development, innovation, and technical analysis.

Sample Input 6 :
6

Sample Output 6 :
Exiting program.

Sample Input 9 :
9

Sample Output 9 :
Invalid option. Please try again.

*/