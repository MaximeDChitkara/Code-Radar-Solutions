#include <stdio.h>

int main() {
    int a;
    scanf("%i",&a);
    b = 1;
    a &= b;
    (a == 1) ? printf("Set") : printf("Not set");
    return 0;
}