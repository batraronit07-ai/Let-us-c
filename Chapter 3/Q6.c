#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Enter the lengths of the side a of the triangle:\n");
    scanf("%d", &a);

    printf("Enter the lengths of the side b of the triangle:\n");
    scanf("%d", &b);

    printf("Enter the lengths of the side c of the triangle:\n");
    scanf("%d", &c);


    if (a == c && b == c && a == b)
        {
            printf("the triangle is valid and is equilateral");
        }

    else if (a == b && b != c && a != c)
        {
            printf("the traingle is valid and is isosceles");
        }

    else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            printf("the traingle is valid and is a right angled traingle");
        }

    else if (a != c && b != c && a != b)
        {
            printf("The triangle is valid and is scalene");
        }

    return 0;
}