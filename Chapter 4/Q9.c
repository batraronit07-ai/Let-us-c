#include <stdio.h>

int main()
{

    int number1, number2, number3, count, range;

    printf("How many numbers do you want to compare: ");
    scanf("%d", &count);

    printf("Enter the first number: ");
    scanf("%d", &number1);

    for (int i = 1; i < count; i++)
    {
        printf("Enter the %d number: ", i + 1 );
        scanf("%d", &number2);

        if (number1 > number2)
        {
            number3 = number2;
        }

        else if (number2 > number1)
        {
            number1 = number2;
        }

        else if (number2 < number3)
        {
            number3 = number2;
        }
    }

    printf("The highest number is %d\n", number1);
    printf("The lowest number is %d\n", number3);

    range = number1 - number3;

    printf("The range of the set of questions is %d", range);
    return 0;
}