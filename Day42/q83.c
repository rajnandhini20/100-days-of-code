/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 42 Question: 43
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q83: Count vowels and consonants in a string.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
