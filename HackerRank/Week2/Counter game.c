#include <stdio.h>

int countSetBits(unsigned long long n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int countTrailingZeros(unsigned long long n) {
    if (n == 0) return 64; // Or handle as an error, but problem constraints say n >= 1.
    int count = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        count++;
    }
    return count;
}

char* counterGame(unsigned long long n) {
    if (n == 1) {
        return "Richard";
    }

    int set_bits = countSetBits(n);
    int trailing_zeros = countTrailingZeros(n);
    
    int total_moves = set_bits + trailing_zeros - 1;

    if (total_moves % 2 == 1) {
        return "Louise";
    } else {
        return "Richard";
    }
}