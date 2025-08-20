int calculateSuperDigit(long long num) {
    if (num < 10) {
        return (int)num;
    }

    long long sum_of_digits = 0;
    while (num > 0) {
        sum_of_digits += num % 10;
        num /= 10;
    }
    
    return calculateSuperDigit(sum_of_digits);
}

int superDigit(char* n, int k) {
    long long initial_sum = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        initial_sum += n[i] - '0';
    }

    long long start_num = initial_sum * k;

    return calculateSuperDigit(start_num);
}