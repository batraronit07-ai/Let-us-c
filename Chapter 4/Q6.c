#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matchsticks = 21;
    int userpick, computerpick;

    printf("THE MATCHSTICK GAME\n");
    printf("There are 21 matchsticks\n");
    printf("The game is simple,\neach one of you and me have to choose a number of matchsticks \nbetween 1 and 4. the one who is forced to pich the 21st matchstick looses!!\n");
    printf("Let the game begin!!\n");

    while (matchsticks > 1)
    {
        printf("It's your turn. Pick a number from 1 to 4 : ");
        scanf("%d", &userpick);

        if (userpick < 1 || userpick > 4)
        {
            printf("This is an invalid pick. Pick once again");
            continue;
        }

        matchsticks -= userpick;

        computerpick = 5 - userpick;

        printf("The computer has picked %d \n", computerpick);

        matchsticks -= computerpick;

        if (matchsticks == 1)
        {
            printf("OOPS you are forced to pick up the last matchstick\n");
            printf("YOU LOOSE !!! :(");
            break;
        }
    }
    return 0;
}
