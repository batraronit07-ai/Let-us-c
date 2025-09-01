#include <stdio.h>

int main()
{

    int weight;

    printf("The Weight of the boxer in pounds is : ");
    scanf("%d", &weight);

    if (weight <= 115)
        printf("flyweight");

    else if (weight > 115 && weight <= 121)
        printf("bantamweight");

    else if (weight > 121 && weight <= 153)
        printf("Featherweight");

    else if (weight > 153 && weight <= 189)
        printf("Middleweight");

    else if (weight >= 190)
        printf("Heabyweight");

    return 0;
}