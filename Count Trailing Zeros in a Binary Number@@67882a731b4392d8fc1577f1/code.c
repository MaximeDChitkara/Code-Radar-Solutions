#include <stdio.h>

int main() {
    int a, rep, temp;
    rep = 0;
    scanf("%i",&a);
    while(!(a & 1))
    {
        ++rep;
        a >>= 1;
    }
    printf("%i", rep);
    return 0;
}