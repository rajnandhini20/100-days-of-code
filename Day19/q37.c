/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 19 Question: 37
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the lcm of two numbers.
 */
#include <stdio.h>

int main() {
    int a, b, i, lcm;

    scanf("%d %d", &a, &b);

    for(i = 1; ; i++) {
        if(i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    printf("%d", lcm);

    return 0;
}
