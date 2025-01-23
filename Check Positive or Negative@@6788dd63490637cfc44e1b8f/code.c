#include <stdio.h>

int main() {
    int a;
    scanf("%i",&a);
    a > 0 ? printf("Positive") : a == 0 ? printf("Zero") : printf("Negative");
    return 0;
}