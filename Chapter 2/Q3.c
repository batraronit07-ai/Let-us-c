#include<stdio.h>

int main() {

    int a, b, c, d, x, sum;

    printf("Enter the value of a: ");
    scanf("%d", &a);    

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("Enter the value of d: ");
    scanf("%d", &d);

    x = a*1000 + b*100 + c*10 + d; 

    printf("the number is: %d\n", x);

    sum = a + d;
    printf("the sum of first and last digit is: %d\n", sum);

    return 0;

}