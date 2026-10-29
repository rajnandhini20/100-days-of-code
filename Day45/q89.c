/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 45 Question: 89
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q89: Count frequency of a given character in a string.
 */

#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    scanf("%99s", str);
    scanf(" %c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}

