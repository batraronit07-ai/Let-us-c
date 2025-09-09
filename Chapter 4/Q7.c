#include<stdio.h>

int main() {

    int number;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    char another;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number == 0)
        {
            printf("This number is zero\n");
            zero_count = zero_count + 1;
        }

        else if (number > 0)
        {
            printf("This is a positive number\n");
            positive_count = positive_count + 1;
        }

        else if (number < 0)
        {
            printf("This is a negative number\n");
            negative_count = negative_count + 1;
        }

        printf("Want to add another number y/n: \n");
        fflush(stdin);
        scanf("%c", &another);

    } 
    
    while (another == 'y');

    printf("The total positive numbers entered are %d\n", positive_count);
    printf("The total negative numbers entered are %d\n", negative_count);
    printf("The total zeros entered are %d\n", zero_count);

    return 0;
    
}
