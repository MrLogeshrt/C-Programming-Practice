/*
------------------------------------------------------------------------
Program Name : Greeting Program
Author       : MrLogeshrt
Day          : 1
Program No   : 2
Description  : Accepts the user's name and displays a welcome message.

Concepts Used:
- Character Arrays
- Input/Output Functions
- scanf()
- printf()
- Strings
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    char name[50];

    // Read user's name from keyboard
    printf("Enter your name : ");
    scanf("%s", name);

    // Display greeting message
    printf("\nHello %s!\n", name);
    printf("Welcome to C Programming.\n");

    return 0;
}


/*
Sample Input:
Logesh

Sample Output:
Enter your name : Logesh

Hello Logesh!
Welcome to C Programming.
*/