#include <stdio.h>

int main()
{

    int time, overtime_pay, i;

    for (i = 0; i <= 10;)
    {
        printf("Enter the number of hours the person is doing overtime: ");
        scanf("%d", &time);
        overtime_pay = 12 * time;
        printf("The pay for working %d hours overime is %d\n", time, overtime_pay);
        i = i + 1;
    }

    return 0;
}