#include <stdio.h>

int main()
{

    float Hardness, carbon_content, tensile_strength;

    printf("the hardness of steel is:");
    scanf("%f", &Hardness);

    printf("the carbon content of steel is:");
    scanf("%f", &carbon_content);

    printf("the tensile strength of steel is:");
    scanf("%f", &tensile_strength);

    if (Hardness > 50 && carbon_content > 0.7 && tensile_strength > 5600)
        printf("It is a grade 10 steel");

    else if (Hardness > 50 && carbon_content > 0.7 && tensile_strength < 5600)
        printf("It is a grade 9 steel");

    else if (Hardness < 50 && carbon_content > 0.7 && tensile_strength > 5600)
        printf("It is a grade 8 steel");

    else if (Hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
        printf("It is a grade 7 steel");

    else if (Hardness > 50 || carbon_content > 0.7 || tensile_strength > 5600)
        printf("It is a grade 6 steel");

    else if (Hardness < 50 && carbon_content < 0.7 && tensile_strength < 5600)
        printf("It is a grade 5 steel");

    return 0;
}