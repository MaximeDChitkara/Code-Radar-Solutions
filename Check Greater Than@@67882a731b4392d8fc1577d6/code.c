#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
   int a = (int)strtol(argv[1], NULL, 10);
   int b = (int)strtol(argv[2], NULL, 10);
    a > b ? printf("True") : printf("False");
    return 0;
}