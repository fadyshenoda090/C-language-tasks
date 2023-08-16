#include <stdio.h>
#include <stdlib.h>

void swap(int,int);

int main()
{
    int num1=1;
    int num2=2;
    printf("the two numbers before the swap are %i %i\n",num1,num2);
    printf("the address of the two numbers before the swap are %i %i\n",&num1,&num2);
    swap(num1,num2);
    printf("the two numbers after the swap are %i %i\n",num1,num2);
    printf("the address of the two numbers after the swap are %i %i\n",&num1,&num2);
    return 0;
}

void swap(int num1,int num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("the two numbers inside the swap are %i %i\n",num1,num2);
    printf("the address of the two numbers inside the swap are %i %i\n",&num1,&num2);
}
