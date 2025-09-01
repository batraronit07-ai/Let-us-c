#include<stdio.h>

int main() {

    int a, b, c, d, e, x, sum;

    printf("Enter the value of a: ");
    scanf("%d", &a);    

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("Enter the value of d: ");
    scanf("%d", &d);

    printf("Enter the value of e: ");
    scanf("%d", &e);

    x = a*10000 + b*1000 + c*100 + d*10 + e;

    printf("the number is: %d\n", x);

    sum = a + b + c + d + e;

    printf("the sum of the digits is: %d\n", sum);

    return 0;

}