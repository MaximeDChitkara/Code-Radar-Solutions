#include <stdio.h>


int main() {
    int a;
    int n;
    scanf("%i",&a);
    scanf("%i",&n);
    int c = ~(1 << n);
    a &= !c;
    return 0;
}