#include <stdio.h>

int main() {
    int a ,b;
    scanf("%i", &a, &b);
    printf("%s", b*b == a || a*a == b ? "Yes" : "No");
    return 0;
}