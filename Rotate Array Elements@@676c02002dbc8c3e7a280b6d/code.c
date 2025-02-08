#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int K;
    scanf("%d", &K);
    K = K % N;
    for (int start = 0, end = N - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    for (int start = 0, end = K - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    for (int start = K, end = N - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    return 0;
}
