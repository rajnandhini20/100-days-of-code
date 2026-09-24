/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 39 Question: 78
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Q78: Find the sum of main diagonal elements for a square matrix.
 */
#include <stdio.h>

int main() {
    int n, m;
    int matrix[100][100];
    int sum = 0;

    scanf("%d %d", &n, &m);

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate main diagonal sum
    for (int i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}

