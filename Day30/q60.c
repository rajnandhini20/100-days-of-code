/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 30 Question: 60
 * Date : 15-09-2026
 *
 * PROBLEM STATEMENT:
 * Q60: Count positive, negative, and zero elements in an array.
 */
#include <stdio.h>

int main() {
    int n, i, num;
    int positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d", positive, negative, zero);

    return 0;
}
