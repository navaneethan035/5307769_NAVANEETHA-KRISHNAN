#include <stdlib.h>
#include <string.h>

int compare_chars(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

char* gridChallenge(int grid_count, char** grid) {
    int col_count = strlen(grid[0]);

    for (int i = 0; i < grid_count; i++) {
        qsort(grid[i], col_count, sizeof(char), compare_chars);
    }

    for (int j = 0; j < col_count; j++) {
        for (int i = 0; i < grid_count - 1; i++) {
            if (grid[i][j] > grid[i + 1][j]) {
                return "NO";
            }
        }
    }

    return "YES";
}