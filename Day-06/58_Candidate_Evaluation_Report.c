/*
------------------------------------------------------------------------
Program Name : Candidate Evaluation Report
Author       : MrLogeshrt
Day          : 6
Program No   : 8
Description  : Evaluates candidates based on their scores,
               calculating the highest score,
               lowest score, average score,
               and counting qualified candidates.
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

1. Candidate count must be between 1 and 100.
2. Score must be between 0 and 100.
3. Average Score = Total Score / Candidate Count.
4. Candidates scoring 60 or above are considered qualified.
------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n;
    int max_score, min_score, top_performer;
    int total_score = 0, above_average = 0;
    int qualified = 0;

    do
    {
        printf("\nEnter the number of candidates : ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("\nCount must be greater than zero.\n");
        }

        else if (n > 100)
        {
            printf("\nCandidate count must not exceed 100.\n");
        }

    } while (n <= 0 || n > 100);

    int score[n];

    // Read candidate scores and generate evaluation statistics
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter score of candidate %d : ", i + 1);
        scanf("%d", &score[i]);

        if (score[i] < 0 || score[i] > 100)
        {
            printf("\nScore must be between 0 and 100.\n");
            i--;
            continue;
        }

        if (i == 0)
        {
            max_score = score[i];
            min_score = score[i];
            top_performer = 1;
        }
        else
        {
            if (score[i] > max_score)
            {
                max_score = score[i];
                top_performer = i + 1;
            }

            if (score[i] < min_score)
            {
                min_score = score[i];
            }
        }

        if (score[i] >= 60)
        {
            qualified++;
        }

        total_score += score[i];
    }

    float average = (float) total_score / n;

    // Count candidates scoring above the class average
    for (int i = 0; i < n; i++)
    {
        if (score[i] > average)
        {
            above_average++;
        }
    }

    // Display the candidate evaluation report
    printf("\n=======================================================\n");
    printf("\tCandidate Evaluation Report\n");
    printf("=======================================================\n");
    printf("Total Candidates            : %d\n", n);
    printf("Average Score               : %.2f\n", average);
    printf("Highest Candidate Score     : %d\n", max_score);
    printf("Lowest Candidate Score      : %d\n", min_score);
    printf("Top Performer               : Candidate %d\n", top_performer);
    printf("Above Average Candidates    : %d\n", above_average);
    printf("Qualified Candidates        : %d\n", qualified);
    printf("Not Qualified Candidates    : %d\n", n - qualified);
    printf("Qualified Percentage        : %d%%\n", (qualified * 100) / n);
    printf("=======================================================\n");


    return 0;

}


/*
========================================================================

Sample Input 1 :
5
60
85
75
90
70

Sample Output 1 :

Enter the number of candidates : 5

Enter score of candidate 1 : 60
Enter score of candidate 2 : 85
Enter score of candidate 3 : 75
Enter score of candidate 4 : 90
Enter score of candidate 5 : 70

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 5
Average Score               : 76.00
Highest Candidate Score     : 90
Lowest Candidate Score      : 60
Top Performer               : Candidate 4
Above Average Candidates    : 2
Qualified Candidates        : 4
Not Qualified Candidates    : 1
Qualified Percentage        : 80%
=======================================================

========================================================================

Sample Input 2 :
4
60
60
60
60

Sample Output 2 :

Enter the number of candidates : 4

Enter score of candidate 1 : 60
Enter score of candidate 2 : 60
Enter score of candidate 3 : 60
Enter score of candidate 4 : 60

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 4
Average Score               : 60.00
Highest Candidate Score     : 60
Lowest Candidate Score      : 60
Top Performer               : Candidate 1
Above Average Candidates    : 0
Qualified Candidates        : 4
Not Qualified Candidates    : 0
Qualified Percentage        : 100%
=======================================================

========================================================================

Sample Input 3 :
1
50

Sample Output 3 :

Enter the number of candidates : 1

Enter score of candidate 1 : 50

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 1
Average Score               : 50.00
Highest Candidate Score     : 50
Lowest Candidate Score      : 50
Top Performer               : Candidate 1
Above Average Candidates    : 0
Qualified Candidates        : 0
Not Qualified Candidates    : 1
Qualified Percentage        : 0%
=======================================================

========================================================================

Sample Input 4 :
6
100
110
120
130
140
150

Sample Output 4 :

Enter the number of candidates : 6

Enter score of candidate 1 : 100
Enter score of candidate 2 : 110
Enter score of candidate 3 : 120
Enter score of candidate 4 : 130
Enter score of candidate 5 : 140
Enter score of candidate 6 : 150

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 6
Average Score               : 125.00
Highest Candidate Score     : 150
Lowest Candidate Score      : 100
Top Performer               : Candidate 6
Above Average Candidates    : 6
Qualified Candidates        : 6
Not Qualified Candidates    : 0
Qualified Percentage        : 100%
=======================================================

========================================================================

Sample Input 5 :
5
20
30
40
50
60

Sample Output 5 :

Enter the number of candidates : 5

Enter score of candidate 1 : 20
Enter score of candidate 2 : 30
Enter score of candidate 3 : 40
Enter score of candidate 4 : 50
Enter score of candidate 5 : 60

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 5
Average Score               : 40.00
Highest Candidate Score     : 60
Lowest Candidate Score      : 20
Top Performer               : Candidate 5
Above Average Candidates    : 1
Qualified Candidates        : 1
Not Qualified Candidates    : 4
Qualified Percentage        : 20%
=======================================================

========================================================================

Sample Input 6 :
7
0
40
80
100
60
100
100

Sample Output 6 :

Enter the number of candidates : 7

Enter score of candidate 1 : 0
Enter score of candidate 2 : 40
Enter score of candidate 3 : 80
Enter score of candidate 4 : 100
Enter score of candidate 5 : 60
Enter score of candidate 6 : 100
Enter score of candidate 7 : 100

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 7
Average Score               : 68.57
Highest Candidate Score     : 100
Lowest Candidate Score      : 0
Top Performer               : Candidate 4
Above Average Candidates    : 4
Qualified Candidates        : 5
Not Qualified Candidates    : 2
Qualified Percentage        : 71%
=======================================================

========================================================================

Sample Input 7 :
3
81
82
83

Sample Output 7 :

Enter the number of candidates : 3

Enter score of candidate 1 : 81
Enter score of candidate 2 : 82
Enter score of candidate 3 : 83

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 3
Average Score               : 82.00
Highest Candidate Score     : 83
Lowest Candidate Score      : 81
Top Performer               : Candidate 3
Above Average Candidates    : 1
Qualified Candidates        : 3
Not Qualified Candidates    : 0
Qualified Percentage        : 100%
=======================================================

========================================================================

Sample Input 8 :
5
55
55
55
55
55

Sample Output 8 :

Enter the number of candidates : 5

Enter score of candidate 1 : 55
Enter score of candidate 2 : 55
Enter score of candidate 3 : 55
Enter score of candidate 4 : 55
Enter score of candidate 5 : 55

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 5
Average Score               : 55.00
Highest Candidate Score     : 55
Lowest Candidate Score      : 55
Top Performer               : Candidate 1
Above Average Candidates    : 0
Qualified Candidates        : 0
Not Qualified Candidates    : 5
Qualified Percentage        : 0%
=======================================================

========================================================================

Sample Input 9 :
4
65
75
85
95

Sample Output 9 :

Enter the number of candidates : 4

Enter score of candidate 1 : 65
Enter score of candidate 2 : 75
Enter score of candidate 3 : 85
Enter score of candidate 4 : 95

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 4
Average Score               : 80.00
Highest Candidate Score     : 95
Lowest Candidate Score      : 65
Top Performer               : Candidate 4
Above Average Candidates    : 2
Qualified Candidates        : 4
Not Qualified Candidates    : 0
Qualified Percentage        : 100%
=======================================================

========================================================================

Sample Input 10 :
6
100
100
100
100
100
100

Sample Output 10 :

Enter the number of candidates : 6

Enter score of candidate 1 : 100
Enter score of candidate 2 : 100
Enter score of candidate 3 : 100
Enter score of candidate 4 : 100
Enter score of candidate 5 : 100
Enter score of candidate 6 : 100

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 6
Average Score               : 100.00
Highest Candidate Score     : 100
Lowest Candidate Score      : 100
Top Performer               : Candidate 1
Above Average Candidates    : 0
Qualified Candidates        : 6
Not Qualified Candidates    : 0
Qualified Percentage        : 100%
=======================================================

========================================================================

Sample Input 11 :
5
50
60
70
80
90

Sample Output 11 :

Enter the number of candidates : 5

Enter score of candidate 1 : 50
Enter score of candidate 2 : 60
Enter score of candidate 3 : 70
Enter score of candidate 4 : 80
Enter score of candidate 5 : 90

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 5
Average Score               : 70.00
Highest Candidate Score     : 90
Lowest Candidate Score      : 50
Top Performer               : Candidate 5
Above Average Candidates    : 2
Qualified Candidates        : 4
Not Qualified Candidates    : 1
Qualified Percentage        : 80%
=======================================================

========================================================================

Sample Input 12 :
4
0
0
0
0

Sample Output 12 :

Enter the number of candidates : 4

Enter score of candidate 1 : 0
Enter score of candidate 2 : 0
Enter score of candidate 3 : 0
Enter score of candidate 4 : 0

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 4
Average Score               : 0.00
Highest Candidate Score     : 0
Lowest Candidate Score      : 0
Top Performer               : Candidate 1
Above Average Candidates    : 0
Qualified Candidates        : 0
Not Qualified Candidates    : 4
Qualified Percentage        : 0%
=======================================================

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter the number of candidates : 0

Count must be greater than zero.

Enter the number of candidates : 3

Enter score of candidate 1 : 60
Enter score of candidate 2 : 85
Enter score of candidate 3 : 75

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 3
Average Score               : 73.33
Highest Candidate Score     : 85
Lowest Candidate Score      : 60
Top Performer               : Candidate 2
Above Average Candidates    : 1
Qualified Candidates        : 3
Not Qualified Candidates    : 0
Qualified Percentage        : 100%
=======================================================

========================================================================

Sample Input 14 :
101

Sample Output 14 :

Enter the number of candidates : 101

Candidate count must not exceed 100.

Enter the number of candidates : 4

Enter score of candidate 1 : 70
Enter score of candidate 2 : 80
Enter score of candidate 3 : 90
Enter score of candidate 4 : 100

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 4
Average Score               : 85.00
Highest Candidate Score     : 100
Lowest Candidate Score      : 70
Top Performer               : Candidate 4
Above Average Candidates    : 2
Qualified Candidates        : 4
Not Qualified Candidates    : 0
Qualified Percentage        : 100%
=======================================================

========================================================================

Sample Input 15 :
5
-10
60
105
75
85

Sample Output 15 :

Enter the number of candidates : 5

Enter score of candidate 1 : -10

Score must be between 0 and 100.

Enter score of candidate 1 : 60
Enter score of candidate 2 : 105

Score must be between 0 and 100.

Enter score of candidate 2 : 75
Enter score of candidate 3 : 85
Enter score of candidate 4 : 80
Enter score of candidate 5 : 90

=======================================================
	Candidate Evaluation Report
=======================================================
Total Candidates            : 5
Average Score               : 79.00
Highest Candidate Score     : 90
Lowest Candidate Score      : 60
Top Performer               : Candidate 5
Above Average Candidates    : 3
Qualified Candidates        : 5
Not Qualified Candidates    : 0
Qualified Percentage        : 100%
=======================================================

========================================================================
*/