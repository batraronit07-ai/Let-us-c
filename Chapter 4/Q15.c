#include<stdio.h>

int main() {

    int number, multiple;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1 ; i<=10 ; i++)
    {
        multiple = number*i;
        printf("%d * %d = %d\n", number, i, multiple);
    }
    return 0;
}
