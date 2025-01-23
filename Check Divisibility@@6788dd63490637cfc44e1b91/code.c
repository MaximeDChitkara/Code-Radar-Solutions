#include <stdio.h>

int main() {
    int a;
    scanf("%i",&a);
    a % 5 == 0 && a % 11 == 0 ? printf("Divisible") : printf("Not Divisible");
    return 0;
}