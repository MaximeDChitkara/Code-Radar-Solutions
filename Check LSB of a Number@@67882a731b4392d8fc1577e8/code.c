#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    (a & 1) == 1 ? printf("Set") : printf("Not Set");
    return 0;
}