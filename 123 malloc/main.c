#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
struct employee
{
    int id;
    char name[20];
    float salary;
    char mobile[12];
};
void fillemployees(struct employee*ptr,int emp_size);
void DisplayAllEmployees (struct employee*ptr,int emp_size);
void edit (struct employee*ptr,int emp_size);
void displayemployee(struct employee*ptr,int emp_size);
void sal_avg (struct employee*ptr,int emp_size);

void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}

 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

int main()
{
    char menu[6][12]={"add","edit","display","display all","sal_avg","exit"};
    int current_item=0;
    int normal_color=10;
    int highlighted_color=100;
    char mych;
    int emp_size;
    printf("enter number of employees: \n");
    scanf("%i",&emp_size);
    struct employee * emp_ptr;
    emp_ptr=malloc (emp_size * sizeof(struct employee));
    do
    {
        textattr(normal_color);
        system("cls");
        for(int i=0;i<6;i++)
        {
            if(i==current_item)
            {
                textattr(highlighted_color);
            }
            else
            {
                textattr(normal_color);
            }

            gotoxy(0,i);
            printf("%s",menu[i]);
        }
      mych=getch();
      switch(mych)
      {
      case 72:
        {if(current_item>0)
        {
            current_item--;
        }
            break;
        }
      case 80:
        {
            if(current_item<5)
            {
                current_item++;
            }
            break;
        }
      case 73:
        {
            current_item=0;
            break;
        }
      case 81:
          {
              current_item=5;
              break;
          }

      case 13:
        {
          system("cls");
            switch(current_item)
            {
            case 0:
                {
                    printf("add your data\n");
                    fillemployees(emp_ptr,emp_size);
                    break;
                }
            case 1 :
                {
                    printf("edit\n");
                    edit(emp_ptr,emp_size);
                    break;
                }
            case 2:
                {
                    printf("display\n");
                    displayemployee(emp_ptr,emp_size);
                    break;
                }
            case 3:
                {
                    printf("display all\n");
                    DisplayAllEmployees(emp_ptr,emp_size);
                    break;
                }
            case 4:
                {
                    printf("sal_avg\n");
                    sal_avg(emp_ptr,emp_size);
                    break;
                }
            case 5:
                {
                printf("exit\n");
                mych=27;
                }
                break;
        }
        getch();
        }
        }
    }
    while(mych!=27);
    free(emp_ptr);
    return 0;
}
void fillemployees(struct employee*ptr,int emp_size)
{
 for(int i=0;i<emp_size;i++)
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
void DisplayAllEmployees (struct employee*ptr,int emp_size)
{
    for(int i=0;i<emp_size;i++)
 {
     printf("the id of emp %i is %i\n",i+1,ptr[i].id);
     printf("the name of emp %i is %s\n",i+1,ptr[i].name);
     printf("the salary of emp %i is %f\n",i+1,ptr[i].salary);
     printf("the mobile of emp %i is %s\n",i+1,ptr[i].mobile);
 }
}
void displayemployee(struct employee*ptr,int emp_size)
{
    int index;
    int i=0;
    printf("enter index of employee to display\n");
    scanf("%i",&index);
    if(index>0 && index<emp_size)
    {
     printf("the id of emp %i is %i\n",i+1,ptr[index-1].id);
     printf("the name of emp %i is %s\n",i+1,ptr[index-1].name);
     printf("the salary of emp %i is %f\n",i+1,ptr[index-1].salary);
     printf("the mobile of emp %i is %s\n",i+1,ptr[index-1].mobile);
    }
    else
    {
        printf("sorry you entered invalid index\n");
    }
}
void edit (struct employee*ptr,int emp_size)
{
    int index;
    int i=0;
    printf("enter index of employee to edit\n");
     scanf("%i",&index);
    if(index>0 && index<emp_size)
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
    else
    {
        printf("sorry you entered invalid index\n");
    }
}
void sal_avg (struct employee*ptr,int emp_size)
{
    float result=0;
   float average;
    for(int i=0;i<emp_size;i++)
    {
        result+= ptr[i].salary;

    }
        average =result/emp_size;
        printf("average is %.2f: \n",average);
}
