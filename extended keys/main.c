#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("extended keys\n");
    char c;
    do
    {
       c=getch();
    switch(c)
    {
   case -32:
    {
        printf("this is an extended key\n");
        c=getch();
        printf("the ASCII code for this key  is %i\n",c);
        switch(c)
        {
            case 77:
                {
                    printf("you pressed the right key\n");
                    break;
                }
            case 75:
                {
                    printf("you pressed the left key\n");
                    break;
                }
            case 71:
                {
                    printf("you pressed the home key\n");
                    break;
                }
                case 79:
                {
                    printf("you pressed the end key\n");
                    break;
                }
                case 83:
                    {
                        printf("you pressed the delete key\n");
                        break;
                    }
        }
    }
    default:
    {
        printf("this is a normal key\n");
    }
    }
    }
    while(c!=27);
    return 0;
}
