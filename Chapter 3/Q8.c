#include <stdio.h>

int main()
{

    int items_in_stock = 100;

    int credit, order_amount;

    printf("The credit of the customer is ");
    scanf("%d", &credit);

    printf("The order of the customer is ");
    scanf("%d", &order_amount);

    if (credit >= 7 && order_amount < items_in_stock)
        printf("Your order is shipped");

    else if (credit < 7)
        printf("Your credit is low first maintain it, then only your order wil be delivered");

    else if (credit >= 7 && order_amount > items_in_stock)
        printf("we are sorry to inforn you that we cant complete your order as it is partially out of stock. We have shipped what was there in stock, the rest will be delivered later");

    return 0;
}