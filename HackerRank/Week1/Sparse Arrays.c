#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* matchingStrings(int string_list_count, char** string_list, int queries_count, char** queries, int* result_count) {
    *result_count = queries_count;
    int* results = malloc(queries_count * sizeof(int));

    for (int i = 0; i < queries_count; i++) {
        int count = 0;
        for (int j = 0; j < string_list_count; j++) {
            if (strcmp(queries[i], string_list[j]) == 0) {
                count++;
            }
        }
        results[i] = count;
    }

    return results;
}