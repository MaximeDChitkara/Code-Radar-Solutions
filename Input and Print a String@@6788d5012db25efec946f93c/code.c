#include <stdio.h>

int main() {
    char* w= malloc(sizeof(char)*100);
    scanf("%c",&w);
    printf("You entered: %s",w);
    return 0;
}