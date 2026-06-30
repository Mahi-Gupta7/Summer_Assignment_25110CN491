#include <stdio.h>

int main()
{
    int n;
    int roll[100];
    float marks[100];
    char name[100][50];
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName : %s", name[i]);
        printf("\nRoll : %d", roll[i]);
        printf("\nMarks: %.2f\n", marks[i]);
    }

    return 0;
}