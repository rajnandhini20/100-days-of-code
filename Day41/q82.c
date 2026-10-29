/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 41 Question: 82
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q82: Print each character of a string on a new line.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
