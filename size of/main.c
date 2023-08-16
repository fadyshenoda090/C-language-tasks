#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float f;
    char c;
    printf("Enter an integer, a double and character\n");
    scanf("%i",&i);
    scanf("%f",&f);
    scanf("%c",&c);
    printf("Size of int is: %i bytes\n", sizeof(i));
    printf("Size of float is: %i bytes\n", sizeof(f));
    printf("Size of char is: %i bytes\n", sizeof(c));
    return 0;
}
