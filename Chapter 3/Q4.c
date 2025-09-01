#include<stdio.h>

int main () {

    int no_of_days;
    float fine;

    printf("The number of days the book is returned late is: ");
    scanf("%d", &no_of_days);

    if ( no_of_days <= 5)
    {
        fine = 0.5 * no_of_days;
        printf(" Your fine is : %f", fine);
    }

    else if ( no_of_days > 5 && no_of_days <= 10)
    {
        fine = 0.5 * 5 + 1 * (no_of_days - 5);
        printf(" Your fine is : %f", fine);
    }

    else if ( no_of_days > 10 && no_of_days <= 30)
    {
        fine = 0.5 * 5 + 1 * 5 + 5 * (no_of_days - 10);
        printf(" Your fine is : %f", fine);
    }

    else if ( no_of_days > 30)
    {
        printf(" Your membership i cancelled ");
    }

    return 0;
}