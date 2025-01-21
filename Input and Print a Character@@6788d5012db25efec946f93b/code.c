#include <stdio.h>

char* welcome() {
    char* res = "You entered: ";
    char toAdd;
    scanf("%c",toAdd);
    res += toAdd;
    return res;
}

int main() {
    printf("%s", welcome());
    return 0;
}