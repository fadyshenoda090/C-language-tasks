#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    do{
    printf("press a for our basic bundle\n");
    printf("press b for our advanced bundle\n");
    printf("press c for our VIP bundle\n");
    printf("press ESC to exit \n");
    c=getch();
    switch(c)
        {
        case 'a' :
        {
        printf("our basic bundle  includes 30 basic channels\n");
        }
        case 'b' :
        {
        printf("our advanced bundle  includes 30 basic channels and the World Cup channels\n");
        }
        case 'c' :
        {
         printf("our VIP bundle  includes 30 basic channels, the World Cup channels and 50 extra entertainment channels \n");
        }
        default:{
        printf("invalid choice/n");
        }
    }
    } while(c!=27);
    return 0;
}
