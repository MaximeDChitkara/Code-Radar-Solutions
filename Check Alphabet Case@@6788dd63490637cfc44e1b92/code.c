#include <stdio.h>


int main() {
    char c;
    scanf("%c",&c);
    c <= 'z' && c >= 'a' ? printf("Lowercase") :
    c <= 'Z' && c >= 'A' ? printf("Uppercase") : printf("Not an alphabet");
    return 0;
}