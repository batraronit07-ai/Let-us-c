#include<stdio.h>

int main() {

    float La1 , La2 , Lo1 , Lo2;
    double D, sine1, sine2, cosine1, cosine2, cosine3;

    printf("the value of La1 is:");
    scanf("%f", &La1);

    printf("the value of Lo1 is:");
    scanf("%f", &Lo1);

    printf("the value of La2 is:");
    scanf("%f", &La2);

    printf("the value of L02 is:");
    scanf("%f", &Lo2);

    sine1 = sin(La1);

    sine2 = sin(La2);

    cosine1 = cos(La1);

    cosine2 = cos(La2);

    cosine3 = cos(Lo2-Lo1);

    


    

}