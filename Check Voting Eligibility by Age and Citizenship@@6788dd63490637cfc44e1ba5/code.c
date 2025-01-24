#include <stdio.h>

int main() {
    int a, b;
    scanf("%i %i",&a, &b);
    printf("%s", a > 17  && b ? "Eligible" : "Not Eligible");
    return 0;
}