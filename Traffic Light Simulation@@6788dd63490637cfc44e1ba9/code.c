#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    printf("%s", a == 'R' ?
     "Stop" : a == 'G' 
     ? "Go" : a == 'Y' 
     ? "Slow Down" : "Invalid input");
    return 0;
}