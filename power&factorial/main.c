#include <stdio.h>
#include <stdlib.h>

int power(int base,int p);
int factorial(int z);
int main()
{
    int x,y,z,result;
    printf("enter the base number\n");
    scanf("%i",&x);
    printf("enter the power number\n");
    scanf("%i",&y);
    z=power(x,y);
    printf("the power result is : %i\n",z);
    result=factorial(z);
    printf("\n\n the factorial of the result is: %i\n",result);
    return 0;
}

int power(int base,int p)
{
   if(p==0)
   {
       return 1;
   }
   else if(p==1)
   {
      return base;
   }
   else if(base==1)
   {
      return base;
   }
   else if(base==0)
   {
      return 0;
   }

   else
   {
       return base * power(base,p-1);
   }
}
int factorial(int z)
{
   if(z==0 || z==1)
   {
       return 1;
   }
   else if(z<0)
   {
       printf("err there can not be factorial for negative number\n");
   }
   else
   {
       return z*factorial(z-1);
   }

}
