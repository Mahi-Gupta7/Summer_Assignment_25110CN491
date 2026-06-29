#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i;
    int choice;
    int max, min;
    int sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (1)
    {
        printf("\n----- MENU -----\n");
        printf("1. Display Array\n");
        printf("2. Maximum Element\n");
        printf("3. Minimum Element\n");
        printf("4. Sum of Elements\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            break;
        }

        switch (choice)
        {
            case 1:

                printf("Array = ");

                for (i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }

                printf("\n");
                break;

            case 2:

                max = arr[0];

                for (i = 1; i < n; i++)
                {
                    if (arr[i] > max)
                    {
                        max = arr[i];
                    }
                }

                printf("Maximum = %d\n", max);
                break;

            case 3:

                min = arr[0];

                for (i = 1; i < n; i++)
                {
                    if (arr[i] < min)
                    {
                        min = arr[i];
                    }
                }

                printf("Minimum = %d\n", min);
                break;

            case 4:

                sum = 0;

                for (i = 0; i < n; i++)
                {
                    sum = sum + arr[i];
                }

                printf("Sum = %d\n", sum);
                break;

            default:

                printf("Invalid Choice.\n");
        }
    }

    return 0;
}