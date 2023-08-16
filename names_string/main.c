#include <stdio.h>
#include <stdlib.h>

int main()
{
    char names[5][15];
    for(int i=0;i<5;i++)
    {
        printf("enter name of student %i: \n",i+1);
        scanf("%s",names[i]);
    }
    for(int i=0;i<5;i++)
        {
            printf("the name of student %i is : %s\n",i+1,names[i]);
        }
    return 0;
}
