#include<stdio.h>
#include<math.h>


int main() {

    int a, b, c, s, area;

    printf("Enter the lengths of the side a of the triangle:\n");
    scanf("%d", &a);

    printf("Enter the lengths of the side b of the triangle:\n");
    scanf("%d", &b);

    printf("Enter the lengths of the side c of the triangle:\n");
    scanf("%d", &c);    

    s = (a + b + c) / 2;

    area =sqrt( s * (s - a) * (s - b) * (s - c));

    printf("The area of the triangle is: %d\n", area);

return 0;

}