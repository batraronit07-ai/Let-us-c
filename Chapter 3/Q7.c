#include <stdio.h>

int main()
{

    int time;

    printf(" The time taken by th worker is : ");
    scanf("%d", &time);

    if (time > 2 && time <= 3)
        printf("The Worker is highly efficient");

    else if (time > 3 && time <= 4)
        printf("The worker needs to improve his/her speed");

    else if (time > 4 && time <= 5)
        printf("The worker is provided with a trainer and is given proper training");

    else if (time > 5)
        printf("The worker is terminated");

    return 0;
}