#include <stdio.h>

int main() {
    int a;
    int n;
    scanf("%i %i", &a, &n);
    printf("%i", (a & 1) >> n);
    return 0;
}