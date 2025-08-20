long sumXor(long n) {

    if (n == 0) {
        return 1;
    }

    int zero_bit_count = 0;
    
    while (n > 0) {
        if ((n & 1) == 0) {
            zero_bit_count++;
        }
        n >>= 1;
    }
    

    return 1L << zero_bit_count;
}