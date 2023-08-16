#include <stdio.h>
#include <stdlib.h>

int factorial(int x);
int main()
{
    int x,z;
    printf("enter the number\n");
    scanf("%i",&x);
   // factorial(x);
    z=factorial(x);
    printf("the result is %i :\n",z);
    return 0;
}
int factorial(int x)
{
   if(x==0 || x==1)
   {
       return 1;
   }
   else if(x<0)
   {
       printf("err there can not be factorial for negative number\n");
   }
   else
   {
       return x*factorial(x-1);
   }

}
