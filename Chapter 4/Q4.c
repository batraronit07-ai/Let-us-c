#include<stdio.h>

int main() {

    int i;
   
    i = 0;
    while (i<=255)
    {
        printf("char: %c - ASCII value = %d\n", i, i);
        i = i+1;
    }

    return 0;
}