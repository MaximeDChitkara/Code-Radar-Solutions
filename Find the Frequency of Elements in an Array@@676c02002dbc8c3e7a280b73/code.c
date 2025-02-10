#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, *unique, *freq, unique_count = 0;
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));
    unique = malloc(n * sizeof(int));
    freq = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < unique_count; j++) {
            if (unique[j] == arr[i]) {
                freq[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            unique[unique_count] = arr[i];
            freq[unique_count++] = 1;
        }
    }

    for (int i = 0; i < unique_count; i++) printf("%d %d\n", unique[i], freq[i]);

    free(arr);
    free(unique);
    free(freq);
    return 0;
}
