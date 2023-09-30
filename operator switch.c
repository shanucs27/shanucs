#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number:");
    scanf("%d %d", &a, &b);
    char op;
    printf("Enter the operator");
    scanf("%c", &op);
    switch(op)
    {
        case 1:
        printf("Addition of numbers is: %d", a+b);
        break;

        case 2:
        printf("Subtraction is: %d", a-b);
        break;

        case 3:
        printf("Multiplication is: %d", a*b);
        break;

        case 4:
        printf("Division is: %d", a/b);
        break;

        case 5:
        printf("Modulus is: %d, a % b");
        break;

        default:
        printf("Wrong input");
    }
    return 0;
}
