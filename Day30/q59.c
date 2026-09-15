/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 30 Question: 59
 * Date : 15-09-2026
 *
 * PROBLEM STATEMENT:
 * Q59: Count even and odd numbers in an array.
*/
 #include <stdio.h>

int main() {
    int n, i, num;
    int even = 0, odd = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}
