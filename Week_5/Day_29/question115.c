#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    while (1)
    {
        printf("\n----- MENU -----\n");
        printf("1. String Length\n");
        printf("2. Copy String\n");
        printf("3. Reverse String\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            break;
        }

        switch (choice)
        {
            case 1:

                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:

                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:

                strcpy(str2, str1);
                strrev(str2);
                printf("Reverse = %s\n", str2);
                break;

            case 4:

                printf("Enter second string: ");
                scanf("%s", str2);

                if (strcmp(str1, str2) == 0)
                {
                    printf("Strings are Equal.\n");
                }
                else
                {
                    printf("Strings are Not Equal.\n");
                }

                break;

            default:

                printf("Invalid Choice.\n");
        }
    }

    return 0;
}