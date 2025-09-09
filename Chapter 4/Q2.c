#include<stdio.h>

int main() {

    int number, factorial;


    printf("Enter the number whose factorial is to be caculated: ");
    scanf("%d", &number);

    factorial = number;

    for (int i = 1 ; i<number ; i++)
    {
        factorial = factorial * i;
    }

    printf("factorial of %d is %d", number, factorial);
    return 0;
}