#include <stdio.h>

int main() {
    int a;
    int n;
    scanf("%i %i",&a, &n);
    printf("%i", a>>n & 1);
    return 0;
}