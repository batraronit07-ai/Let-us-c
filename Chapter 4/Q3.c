#include<stdio.h>
#include<math.h>

int main() {

    int num1, num2, result;

    printf("enter first number: ");
    scanf("%d", &num1);

    printf("enter second number: ");
    scanf("%d", &num2);

    result = pow(num1, num2);

    printf("The value of %d raised to power %d is %d", num1, num2, result);
    return 0;

}