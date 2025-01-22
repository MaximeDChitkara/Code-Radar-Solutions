#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
   long a = argv[1];
   long b = argv[2];
    a > b ? printf("True") : printf("False");
    return 0;
}