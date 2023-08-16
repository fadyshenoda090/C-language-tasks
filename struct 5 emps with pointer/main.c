#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int id;
    char name[20];
    float salary;
    char mobile[12];
};
int main()
{
 struct employee emp1;
 struct employee emp[2];
 struct employee *ptr;
 ptr=emp;
 for(int i=0;i<2;i++)
 {
     printf("enter the id for emp %i\n",i+1);
     scanf("%i",&ptr[i].id);
     printf("enter the name for emp %i\n",i+1);
     scanf("%s",&ptr[i].name);
     printf("enter the salary for emp %i\n",i+1);
     scanf("%f",&ptr[i].salary);
     printf("enter the mobile for emp %i\n",i+1);
     scanf("%s",ptr[i].mobile);
 }
 for(int i=0;i<2;i++)
 {
     printf("the id of emp %i is %i\n",i+1,ptr[i].id);
     printf("the name of emp %i is %s\n",i+1,ptr[i].name);
     printf("the salary of emp %i is %f\n",i+1,ptr[i].salary);
     printf("the mobile of emp %i is %s\n",i+1,ptr[i].mobile);
 }
    return 0;
}
