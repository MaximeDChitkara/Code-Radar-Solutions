#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%i %i", &a,&b);
    a > b ? printf("%i",a) : printf("%i",b);
    return 0;
}