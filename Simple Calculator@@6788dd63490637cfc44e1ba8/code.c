#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%i %i  %c", &a, &b, &c);
    printf("%i", c == '+' ? a+b : c == '-' ? a-b : c == '*' ? a*b : a/b);
    return 0;
}