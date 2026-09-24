/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 36 Question: 72
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Q72: Find the sum of all elements in a matrix.
 */
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Read matrix and calculate sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}
