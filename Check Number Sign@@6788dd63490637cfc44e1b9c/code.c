#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", a < 0 ? " Negative" : a == 0 ? "Zero" : "Positive");
    return 0;
}