#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%i %i %i", &a,&b,&c);
    a*a+b*b == c*c ? printf("Valid") : a*a+c*c == b*b ? printf("Valid") : b*b+c*c == a*a ? printf("Valid") : printf("Invalid");
    return 0;
}