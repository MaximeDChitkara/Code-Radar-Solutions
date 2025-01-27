#include <stdio.h>


int main() {
    int a;
    scanf("%i", &a);
    printf("%i", a == 1 ? 31 : a == 2 ? 28 : a == 3 ? 31 : a == 4 
    ? 30 : a == 5 ? 31 : a == 6 ? 30 : a == 7 ? 31 : a == 8 ?
     31 : a == 9 ? 30 : a == 10 ?
     31 : a == 11 ? 30 : 31);
    return 0;
}