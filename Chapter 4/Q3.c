#include<stdio.h>
#include<math.h>

int main() {

    int a, b, power;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    power = pow(a,b);

    printf("The value of a raised to the power of b is: %d", power);
    return 0;
}