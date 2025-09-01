#include<stdio.h>

int main() {

    int A0, A1, A2, A3, A4, A5, A6, A7, A8;
    int LA0, BA0;
    int LA1, BA1;
    int LA2, BA2;
    int LA3, BA3;
    int LA4, BA4;   
    int LA5, BA5;
    int LA6, BA6;
    int LA7, BA7;
    int LA8, BA8;
  
    printf("Enter the value of LA0: ");
    scanf("%d", &A0);

    printf("Enter the value of BA0: ");
    scanf("%d", &BA0);

    A0 = LA0 * BA0;

    printf("A0 = %d\n", A0);

    LA1 = LA0 / 2;
    BA1 = BA0 / 2;
    A1 = LA1 * BA1;

    printf("A1 = %d\n", A1);

    LA2 = LA1 / 2;
    BA2 = BA1 / 2;  
    A2 = LA2 * BA2;

    printf("A2 = %d\n", A2);

    LA3 = LA2 / 2;
    BA3 = BA2 / 2;  
    A3 = LA3 * BA3;

    printf("A3 = %d\n", A3);

    LA4 = LA3 / 2;
    BA4 = BA3 / 2;  
    A4 = LA4 * BA4; 
    
    printf("A4 = %d\n", A4);
    
    LA5 = LA4 / 2;
    BA5 = BA4 / 2;  
    A5 = LA5 * BA5;

    printf("A5 = %d\n", A5);

    LA6 = LA5 / 2;
    BA6 = BA5 / 2;  
    A6 = LA6 * BA6;

    printf("A6 = %d\n", A6);

    LA7 = LA6 / 2;
    BA7 = BA6 / 2;  
    A7 = LA7 * BA7;

    printf("A7 = %d\n", A7);

    LA8 = LA7 / 2;
    BA8 = BA7 / 2;
 
    printf("A8 = %d\n", A8);

    return 0;
}