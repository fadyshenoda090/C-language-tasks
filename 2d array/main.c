#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades[4][5];
    for(int i=0;i<4;i++)
    {
      printf("enter the grades for student %i \n",i+1);
      printf("*******************************************************\n");

    for (int j=0;j<5;j++)
        {
        printf("enter the grade for student %i in subject %i\n",i+1,j+1);
        scanf("%i",&grades[i][j]);
        }
    }
    for(int i=0;i<4;i++)
        {
            printf("list of grades for student %i\n",i+1);
            printf("**************************************************\n");
            for(int j=0;j<5;j++)
            {
                printf("the grade of student %i in subject %i is %i\n",i+1,j+1,grades[i][j]);
            }
        }
    int sum[4]={};
    int avg[5]={};

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum[i] +=grades[i][j];
            avg[j] +=grades[i][j];
        }
        printf("the sum of grades for student %i is %i\n",i+1,sum[i]);
    }
    for (int j=0;j<5;j++)
    {
        avg[j]=avg[j]/4;
        printf("the average of grades for subject %i is %i\n",j+1,avg[j]);
    }
    return 0;
}
