#include <stdio.h>

int main() {
    int a;
    scanf("%i",&a);
    int b = 1;
    b << 31;
    (a == b) ? printf("Set") : printf("Not Set");
    return 0;
}