#include <stdio.h>

int main() {
    char* w = malloc(sizeof(char)*30);
    scanf("%s",w);
    printf("You entered: %s",w);
    free(w);
    return 0;
}