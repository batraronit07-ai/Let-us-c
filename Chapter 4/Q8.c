#include <stdio.h>

int main()
{

    int number, remainder;
    float dividend;

    printf("Enter the number: ");
    scanf("%d", &number);

    do
    {
        dividend = number / 8.0;
        remainder = number % 8;
        printf("remainder: %d", remainder);
    } 
    
    while (dividend == 0);
}