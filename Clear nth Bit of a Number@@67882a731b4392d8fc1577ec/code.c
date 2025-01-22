#include <stdio.h>

int main() {
    int a;
    int n;
    scanf("%i %i", &a, &n);
    int c = ~(1 << n);
    a &= c;
    printf("%i", a);
    return 0;
}