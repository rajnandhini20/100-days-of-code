/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 43 Question: 85
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q85: Reverse a string.
 */

#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j;

    scanf("%99s", str);

    while (str[i] != '\0') {
        i++;
    }

    j = i - 1;
    i = 0;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("%s\n", str);

    return 0;
}
