#include <stdio.h>

int lonelyinteger(int a_count, int* a) {
    int unique_element = 0;
    for (int i = 0; i < a_count; i++) {
        unique_element ^= a[i];
    }
    return unique_element;
}