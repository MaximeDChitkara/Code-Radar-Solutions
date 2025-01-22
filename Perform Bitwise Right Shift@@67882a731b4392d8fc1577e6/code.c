#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%i %i", &a,&b);
    printf("%i",a>>b);
    return 0;
}