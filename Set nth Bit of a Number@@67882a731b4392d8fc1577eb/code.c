#include <stdio.h>

int main() {
    int a;
    int n;
    scanf("%i %i", &a, &n);
    printf("%i", (1 << n)^a);
    return 0;
}