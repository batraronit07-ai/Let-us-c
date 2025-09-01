#include<stdio.h>


int main() {

    int distance;

    printf("distance : ");
    scanf("%d", &distance);

    int distance_in_meters = distance * 1000;
    int distance_in_centimeters = distance * 100000;
    int distance_in_feet = distance * 3280;
    int distance_in_inches = distance * 39370;

    printf("distance in meters : %d\n", distance_in_meters);
    printf("distance in centimeters : %d\n", distance_in_centimeters);
    printf("distance in feet : %d\n", distance_in_feet);
    printf("distance in inches : %d\n", distance_in_inches);

    return 0;
}