#include <stdio.h>

int main() {
    int a,b;
    scanf("%i %i", &a, &b);
    printf("%s", a % b == 0 ? "Yes" : "No");
    return 0;
}