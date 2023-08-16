#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int i;
    printf("enter a character");

    do {
        c=getch();
        printf("the ASCII code for the character %c you entered is %i\n ",c,c);
    } while (c != 27);
    return 0;
}
