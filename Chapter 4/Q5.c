#include<stdio.h>

int main() {

    int i, a, b, c, sum;

    for (i = 0 ; i<=500 ; i++)
    {
        a = i / 100;
        b = ( i / 10 ) % 10;
        c = i % 10;

        sum = a * a * a + b * b * b + c * c * c ;

        if (sum == i)
        {
            printf("%d is an armstrong number\n", i);
        }
    }
    return 0;
}