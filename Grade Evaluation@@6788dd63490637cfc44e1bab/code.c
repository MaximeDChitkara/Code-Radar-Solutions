#include <stdio.h>

int main() {
    char g;
    scanf("%c", &g);
    printf("%s", g == 'A' ? "Excellent" : g == 'B' ? "Good" : g == 'C' ?
    "Average" : g == 'D' ? "Below Average" : g == 'F' ? "Fail" : "Invalid grade");
    return 0;
}