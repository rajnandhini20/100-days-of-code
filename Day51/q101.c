/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 51 Question: 101
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not pres
 */

#include <stdio.h>

int main() {
    int nums[100], n, target, i;
    int first = -1, last = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    printf("%d,%d\n", first, last);

    return 0;
}
