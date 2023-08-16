#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int *ptr;
    ptr=arr;
    printf("enter five numbers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%i",&ptr[i]);
        printf("enter te next number\n");
    }
    printf("your numbers are: \n ");
    for(int i=0;i<5;i++)
    {
        printf("%i\n",ptr[i]);
    }
    return 0;
}
