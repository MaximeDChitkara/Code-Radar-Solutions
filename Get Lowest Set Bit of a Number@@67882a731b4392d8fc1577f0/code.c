#include <stdio.h>

int main() {
    int feur;
    scanf("%i",&feur);
    printf("%i", feur & -feur);
    return 0;
}