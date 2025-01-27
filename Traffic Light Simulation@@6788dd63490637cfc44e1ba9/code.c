#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    printf("%s", a == 'R' ? "Stop" : a == 'G' ? "Go" : a == 'B' ? "Slow Down" : "Invalid input");
    return 0;
}