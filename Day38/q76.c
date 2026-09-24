/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 38 Question: 76
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Q76: Check if a matrix is symmetric.
 */
#include <stdio.h>

int main() {
    int n, m;
    int matrix[100][100];
    int symmetric = 1;

    scanf("%d %d", &n, &m);

    // A symmetric matrix must be square
    if (n != m) {
        symmetric = 0;
    }

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetric condition
    if (symmetric == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
        }
    }

    if (symmetric == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
