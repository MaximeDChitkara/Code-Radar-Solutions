#include <stdio.h>

int main(int argc, char** argv) {
   int a = (int)*argv[1];
   int b = (int)*argv[2];
    a > b ? printf("True") : printf("False");
    return 0;
}