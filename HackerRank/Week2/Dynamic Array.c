#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* data;
    int size;
    int capacity;
} Sequence;

int* dynamicArray(int n, int queries_rows, int queries_columns, int** queries, int* result_count) {
    Sequence* seqs = (Sequence*)calloc(n, sizeof(Sequence));
    int lastAnswer = 0;
    
    int* results = (int*)malloc(queries_rows * sizeof(int));
    *result_count = 0;

    for (int i = 0; i < queries_rows; i++) {
        int type = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];
        
        int idx = (x ^ lastAnswer) % n;
        Sequence* current_seq = &seqs[idx];

        if (type == 1) {
            if (current_seq->size >= current_seq->capacity) {
                current_seq->capacity = (current_seq->capacity == 0) ? 4 : current_seq->capacity * 2;
                current_seq->data = (int*)realloc(current_seq->data, current_seq->capacity * sizeof(int));
            }
            current_seq->data[current_seq->size] = y;
            current_seq->size++;
        } else {
            lastAnswer = current_seq->data[y % current_seq->size];
            results[*result_count] = lastAnswer;
            (*result_count)++;
        }
    }

    for (int i = 0; i < n; i++) {
        free(seqs[i].data);
    }
    free(seqs);

    return results;
}