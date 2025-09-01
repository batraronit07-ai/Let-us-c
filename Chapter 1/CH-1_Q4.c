#include<stdio.h>

int main() {

    int Temp_in_fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &Temp_in_fahrenheit);

    float Temp_in_celsius = (Temp_in_fahrenheit - 32.0) * 5.0 / 9.0;
    printf("Temperature in Celsius: %f\n", Temp_in_celsius);

    return 0;
}