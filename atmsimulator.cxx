#include<stdio.h>
#include<conio.h>

void main()
{
    int choice;
    double balance = 10000.00;
    double amount;

    clrscr();

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Balance Enquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdrawal\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Available Balance = Rs. %.2lf\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%lf", &amount);

                if(amount <= 0)
                    printf("Invalid transaction amount.\n");
                else
                {
                    balance = balance + amount;
                    printf("Deposit successful.\n");
                    printf("Updated Balance = Rs. %.2lf\n", balance);
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%lf", &amount);

                if(amount <= 0)
                    printf("Invalid transaction amount.\n");
                else if(amount > balance)
                    printf("Transaction failed: Insufficient balance.\n");
                else
                {
                    balance = balance - amount;
                    printf("Withdrawal successful.\n");
                    printf("Remaining Balance = Rs. %.2lf\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid transaction choice. Please try again.\n");
        }

    } while(choice != 4);

    getch();
}