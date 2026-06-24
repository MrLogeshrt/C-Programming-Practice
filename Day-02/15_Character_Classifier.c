/*
------------------------------------------------------------------------
Program Name : Character Classifier
Author       : MrLogeshrt
Day          : 2
Program No   : 5
Description  : Classifies a given character as an uppercase letter, lowercase letter, digit, or special character.

Concepts Used:
- Variables
- if-else Statements
- Character Handling
- ctype.h Library Functions
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    // Read a character input from the user
    printf("Enter a character : ");
    scanf(" %c", &c);

    // Classify the type of the character
    if (isupper(c))
    {
        printf("\nCharacter : %c\n", c);
        printf("Result : Uppercase Letter\n");
    }

    else if (islower(c))
    {
        printf("\nCharacter : %c\n", c);
        printf("Result : Lowercase Letter\n");
    }

    else if (isdigit(c))
    {
        printf("\nCharacter : %c\n", c);
        printf("Result : Digit\n");
    }

    else 
    {
        printf("\nCharacter : %c\n", c);
        printf("Result : Special Character\n");
    }

    return 0;
}


/*
Sample Input 1 :
a

Sample Output 1 :
Enter a character : a

Character : a
Result : Lowercase Letter

Sample Input 2 :
A

Sample Output 2 :
Enter a character : A

Character : A
Result : Uppercase Letter

Sample Input 3 :
6

Sample Output 3 :
Enter a character : 6

Character : 6
Result : Digit

Sample Input 4 :
+

Sample Output 4 :
Enter a character : +

Character : +
Result : Special Character

*/