#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int id;
    char name[20];
    float salary;
    char mobile[12];
};
void fillemployees(struct employee*ptr,int emp_size);
void displayemployees (struct employee*ptr,int emp_size);
int main()
{
    struct employee emp1;
    struct employee emp[2];
    // struct employee *ptr;
    // ptr=emp;
    fillemployees(emp,2);
    displayemployees(emp,2);
    return 0;
}
void fillemployees(struct employee*ptr,int emp_size)
{
 for(int i=0;i<2;i++)
 {
     printf("enter the id for emp %i\n",i+1);
     scanf("%i",&ptr->id);
     printf("enter the name for emp %i\n",i+1);
     scanf("%s",&ptr->name);
     printf("enter the salary for emp %i\n",i+1);
     scanf("%f",&ptr->salary);
     printf("enter the mobile for emp %i\n",i+1);
     scanf("%s",ptr->mobile);
     ptr++;
 }
}
void displayemployees (struct employee*ptr,int emp_size)
{
    for(int i=0;i<emp_size;i++)
 {
     printf("the id of emp %i is %i\n",i+1,ptr[i].id);
     printf("the name of emp %i is %s\n",i+1,ptr[i].name);
     printf("the salary of emp %i is %f\n",i+1,ptr[i].salary);
     printf("the mobile of emp %i is %s\n",i+1,ptr[i].mobile);
 }
}
