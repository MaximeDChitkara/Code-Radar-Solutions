#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%i %i %i", &a, &b, &c);
    printf("%s", a == b && a == c 
    ? "Equilateral" : a == b || a == c || b == c 
    ? "Isoceles" : "Scalene");
    return 0;
}