int sockMerchant(int n, int ar_count, int* ar) {
    int counts[101] = {0};
    int pairs = 0;

    for (int i = 0; i < n; i++) {
        counts[ar[i]]++;
    }

    for (int i = 1; i <= 100; i++) {
        pairs += counts[i] / 2;
    }

    return pairs;
}