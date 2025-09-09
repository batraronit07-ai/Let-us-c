#include<stdio.h>

int main() {

    int hours, overtime_pay;

    for (int i = 1 ; i<=10 ; i++)
    {
        printf("Enter the number of hours the emplyee has wored in a week: \n");
        scanf("%d", &hours);

        if (hours <= 40)
        {
            printf("No overtime, therefore no extra pay\n");
        }

        else 
        {
            overtime_pay = 12 * (hours-40);
            printf("Extra pay is %d\n", overtime_pay);
        }
    }

    return 0;
}