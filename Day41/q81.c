/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 36 Question: 71
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q81: Count characters in a string without using built-in length functions.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        i++;
    }

    printf("%d", i);

    return 0;
}
