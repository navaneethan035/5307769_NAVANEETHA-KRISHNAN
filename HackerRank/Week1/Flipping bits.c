#include <stdio.h>

long flippingBits(long n) {
    return n ^ 0xFFFFFFFF;
}