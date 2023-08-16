#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum,difference,multiplication;
    float division;
    printf("enter the first number \n");
    scanf("%i", &x);
    printf("enter the second number \n");
    scanf("%i",&y);
    sum=x+y;
    difference=x-y;
    multiplication=x*y;
    division=x/y;
    printf(" sum of the numbers is : %i \n",sum);
    printf("difference between the numbers is : %i \n",difference);
    printf(" multiplication of the numbers is : %i \n",multiplication);
    printf(" division of the numbers is : %f \n",division);
    return 0;
}
