/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 13 Question: 25
 * Date : 06-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 */
#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    switch(op)
    {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            printf("%d", a / b);
            break;

        case '%':
            printf("%d", a % b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
