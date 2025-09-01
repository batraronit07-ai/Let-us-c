#include <stdio.h>

int main()
{

    int i;

    for (i = 0; i <= 255; i = i + 1)
    {
        printf("ch : %c - ASCII value: %d\n", i, i);
    }

    return 0;
}
