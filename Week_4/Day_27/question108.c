#include <stdio.h>

int main()
{
    char name[50];
    float s1, s2, s3, s4, s5;
    float total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &s1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &s2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &s3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f", &s4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f", &s5);

    total = s1 + s2 + s3 + s4 + s5;

    percentage = total / 5;

    printf("\n----------- MARKSHEET -----------\n");
    printf("Student Name : %s\n", name);
    printf("Subject 1    : %.2f\n", s1);
    printf("Subject 2    : %.2f\n", s2);
    printf("Subject 3    : %.2f\n", s3);
    printf("Subject 4    : %.2f\n", s4);
    printf("Subject 5    : %.2f\n", s5);
    printf("Total Marks  : %.2f\n", total);
    printf("Percentage   : %.2f%%\n", percentage);

    if (percentage >= 90)
    {
        printf("Grade        : A+\n");
    }
    else if (percentage >= 75)
    {
        printf("Grade        : A\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade        : B\n");
    }
    else if (percentage >= 40)
    {
        printf("Grade        : C\n");
    }
    else
    {
        printf("Grade        : Fail\n");
    }

    return 0;
}