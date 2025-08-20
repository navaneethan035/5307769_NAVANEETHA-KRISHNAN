#include <stdio.h>

void plusMinus(int arr_count, int* arr) {

    double positive_count = 0.0;
    double negative_count = 0.0;
    double zero_count = 0.0;


    for (int i = 0; i < arr_count; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("%.6f\n", positive_count / arr_count);
    printf("%.6f\n", negative_count / arr_count);
    printf("%.6f\n", zero_count / arr_count);
}