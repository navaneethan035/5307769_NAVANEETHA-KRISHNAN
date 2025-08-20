#include <stdlib.h>

int compare_integers(const void* a, const void* b) {
    int int_a = *(const int*)a;
    int int_b = *(const int*)b;
    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}

long maxMin(int k, int arr_count, int* arr) {
    qsort(arr, arr_count, sizeof(int), compare_integers);
    
    long min_unfairness = arr[k - 1] - arr[0];
    
    for (int i = 1; i <= arr_count - k; i++) {
        long current_unfairness = arr[i + k - 1] - arr[i];
        if (current_unfairness < min_unfairness) {
            min_unfairness = current_unfairness;
        }
    }
    
    return min_unfairness;
}