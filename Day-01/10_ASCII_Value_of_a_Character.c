/*
------------------------------------------------------------------------
Program Name : ASCII Value of a Character
Author       : MrLogeshrt
Day          : 1
Program No   : 10
Description  : Displays the ASCII value of a character entered by the user.

Concepts Used:
- Variables
- Character Data Type (char)
- Type Casting
- ASCII Encoding
- Input/Output Functions
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    char ch;
    
    // Read a character from the user
    printf("Enter a Character : ");
    scanf("%c", &ch);

    // Display the Character and its ASCII value
    printf("\nThe ASCII value of the character '%c' is %d.\n", ch, (int)ch);

    return 0;
}


/*
Sample Input 1 :
A

Sample Output 1 :
Enter a Character : A

The ASCII value of the character 'A' is 65.


Sample Input 2 :
a

Sample Output 2 :
Enter a Character : a

The ASCII value of the character 'a' is 97.

Sample Input 3 : 
!

Sample Output 3 :
Enter a Character : !

The ASCII value of the character '!' is 33.
*/