#include <stdio.h>


int main() {
    int a;
    int b;
    scanf("%i %i", &a, &b);
    !(a > 0 && b > 0) ? printf("True") : printf("False");
    return 0;
}