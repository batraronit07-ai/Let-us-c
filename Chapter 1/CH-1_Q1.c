#include<stdio.h>

int main() {

    int salary;

    printf("basic salary: ");
    scanf("%d" , &salary);
    
    int DA = salary * 0.4;

    int HRA = salary * 0.2;
    
    int gross_salary = salary + DA + HRA;

    printf("gross salary: %d\n", gross_salary);

    return 0;   
}