#include<stdio.h>

int main() {

    float number, factorial, series;
    float sum = 0;

    for (number = 1 ; number<=7 ; number++)
    {
        factorial = 1;
        for(int j =1 ; j<=number ; j++)
        {
            factorial = factorial * j;
        }

        series = number/factorial;

        sum = sum + series;
    }

    printf("The sum of first 7 terms of thsi series is %f", sum);
    return 0;
}