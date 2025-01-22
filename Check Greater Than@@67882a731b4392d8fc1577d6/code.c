#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
   int a = argv[1];
   int b = argv[2];
    a >= b ? printf("True") : printf("False");
    return 0;
}