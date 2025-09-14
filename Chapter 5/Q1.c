#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number, factorial, operation;

    int another;

    do
    {
        printf("enter a number: ");
        scanf("%d", &number);

        printf("Which operation are you using\n");
        printf("enter 1 if you want to find factorial\n");
        printf("enter 2 if you want to check whether the number is prime or not\n");
        printf("enter 3 if you want to check whether the number is odd or even\n");
        scanf("%d", &operation);

        switch (operation)
        {
        case 1:

            factorial = 1;
            for (int i = 1; i <= number; i++)
            {
                factorial = factorial * i;
            }
            printf("factorial of %d is %d", number, factorial);
            break;

        case 2:

            if (number == 1)
            {
                printf("This is not a prime number");
            }
            else if (number == 2 || number == 3)
            {
                printf("This is a prime number");
            }
            else
            {
                for (int i = 2; i * i <= number; i++)
                {
                    if (number % i == 0)
                    {
                        printf("this is not a prime number");
                    }
                    else
                    {
                        printf("This is a prime number");
                    }
                }
            }
            break;
        case 3:

            if (number % 2 == 0)
            {
                printf("this number is even");
            }
            else
            {
                printf("this number is odd");
            }
            break;
        }

        printf("\nWant to do it again, if yes enter 1 and if not enter 2: ");
        scanf("%d", &another);
    }

    while (another == 1);
    return 0;
}