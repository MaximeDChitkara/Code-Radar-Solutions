#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int isSorted = 1;
    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = 0;
            break;
        }
    }
    isSorted == 1 ? printf("Sorted\n") : printf("Not Sorted\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
