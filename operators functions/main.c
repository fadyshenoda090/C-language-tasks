#include <stdio.h>
#include <stdlib.h>

int add(int,int);
int sub(int,int);
int multiply(int,int);
float divide (int,int);

int main()
{
    int num1, num2;
    printf("enter first number\n",num1);
    scanf("%i",&num1);
    printf("enter the second number\n",num2);
    scanf("%i",&num2);
    printf("addition = %i\n",add(num1,num2));
    printf("subtraction = %i\n",subtract(num1,num2));
    printf("multiplication = %i\n",multiply(num1,num2));
    printf("division = %.2f\n",divide(num1,num2));
    return 0;
}

int add(int num1,int num2)
{
    return num1+num2;
}

int subtract (int num1,int num2)
{
    return num1-num2;
}

int multiply(int num1,int num2)
{
    return num1*num2;
}

float divide(int num1,int num2)
{
    if(num2==0)
        {
          printf("error you can not divide by 0 try again \n");
          return 0;
        }
    else
        {

            return  (float) num1/num2;
        }
}
