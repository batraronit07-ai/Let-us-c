#include <stdio.h>

int main(){

    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o;

    printf("Enter 15 integers:\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o);
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o);

    int profit_a, profit_b, profit_c, profit_d, profit_e, profit_f, profit_g, profit_h, profit_i, profit_j, profit_k, profit_l, profit_m, profit_n, profit_o;

    printf("Profit for each item:\n", profit_a, profit_b, profit_c, profit_d, profit_e, profit_f, profit_g, profit_h, profit_i, profit_j, profit_k, profit_l, profit_m, profit_n, profit_o);
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &profit_a, &profit_b, &profit_c, &profit_d, &profit_e, &profit_f, &profit_g, &profit_h, &profit_i, &profit_j, &profit_k, &profit_l, &profit_m, &profit_n, &profit_o);

    int cost_price_a, cost_price_b, cost_price_c, cost_price_d, cost_price_e, cost_price_f, cost_price_g, cost_price_h, cost_price_i, cost_price_j, cost_price_k, cost_price_l, cost_price_m, cost_price_n, cost_price_o;

    cost_price_a = a - profit_a;
    cost_price_b = b - profit_b;
    cost_price_c = c - profit_c;
    cost_price_d = d - profit_d;
    cost_price_e = e - profit_e;
    cost_price_f = f - profit_f;
    cost_price_g = g - profit_g;
    cost_price_h = h - profit_h;
    cost_price_i = i - profit_i;
    cost_price_j = j - profit_j;
    cost_price_k = k - profit_k;
    cost_price_l = l - profit_l;
    cost_price_m = m - profit_m;
    cost_price_n = n - profit_n;
    cost_price_o = o - profit_o;

    printf("Cost price of a: %d", cost_price_a);
    printf("\nCost price of b: %d", cost_price_b);
    printf("\nCost price of c: %d", cost_price_c);
    printf("\nCost price of d: %d", cost_price_d);
    printf("\nCost price of e: %d", cost_price_e);
    printf("\nCost price of f: %d", cost_price_f);
    printf("\nCost price of g: %d", cost_price_g);
    printf("\nCost price of h: %d", cost_price_h);
    printf("\nCost price of i: %d", cost_price_i);
    printf("\nCost price of j: %d", cost_price_j);
    printf("\nCost price of k: %d", cost_price_k);
    printf("\nCost price of l: %d", cost_price_l);
    printf("\nCost price of m: %d", cost_price_m);
    printf("\nCost price of n: %d", cost_price_n);
    printf("\nCost price of o: %d", cost_price_o);

    return 0;
}
