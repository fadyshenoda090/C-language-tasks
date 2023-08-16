#include <stdio.h>
#include <stdlib.h>
void swap(int*,int*);

int main()
{
    int num1=8,num2=5;
    printf("the values of x & y before the swap function are:%i %i\n\n",num1,num2);
    printf("the address of num1 & num2 are:%i %i\n",&num1,&num2);
    swap(&num1,&num2);
    printf("the values of num1 & num2 after the swap function are:%i %i\n",num1,num2);
    printf("the address of num1 & num2 are:%i %i\n",&num1,&num2);
    return 0;
}

 void swap(int * x,int * y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("inside the swap function \n the values of num1 &num2 are: %i %i\n",*x,*y);
    printf("the value of pointers x &y  are %i %i\n",x,y);
}
