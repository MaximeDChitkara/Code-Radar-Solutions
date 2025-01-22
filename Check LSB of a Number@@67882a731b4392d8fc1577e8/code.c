#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    a &= 1;
    a == 1 ? "Set" : "Not Set";
    return 0;
}