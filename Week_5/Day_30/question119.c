#include <stdio.h>

int main()
{
    int n;
    int id[100];
    char name[100][50];
    float salary[100];
    int i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\nEmployee Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID : %d", id[i]);
        printf("\nName        : %s", name[i]);
        printf("\nSalary      : %.2f\n", salary[i]);
    }

    return 0;
}