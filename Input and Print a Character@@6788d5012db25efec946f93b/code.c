#include <stdio.h>

char* welcome() {
    char* res = "You entered: ";
    char toAdd;
    scanf("%c",toAdd);
    res += toAdd +  '\n';
    return res;
}

int main() {
    printf("%s", welcome());
    return 0;
}