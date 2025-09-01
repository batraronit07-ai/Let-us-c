#include<stdio.h>

int main() {

    int N1, N2, N5, N10, N20,N50,N100, N,count1, count2, count5, count10, count20, count50, count100;

    printf("Enter the value of N:\n");
    scanf("%d", &N);

    count100 = N / 100;
    N100=N-(count100 * 100);
    count50 = N100 / 50;
    N50=N100-(count50 * 50);
    count20 = N50 / 20;
    N20=N50-(count20 * 20);
    count10 = N20 / 10;
    N10=N20-(count10 * 10);
    count5 = N10 / 5;
    N5=N10-(count5 * 5);
    count2 = N5 / 2;
    N2=N5-(count2 * 2);
    count1 = N2;

    printf("The number of notes of denomination 100 is: %d\n", count100);
    printf("The number of notes of denomination 50 is: %d\n", count50);
    printf("The number of notes of denomination 20 is: %d\n", count20);
    printf("The number of notes of denomination 10 is: %d\n", count10);
    printf("The number of notes of denomination 5 is: %d\n", count5);
    printf("The number of notes of denomination 2 is: %d\n", count2);
    printf("The number of notes of denomination 1 is: %d\n", count1);

    return 0;
}