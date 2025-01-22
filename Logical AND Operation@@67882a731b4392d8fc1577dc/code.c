#include <stdio.h>


int main() {
    int a;
    int b;
    scanf("%i",&a);
    scanf("%i",&b);
    a > 0 && b > 0 ? printf("True") : printf("False");
    return 0;
}