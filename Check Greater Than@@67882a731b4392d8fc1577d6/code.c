#include <stdio.h>

int main(int argc, char** argv) {
   int a = strtol(argv[1], NULL, 10);
   int b = strtol(argv[2], NULL, 10);
    a > b ? printf("True") : printf("False");
    return 0;
}