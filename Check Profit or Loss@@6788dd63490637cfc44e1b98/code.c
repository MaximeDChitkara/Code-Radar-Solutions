#include <stdio.h>

int main() {
    int a,b;
    scanf("%i %i",&a, &b);
    printf("%i", a == b ? printf("No Profit No Loss") : a > b ? printf("Loss") : printf("Profit"));
    return 0;
}