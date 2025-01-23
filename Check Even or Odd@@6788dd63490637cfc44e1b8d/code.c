#include <stdio.h>
int main() {
    int a;
    scanf("%i %i", &a);
    a % 2 == 0 ? printf("Even") : ("Odd");
    return 0;
}