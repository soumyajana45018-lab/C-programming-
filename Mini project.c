#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int choice, num1, num2, result;

    printf("MENU\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(choice)
    {
        case 1:
            result = add(num1, num2);
            printf("Result = %d", result);
            break;

        case 2:
            result = subtract(num1, num2);
            printf("Result = %d", result);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}