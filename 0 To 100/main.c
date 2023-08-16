#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int x=0;
    do {
        printf("the even numbers sum is %i\n",x);
        x+=2;
    }
    while(x<100);*/
        int x;
    for (int i=1;i<=100;i+=2){
        x=i;
        printf("the odd numbers are %i\n",x);
    }
    return 0;
}
