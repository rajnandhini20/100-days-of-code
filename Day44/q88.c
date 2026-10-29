/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 44 Question: 88
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q88: Replace spaces with hyphens in a string.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%99[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
