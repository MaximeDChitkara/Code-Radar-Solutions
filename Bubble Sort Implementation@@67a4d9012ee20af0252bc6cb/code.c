#include <stdio.h>
#include <stdlib.h>

// Fonction de tri à bulles
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - i - 1; j++) {  
            if (arr[j] > arr[j + 1]) {  
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fonction d'affichage du tableau
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");  
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    // Allocation dynamique du tableau
    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1; // Erreur d'allocation mémoire
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    printArray(arr, n);

    // Libération de la mémoire
    free(arr);

    return 0;
}
