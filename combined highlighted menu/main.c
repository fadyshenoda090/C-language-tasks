#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

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
 struct employee
{
    int id;
    char name[20];
    float salary;
    char mobile[12];
};
void fill_emps(struct employee*,int);
void displayall_emps(struct employee*,int);
void display_1emp(struct employee*,int);
void edit(struct employee*,int);
void sal_avg(struct employee*,int);

int main()
{
   char menu[6][20]={"Add", "Edit", "Display", "Display All","sal_avg", "Exit"};
   int current_item=0;
   int normal_color=1;
   int hilighted_color=7;
   char c;
   struct emoployee[3];
   int emps_size=3;
    do
    {
    textattr(normal_color);
    system("cls");
   for(int i=0;i<5;i++)
   {
       if(i==current_item)
       {
           textattr(hilighted_color);
       }
       else
       {
        textattr(normal_color);
       }
       gotoxy(0,i);
       printf("%s",menu[i]);

   }
       c=getch();
    switch(c)
    {
   case -32:
    {
        c=getch();
        switch(c)
        {
            case 72:
                {
                    if(current_item>0)
                    {
                        current_item--;
                    }
                    break;
                }
            case 80:
                {
                   if(current_item<4)
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
                    current_item=4;
                    break;
                }
        }
    break;
    }

  case 13:
      {
          textattr(normal_color);
          system("cls");
          switch(current_item)
          {
          case 0:
            {
                printf("Add");
                fill_emps(emps,emps_size);
             break;
            }
          case 1:
            {
                 printf("Edit");
                 edit(emps,emps_size);
                break;
            }
          case 2:
            {
                 printf("Display");
                 display_1emp(emps,emps_size);
                break;
            }
          case 3:
            {
                 printf("Display All");
                 displayall_emps(emps,emps_size);
                break;
            }
            case 4:
            {
                 printf("sal_avg");
                 sal_avg(emps,emps_size);
                break;
            }
          case 5:
            {
                 printf("exit");
                 c=27;
                break;
            }
            }
      }
    }getch();
    }
    while(c!=27);
    return 0;
}
void fill_emps(struct employee,int emps_size)
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
void display_emps(struct employee,int emps_size)
{
    ptr=emp;
 for(int i=0;i<2;i++)
 {
     printf("the id of emp %i is %i\n",i+1,ptr[i].id);
     printf("the name of emp %i is %s\n",i+1,ptr[i].name);
     printf("the salary of emp %i is %f\n",i+1,ptr[i].salary);
     printf("the mobile of emp %i is %s\n",i+1,ptr[i].mobile);
 }
}
void display_1emp(struct employee,int emps_size)
{
    int index;
    printf("enter index of employee to display\n");
    scanf("%i",&index);
    if(index >0 &&index<=emps_size)
    {
     printf("the id of emp %i is %i\n",i+1,ptr[index-1].id);
     printf("the name of emp %i is %s\n",i+1,ptr[index-1].name);
     printf("the salary of emp %i is %f\n",i+1,ptr[index-1].salary);
     printf("the mobile of emp %i is %s\n",i+1,ptr[index-1].mobile);
    }
    else{
        printf("invalid index\n");
    }
}
void edit(struct employee,int emps_size)
{
    int index;
    printf("enter index of employee to edit\n");
    scanf("%i",&index);
    if(index >0 &&index<=emps_size){
     printf("enter the id for emp %i\n",i+1);
     scanf("%i",&ptr.[index-1].id);
     printf("enter the name for emp %i\n",i+1);
     scanf("%s",&ptr[index-1],name);
     printf("enter the salary for emp %i\n",i+1);
     scanf("%f",&ptr[index-1].salary);
     printf("enter the mobile for emp %i\n",i+1);
     scanf("%s",ptr[index-1].mobile);}
     else
     {
         printf("invalid index\n");
     }
 }
}
void sal_avg(struct employee,int emps_size)
{
    float x=0;
    for(int i=0;i<2;i++)
    {
        x+= struct employee ptr[i].salary;
        float avg=x/emps_size;
        printf("the average is %i\n",avg);
    }
}
