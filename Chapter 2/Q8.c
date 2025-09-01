#include<stdio.h>
#include<math.h>

int main() {

    double angle_radian, angle_degrees, sine, cosine, sum_of_squares;

    printf("The angle in radians is:");
    scanf("%f", &angle_radian);

    angle_radian = angle_degrees * ( 3.14 / 180.0);
    
    sine = sin(angle_radian);
    cosine = cos(angle_radian);

    sum_of_squares = pow(sine, 2) + pow(cosine, 2);

    printf("the sum of squares of sine and cosine is %f", sum_of_squares);

    return 0;

    
}