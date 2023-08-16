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
        printf("the address of item %i is %i\n",i+1,ptr);
        scanf("%i",ptr);
        ptr++;
        printf("enter the next number\n");
    }
    printf("your numbers are:\n\n\n");
    ptr=arr;
    for(int i=0;i<5;i++)
    {
        printf("the address of item %i is %i\n\n",i+1,ptr);
        printf("%i\n",*ptr);
        ptr++;

    }
    return 0;
}
