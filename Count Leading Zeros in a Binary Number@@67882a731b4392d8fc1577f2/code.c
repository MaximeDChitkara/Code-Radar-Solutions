#include <stdio.h>


int main() {
    int a, rep, temp;
    temp = 1 << 31;
    rep = 0;
    scanf("%i",a);
    while(!(a&1) && rep < 32)
    {
        ++rep;
        a <<= 1;
    }
    return 0;
}