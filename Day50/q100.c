/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 50 Question: 100
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q100: Print all sub-strings of a string.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    scanf("%99s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            if (str[j + 1] != '\0' || str[i + 1] != '\0') {
                printf(",");
            }
        }
    }

    return 0;
}
