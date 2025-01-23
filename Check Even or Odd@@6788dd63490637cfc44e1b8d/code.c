#include <stdio.h>
int main() {
    int a;
    scanf("%i %i", &a);
    a % 2 == 0 ? printf("Even") : printf("Odd");
    return 0;
}