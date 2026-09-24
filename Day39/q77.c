/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 39 Question: 77
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Q77: Check if the elements on the diagonal of a matrix are distint.
 */
#include <stdio.h>

int main() {
    int n, m;
    int matrix[100][100];
    int distinct = 1;

    scanf("%d %d", &n, &m);

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check diagonal elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
            break;
    }

    if (distinct == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
