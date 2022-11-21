#include <stdio.h>

int main()
{
    int num1, num2, result;
    char operator;

    while (1)
    {
        printf("Use +, -, * and / operators, use q for quit\n");

        printf("Enter number one: ");
        scanf("%d", &num1);
        printf("Enter number two: ");
        scanf("%d", &num2);

        printf("Enter operator: ");
        scanf(" %c", &operator);

        switch (operator)
        {
        case '+':
            result = num1 + num2;
            printf("The sum of %d and %d is %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("The difference between %d and %d is %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("The product of %d and %d is %d\n", num1, num2, result);
            break;

        case '/':
            if (num2 < 1)
            {
                printf("%d is less than 0. Division is not possible\n", num2);
                break;
            }
            else
            {
                result = num1 / num2;
                printf("%d/%d is %d\n", num1, num2, result);
                break;
            }

        case 'q':
            goto exit_loop;

        default:
            printf("Invalid operator");
            break;
        }
    }

exit_loop:;
}