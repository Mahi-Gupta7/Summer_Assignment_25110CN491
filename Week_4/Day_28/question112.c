#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[20];
};

int main()
{
    struct Contact c[100];
    int n = 0;
    int choice;
    int i;
    char searchPhone[20];
    int found;

    while (1)
    {
        printf("\n----- Contact Management System -----\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                printf("Enter Name: ");
                scanf("%s", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                n++;

                printf("Contact Saved.\n");
                break;

            case 2:

                if (n == 0)
                {
                    printf("No Contacts Found.\n");
                }
                else
                {
                    for (i = 0; i < n; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);
                    }
                }

                break;

            case 3:

                printf("Enter Phone Number: ");
                scanf("%s", searchPhone);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (strcmp(c[i].phone, searchPhone) == 0)
                    {
                        printf("Contact Found\n");
                        printf("Name : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);
                        found = 1;
                    }
                }

                if (found == 0)
                {
                    printf("Contact Not Found.\n");
                }

                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }
}