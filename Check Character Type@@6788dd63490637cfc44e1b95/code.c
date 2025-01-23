#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    a <= '9' && a >= '0' ?
    printf("Digit") : a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y' 
    || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'u' || a == 'Y'
    ? printf("Vowel") : a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z' 
    ? printf("Consonnant") : printf("Special Character");
    return 0;
}