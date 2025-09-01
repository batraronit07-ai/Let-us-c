#include <stdio.h>
#include <math.h>

int main()
{

    int x, y;
    float r, phi;

    printf("The value of x: ");
    scanf("%d", &x);

    printf("The value of y: ");
    scanf("%d", &y);

    r = sqrt(pow(x, 2) + pow(y, 2));

    phi = atan(y / x);

    printf("the polar coordinates of cartesian coordinates %d,%d is : %f, %f ", x,y,r,phi);

    return 0;
    
}

