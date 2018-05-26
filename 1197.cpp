#include <stdio.h>
#include <conio.h>

int main()
{
    int X, Z,t;
     char Y;
        scanf("%d",&t);
        while(t--){
        	scanf("%c%d",&Y, &Z);
 	  switch ( Y )
        {
        case 'a': Y = 1;
            break;
        case 'b': Y = 2;
            break;
        case 'c': Y = 3;
            break;
        case 'd': Y = 4;
            break;
        case 'e': Y = 5;
            break;
        case 'f': Y = 6;
            break;
        case 'g': Y = 7;
            break;
        case 'h': Y = 8;
            break;
        default:
            break;
        }

        if (Y == 1 && Z == 1 || Y == 1 && Z == 8 || Y == 8 && Z == 1 || Y == 8 && Z == 8) {
        printf("2");
    } else if(Y == 1 && Z == 2 || Y == 1 && Z == 7 || Y == 2 && Z == 1 || Y == 2 && Z == 8 || Y == 7 && Z == 1 || Y == 7 && Z == 8 || Y == 8 && Z == 2 || Y == 8 && Z == 7) {
            printf("3");
        } else if (Y == 1 && Z == 3 || Y == 1 && Z == 4 || Y == 1 && Z == 5 || Y == 1 && Z == 6 || Y == 8 && Z == 3 || Y == 8 && Z == 4 || Y == 8 && Z == 5 || Y == 8 && Z == 6 || Z == 1 && Y == 3 || Z == 1 && Y == 4 || Z == 1 && Y == 5 || Z == 1 && Y == 6 || Z == 8 && Y == 3 || Z == 8 && Y == 4 || Z == 8 && Y == 5 || Z == 8 && Y == 6 || Y == 2 && Z == 2 || Y == 2 && Z == 7 || Y == 7 && Z == 2 || Y == 7 && Z == 7) {
                printf("4");
            } else if(Y == 2 && Z == 3 || Y == 2 && Z == 4 || Y == 2 && Z == 5 || Y == 2 && Z == 6 || Y == 7 && Z == 3 || Y == 7 && Z == 4 || Y == 7 && Z == 5 || Y == 7 && Z == 6 || Z == 2 && Y == 3 || Z == 2 && Y == 4 || Z == 2 && Y == 5 || Z == 2 && Y == 6 || Z == 7 && Y == 3 || Z == 7 && Y == 4 || Z == 7 && Y == 5 || Z == 7 && Y == 6) {
                    printf("6");
                } else if(Y == 3 && Z == 3 || Y == 3 && Z == 4 || Y == 3 && Z == 5 || Y == 3 && Z == 6 || Y == 4 && Z == 3 || Y == 4 && Z == 4 || Y == 4 && Z == 5 || Y == 4 && Z == 6 || Y == 5 && Z == 3 || Y == 5 && Z == 4 || Y == 5 && Z == 5 || Y == 5 && Z == 6 || Y == 6 && Z == 3 || Y == 6 && Z == 4 || Y == 6 && Z == 5 || Y == 6 && Z == 6) {
                        printf("8");
                   } }
				   return 0;

}
