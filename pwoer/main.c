#include <stdio.h>
#include <stdlib.h>

int power(int base,int p);
int main()
{
    int x,y,z;
    printf("enter the base number\n");
    scanf("%i",&x);
    printf("enter the power number\n");
    scanf("%i",&y);
    power(x,y);
    z=power(x,y);
    printf("the result is %i :\n",z);
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
