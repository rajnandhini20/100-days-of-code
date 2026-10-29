/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 46 Question: 91
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q91: Remove all vowels from a string.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;

    scanf("%99s", str);

    while (str[i] != '\0') {
        if (str[i] != 'a' && str[i] != 'e' &&
            str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}
