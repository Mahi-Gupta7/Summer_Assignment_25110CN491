#include <stdio.h>

int roll[100];
float marks[100];
char name[100][50];
int n = 0;

void addStudent()
{
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
}

void displayStudent()
{
    int i;

    printf("\nStudent Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName  : %s", name[i]);
        printf("\nRoll  : %d", roll[i]);
        printf("\nMarks : %.2f\n", marks[i]);
    }
}

void searchStudent()
{
    int r;
    int i;
    int found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == r)
        {
            printf("\nStudent Found\n");
            printf("Name  : %s\n", name[i]);
            printf("Roll  : %d\n", roll[i]);
            printf("Marks : %.2f\n", marks[i]);

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found\n");
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n----- MENU -----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            addStudent();
        }
        else if(choice == 2)
        {
            displayStudent();
        }
        else if(choice == 3)
        {
            searchStudent();
        }
        else if(choice == 4)
        {
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}