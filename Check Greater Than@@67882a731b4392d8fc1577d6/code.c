#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
   int a = atoi(argv[1]);
   int b = atoi(argv[2]);
    a > b ? printf("True") : printf("False");
    return 0;
}