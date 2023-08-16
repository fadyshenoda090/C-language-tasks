#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter a number\n");
    scanf("%i",&x);
    if (x % 2==0)
    {
      printf("the number you entered is even\n");
    }
    else{
        printf("the number you entered is odd\n");
    }
    return 0;
}
