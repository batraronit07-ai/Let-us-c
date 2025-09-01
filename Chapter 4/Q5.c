#include <stdio.h>

int main()
{

    int num, a, b, c, sum;

    for (num = 0; num <= 500; num = num + 1)
    {
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;

        sum = a * a * a + b * b * b + c * c * c;

        if (sum == num)
        {
            printf("The number %d is an armstron number\n", num);
        }
    }
    return 0;
}