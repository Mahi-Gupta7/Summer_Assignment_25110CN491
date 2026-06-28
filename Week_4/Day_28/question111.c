#include <stdio.h>

int main()
{
    int choice;
    int seats = 50;
    int num;

    while (1)
    {
        printf("\n----- Ticket Booking System -----\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Available Seats\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                printf("Number of Tickets: ");
                scanf("%d", &num);

                if (num <= seats)
                {
                    seats = seats - num;
                    printf("Ticket Booked Successfully.\n");
                }
                else
                {
                    printf("Seats Not Available.\n");
                }

                break;

            case 2:

                printf("Number of Tickets to Cancel: ");
                scanf("%d", &num);

                seats = seats + num;

                if (seats > 50)
                {
                    seats = 50;
                }

                printf("Ticket Cancelled.\n");

                break;

            case 3:
                printf("Available Seats = %d\n", seats);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }
}