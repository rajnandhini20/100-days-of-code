/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 45 Question: 90
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q90: Toggle case of each character in a string.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%99[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }

        i++;
    }

    printf("%s\n", str);

    return 0;
}
