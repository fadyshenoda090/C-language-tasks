#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter your sccore\n");
    scanf("%i",&x);
    if (x>=70 && x<80){
        printf("your grade is C\n");
    }
    else if(x>=60 && x<70){
        printf("your grade is D\n");
    }
    else if(x>=80 && x<90){
        printf("your grade is B\n");
    }
    else if(x>=90&& x<100){
        printf("your grade is A\n");
    }
    else{
        printf("your grade is F\n");
    }
    return 0;
}
