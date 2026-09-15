/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 32 Question: 64
 * Date : 16-09-2026
 *
 * PROBLEM STATEMENT:
 * Q64: Find the digit that occurs the most times in an integer number.
 */
#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, i;
    int max = 0, result = 0;

    scanf("%lld", &n);

    if (n == 0) {
        count[0] = 1;
    }

    if (n < 0)
        n = -n;

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}
