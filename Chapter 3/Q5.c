#include <stdio.h>

int main()
{

    int a, b, c;

    printf("the length of side a is : ");
    scanf("%d", &a);

    printf("the length of side b is : ");
    scanf("%d", &b);

    printf("the length of side c is : ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("The triangle is valid");

    else
        printf("the triangle is invalid");

    return 0;
    
}