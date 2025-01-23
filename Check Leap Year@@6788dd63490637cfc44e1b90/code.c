#include <stdio.h>

int main() {
    int y;
    scanf("%i",&y);
    (y%4 == 0 && y%100 != 0)
        ? printf("Leap Year")
     : y%400 == 0 
        ? printf("Leap Year") : printf("Not a Leap Year");
    return 0;
}