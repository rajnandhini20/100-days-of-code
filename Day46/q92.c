/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 46 Question: 92
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q92: Find the first repeating lowercase alphabet in a string.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i, j, found = 0;

    scanf("%99s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < i; j++) {
            if (str[i] == str[j] &&
                str[i] >= 'a' && str[i] <= 'z') {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }

        if (found == 1) {
            break;
        }
    }

    if (found == 0) {
        printf("No repeating character");
    }

    return 0;
}
