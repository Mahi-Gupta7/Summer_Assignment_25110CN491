#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n = 0;
    int choice;
    int i;
    int searchId;
    int found;

    while (1)
    {
        printf("\n----- Library Management System -----\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Name: ");
                scanf("%s", b[n].name);

                printf("Enter Author Name: ");
                scanf("%s", b[n].author);

                n++;
                printf("Book Added Successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No Books Available.\n");
                }
                else
                {
                    for (i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("ID : %d\n", b[i].id);
                        printf("Name : %s\n", b[i].name);
                        printf("Author : %s\n", b[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (b[i].id == searchId)
                    {
                        printf("Book Found\n");
                        printf("Name : %s\n", b[i].name);
                        printf("Author : %s\n", b[i].author);
                        found = 1;
                    }
                }

                if (found == 0)
                {
                    printf("Book Not Found.\n");
                }

                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }
}