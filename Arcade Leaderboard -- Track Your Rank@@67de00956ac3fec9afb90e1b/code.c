// Your code here...

void trackPlayerRanks(int ranked[], int player[], int result[], int n, int m) {
    int dense_rank[200000];
    int rank = 1;
    dense_rank[0] = rank;

    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1]) {
            dense_rank[i] = rank;
        } else {
            dense_rank[i] = ++rank;
        }
    }

    int j = n - 1;
    for (int i = 0; i < m; i++) {
        while (j >= 0 && player[i] >= ranked[j]) {
            j--;
        }
        result[i] = (j == -1) ? 1 : dense_rank[j] + 1;
    }
}
