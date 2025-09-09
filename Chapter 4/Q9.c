#include <stdio.h>

int main()
{

    int num1, num2, num3, count, range;

    printf("How many numbers do you want to compare: ");
    scanf("%d", &count);

    printf("Enter the first number: ");
    scanf("%d", &num1);

    for (int i = 1; i < count; i++)
    {
        printf("Enter the %d number: ", i + 1 );
        scanf("%d", &num2);

        if (num1 > num2)
        {
            num3 = num2;
        }

        else if (num2 > num1)
        {
            num1 = num2;
        }

        else if (num2 < num3)
        {
            num3 = num2;
        }
    }

    printf("The highest number is %d\n", num1);
    printf("The lowest number is %d\n", num3);

    range = num1 - num3;

    printf("The range of the set of questions is %d", range);
    return 0;
}