#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000, amount;

    do
    {
        printf("\nATM MENU\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Current Balance = %.2f\n", balance);
        }
        else if (choice == 2)
        {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("Deposit Successful.\n");
        }
        else if (choice == 3)
        {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= balance)
            {
                balance = balance - amount;
                printf("Withdrawal Successful.\n");
            }
            else
            {
                printf("Insufficient Balance.\n");
            }
        }
        else if (choice == 4)
        {
            printf("Thank you for using ATM.\n");
        }
        else
        {
            printf("Invalid Choice.\n");
        }

    } while (choice != 4);

    return 0;
}