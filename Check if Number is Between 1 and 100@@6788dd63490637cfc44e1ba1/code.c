#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", a > 0 && a < 101 ? "In Range" : "Out of Range");
    return 0;
}