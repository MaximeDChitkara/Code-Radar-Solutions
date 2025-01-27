#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%i %i %c", &a, &b, &c);
    printf(c == '/' && b == 0 ? '0' : "%d",
    c == '+' ? a+b :
    c == '-' ? a-b :
    c == '*' ? a*b :
    (c == '/' && b != 0) ? a/b : 0);
    return 0;
}