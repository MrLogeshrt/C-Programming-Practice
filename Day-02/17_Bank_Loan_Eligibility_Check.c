/*
------------------------------------------------------------------------
Program Name : Bank Loan Eligibility Check
Author       : MrLogeshrt
Day          : 2
Program No   : 7
Description  : Determines whether an applicant is eligible for a bank loan based on age, employment status, monthly income, and existing loan amount.

Concepts Used:
- Variables
- if-else Statements
- Relational Operators
- Logical Operators
- Input/Output Functions
------------------------------------------------------------------------
*/

/*
Bank loan eligibility criteria:

1. Age
        Minimum Age : 21
        Maximum Age : 60

2. Income
        Minimum Monthly Income : ₹25,000 

3. Employment
        Applicant must be employed.

4. Existing Loan
        Existing loan amount should not exceed ₹5,00,000.

*/

#include <stdio.h>

int main()
{
    int age, employed, ch;
    float income = 0.0, existing_loan = 0.0;

    // Read the user inputs for age, income, employment status, and existing loan amount
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Are you employed? (1 for Yes, 0 for No) : ");
    scanf("%d", &employed);

    if ((employed != 1) && (employed != 0))
    {
        printf("\nInvalid Input.\n");
        printf("Are you employed? (1 for Yes, 0 for No) : ");
        scanf("%d", &employed);
    }

    else if (employed == 1)
    {
        printf("Enter your monthly income : ");
        scanf("%f", &income);
    }
    
    
    printf("Do you have existing loan? (1 for Yes, 0 for No) : ");
    scanf("%d", &ch);
    
    if ((ch != 1) && (ch != 0))
    {
        printf("\nInvalid Input.\n");
        printf("Do you have existing loan? (1 for Yes, 0 for No) : ");
        scanf("%d", &ch);
    }

    else 
    {
        if (ch == 1)
        {
            printf("Enter your existing loan amount : ");
            scanf("%f", &existing_loan);
        }
    }

    // Check eligibility of the user for bank loan
    if ((age > 60) || (age < 21))
    {
        printf("\nLoan Eligibility Status : Not Eligible\n");
        printf("Reason : Age must be between 21 and 60.\n");
    }

    else if ((income < 25000) || (employed == 0))
    {
        printf("\nLoan Eligibility Status : Not Eligible\n");
        printf("Reason : Applicant must be employed with minimum monthly income of Rs.25,000.\n");
    }

    else if (existing_loan > 500000)
    {
        printf("\nLoan Eligibility Status : Not Eligible\n");
        printf("Reason : Existing loan amount should not exceed Rs.5,00,000.\n");
    }

    else
    {
        printf("\nLoan Eligibility Status : Eligible\n");
    }
    
    return 0;

}


/*

Sample Input 1 :
20
1
30000
1
50000

Sample Output 1 :
Enter your age : 20
Are you employed? (1 for Yes, 0 for No) : 1
Enter your monthly income : 30000
Do you have existing loan? (1 for Yes, 0 for No) : 1
Enter your existing loan amount : 50000

Loan Eligibility Status : Not Eligible
Reason : Age must be between 21 and 60.

Sample Input 2 :
23
0
0

Sample Output 2 :
Enter your age : 23
Are you employed? (1 for Yes, 0 for No) : 0
Do you have existing loan? (1 for Yes, 0 for No) : 0

Loan Eligibility Status : Not Eligible
Reason : Applicant must be employed with minimum monthly income of Rs.25,000.

Sample Input 3 :
56
1
75000
1
600000

Sample Output 3 :
Enter your age : 56
Are you employed? (1 for Yes, 0 for No) : 1
Enter your monthly income : 75000
Do you have existing loan? (1 for Yes, 0 for No) : 1
Enter your existing loan amount : 600000

Loan Eligibility Status : Not Eligible
Reason : Existing loan amount should not exceed Rs.5,00,000.

Sample Input 4 :
27
1
65000
0

Sample Output 4 :
Enter your age : 27
Are you employed? (1 for Yes, 0 for No) : 1
Enter your monthly income : 65000
Do you have existing loan? (1 for Yes, 0 for No) : 0

Loan Eligibility Status : Eligible

Sample Input 5 :
32
3
0
0

Sample Output 5 :
Enter your age : 32
Are you employed? (1 for Yes, 0 for No) : 3

Invalid Input.
Are you employed? (1 for Yes, 0 for No) : 0
Do you have existing loan? (1 for Yes, 0 for No) : 0

Loan Eligibility Status : Not Eligible
Reason : Applicant must be employed with minimum monthly income of Rs.25,000.

Sample Input 6 :
21
1
65000
0

Sample Output 6 :
Enter your age : 21
Are you employed? (1 for Yes, 0 for No) : 1
Enter your monthly income : 65000
Do you have existing loan? (1 for Yes, 0 for No) : 0

Loan Eligibility Status : Eligible

Sample Input 7 :
60
1
25000
0

Sample Output 7 :
Enter your age : 60
Are you employed? (1 for Yes, 0 for No) : 1
Enter your monthly income : 25000
Do you have existing loan? (1 for Yes, 0 for No) : 0

Loan Eligibility Status : Eligible  

*/