#include <stdio.h>

int main()
{
    int n;
    int id[100];
    char book[100][50];
    char author[100][50];
    int i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &id[i]);

        printf("Enter Book Name: ");
        scanf("%s", book[i]);

        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }

    printf("\nLibrary Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID   : %d", id[i]);
        printf("\nBook Name : %s", book[i]);
        printf("\nAuthor    : %s\n", author[i]);
    }

    return 0;
}