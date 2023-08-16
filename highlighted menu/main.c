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

int main()
{
   char menu[5][20]={"Add", "Edit", "Display", "Display All", "Exit"};
   int current_item=0;
   int normal_color=1;
   int hilighted_color=7;
   char c;
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
             break;
            }
          case 1:
            {
                 printf("Edit");
                break;
            }
          case 2:
            {
                 printf("Display");
                break;
            }
          case 3:
            {
                 printf("Display All");
                break;
            }
          case 4:
            {
                 printf("exit");
                 c=27;
                break;
            }
            }
      }
    }//getch();
    }
    while(c!=27);
    return 0;
}
