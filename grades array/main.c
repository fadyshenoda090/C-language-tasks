#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int sum=0;
    int arr_grades[5];
    printf("enter the score of 5 subjects\n");
    for(int i=0;i<5;i++){
        printf("subject %i\n",i+1);
        scanf("%i" ,&arr_grades[i]);
        sum+=arr_grades[i];
    }
    for(int i=0;i<5;i++){
        printf("%i " ,arr_grades[i]);
    }
    float avg=0;
    int max =0;
    int min=0;
    avg=sum/5;
    for(int i=0;i<5;i++){
        if(arr_grades[i] > max){
            max=arr_grades[i];
        }
        if(arr_grades[i] < min){
            min=arr_grades[i];
        }
    }
    printf("\n sum of the scores is %i\n",sum);
    printf("the average of the scores is %f\n",avg);
    printf("the max score is %i\n",max);
    printf("the min score is %i\n",min);
    return 0;
}
