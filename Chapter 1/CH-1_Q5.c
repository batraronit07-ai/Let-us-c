#include<stdio.h>

int main() {

    int length, breadth, radius;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    int area = length * breadth;
    float area_2 = 3.14 * radius * radius;
    printf("Area of the rectangle: %d\n", area);
    printf("Area of the circle: %f\n", area_2);

    return 0;

}