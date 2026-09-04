/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 01 Question: 3
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate the area and perimeter
 * of a rectangle given its length and breadth.
 */

#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;

    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}
