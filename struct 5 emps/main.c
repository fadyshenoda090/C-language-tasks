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
 struct employee emp[5];
 for(int i=0;i<5;i++)
 {
     printf("enter the id for emp %i\n",i+1);
     scanf("%i",&emp[i].id);
     printf("enter the name for emp %i\n",i+1);
     scanf("%s",&emp[i].name);
     printf("enter the salary for emp %i\n",i+1);
     scanf("%f",&emp[i].salary);
     printf("enter the mobile for emp %i\n",i+1);
     scanf("%s",&emp[i].mobile);
 }
 for(int i=0;i<5;i++)
 {
     printf("the id of emp %i is %i\n",i+1,emp[i].id);
     printf("the name of emp %i is %s\n",i+1,emp[i].name);
     printf("the salary of emp %i is %f\n",i+1,emp[i].salary);
     printf("the mobile of emp %i is %s\n",i+1,emp[i].mobile);
 }
    return 0;
}
