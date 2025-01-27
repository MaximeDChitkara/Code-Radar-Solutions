#include <stdio.h>

int main() {
    int a;
    scanf("%i",&a);
    printf(a <= 0 || a >= 10 ? "Invalid month" : "%i",
    a == 2 ? 28 : a == 4 ? 30 : a == 6 ? 30 : a == 9 ? 30 : a == 11 ? 30 : 31);
    return 0;
}