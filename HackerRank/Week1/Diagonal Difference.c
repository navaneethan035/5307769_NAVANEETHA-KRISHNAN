#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;
    int n = arr_rows;

    for (int i = 0; i < n; i++) {
        primary_diagonal_sum += arr[i][i];
        
        secondary_diagonal_sum += arr[i][n - 1 - i];
    }

    return abs(primary_diagonal_sum - secondary_diagonal_sum);
}