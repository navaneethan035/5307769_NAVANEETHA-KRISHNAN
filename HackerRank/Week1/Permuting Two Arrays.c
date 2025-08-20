#include <stdlib.h>

int compare_asc(const void *a, const void *b) {
   return (*(int*)a - *(int*)b);
}

int compare_desc(const void *a, const void *b) {
   return (*(int*)b - *(int*)a);
}

char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {
    qsort(A, A_count, sizeof(int), compare_asc);
    qsort(B, B_count, sizeof(int), compare_desc);
    
    for (int i = 0; i < A_count; i++) {
        if (A[i] + B[i] < k) {
            return "NO";
        }
    }
    
    return "YES";
}