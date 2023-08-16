#include <stdio.h>
#include <stdlib.h>

int main()
{
    float credit;
    float interrest;
    int years;
     printf("enter your credit\n");
            scanf("%f",&credit);
        printf("enter the number of deposit years\n");
        scanf("%i",&years);
    for(int i=0;i<years;i++){

        credit+=credit*.1;
        printf("the balance after %i years will be %f\n",i+1,credit);
    }
    return 0;
}
