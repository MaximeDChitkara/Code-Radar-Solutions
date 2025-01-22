#include <stdio.h>


int main() {
    int a;
    int n;
    scanf("%i",&a);
    scanf("%i",&n);
    int c = ~(1 << n);
    a &= c%1;
    printf("%i", a);
    return 0;
}