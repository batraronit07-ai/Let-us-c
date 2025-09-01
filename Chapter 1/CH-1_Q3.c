#include<stdio.h>

int main () {

    int marks_in_english, marks_in_math, marks_in_science, marks_in_SST, marks_in_hindi, total_marks;

    printf("Enter marks in English: ");
    scanf("%d", &marks_in_english);
    
    printf("Enter marks in Math: ");
    scanf("%d", &marks_in_math);

    printf("Enter marks in Science: ");
    scanf("%d", &marks_in_science);

    printf("Enter marks in SST: ");
    scanf("%d", &marks_in_SST);

    printf("Enter marks in Hindi: ");
    scanf("%d", &marks_in_hindi);

    total_marks = marks_in_english + marks_in_math + marks_in_science + marks_in_SST + marks_in_hindi;

    printf("Total marks obtained: %d\n", total_marks);

    float percentage = (total_marks / 500.0) * 100.0;

    printf("percentage of marks : %f", percentage);

    return 0;
}