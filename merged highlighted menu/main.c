#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int id;
    char name[20];
    float salary;
    char mobile[12];
};


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
                    printf("add\n");
                    break;
                }
            case 1 :
                {
                    printf("edit\n");
                    break;
                }
            case 2:
                {
                    printf("display\n");
                    break;
                }
            case 3:
                {
                    printf("display all\n");
                    break;
                }
            case 4:
                {
                    printf("sal_avg\n");
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
    return 0;
}

