#include <stdio.h>

struct Salary
{
    char name[50];
    float basic;
    float hra;
    float da;
    float gross;
};

int main()
{
    struct Salary s;

    printf("Enter Employee Name: ");
    scanf("%s", s.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &s.basic);

    s.hra = s.basic * 0.20;
    s.da = s.basic * 0.10;
    s.gross = s.basic + s.hra + s.da;

    printf("\nSalary Details\n");
    printf("-----------------------\n");
    printf("Employee Name : %s\n", s.name);
    printf("Basic Salary  : %.2f\n", s.basic);
    printf("HRA           : %.2f\n", s.hra);
    printf("DA            : %.2f\n", s.da);
    printf("Gross Salary  : %.2f\n", s.gross);

    return 0;
}