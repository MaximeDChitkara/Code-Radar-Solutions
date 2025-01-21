#include <stdio.h>

char* welcome() {
    char* res;
    char toAdd;
    scanf("%c",&toAdd);
    res = "You entered: " + toAdd;
    return *res;
}

int main() {
    printf("%s", welcome());
    return 0;
}