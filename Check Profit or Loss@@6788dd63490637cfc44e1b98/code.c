#include <stdio.h>

int main() {
    int a,b;
    scanf("%i %i",&a, &b);
    printf("%s", a == b ? "No Profit No Loss" : a > b ?"Loss" : "Profit");
    return 0;
}