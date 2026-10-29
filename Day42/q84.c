/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 42 Question: 84
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q84: Convert a lowercase string to uppercase without using built-in functions.
 */
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}

