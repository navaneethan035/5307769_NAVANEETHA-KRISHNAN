#include <stdio.h>

void miniMaxSum(int arr_count, int* arr) {
    long long total_sum = 0;
    long long min_val = arr[0];
    long long max_val = arr[0];

    for (int i = 0; i < arr_count; i++) {
        total_sum += arr[i];
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    long long min_sum = total_sum - max_val;
    long long max_sum = total_sum - min_val;

    printf("%lld %lld\n", min_sum, max_sum);
}