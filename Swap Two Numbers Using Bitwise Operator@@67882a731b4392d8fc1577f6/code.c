#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%i %i", &a,&b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("%i %i", a,b);
    return 0;
}