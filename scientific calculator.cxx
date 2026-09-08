#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int choice, a, b;
    double x, y, result;

    clrscr();

    printf("===== SCIENTIFIC CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Percentage\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter two numbers: ");
        scanf("%lf %lf", &x, &y);
        printf("Result = %.2lf\n", x + y);
        break;

    case 2:
        printf("Enter two numbers: ");
        scanf("%lf %lf", &x, &y);
        printf("Result = %.2lf\n", x - y);
        break;

    case 3:
        printf("Enter two numbers: ");
        scanf("%lf %lf", &x, &y);
        printf("Result = %.2lf\n", x * y);
        break;

    case 4:
        printf("Enter dividend and divisor: ");
        scanf("%lf %lf", &x, &y);

        if (y == 0)
            printf("Error: Division by zero is not allowed.\n");
        else
            printf("Result = %.2lf\n", x / y);
        break;

    case 5:
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);

        if (b == 0)
            printf("Error: Modulus by zero is not allowed.\n");
        else
            printf("Result = %d\n", a % b);
        break;

    case 6:
        printf("Enter base and exponent: ");
        scanf("%lf %lf", &x, &y);

        result = pow(x, y);
        printf("Result = %.2lf\n", result);
        break;

    case 7:
        printf("Enter obtained value and total value: ");
        scanf("%lf %lf", &x, &y);

        if (y == 0)
            printf("Error: Total value cannot be zero.\n");
        else
            printf("Percentage = %.2lf%%\n", (x / y) * 100);
        break;

    default:
        printf("Invalid menu choice.\n");
    }

    getch();
}