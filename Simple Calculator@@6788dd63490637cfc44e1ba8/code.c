#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%i %i %c", &a, &b, &c);
    printf("%s", c == '+' ? a+b : c == '-' ? a-b : c == '*' ? a*b : c == '/' 
    ? b == 0 ? "error" : a/b);
    return 0;
}