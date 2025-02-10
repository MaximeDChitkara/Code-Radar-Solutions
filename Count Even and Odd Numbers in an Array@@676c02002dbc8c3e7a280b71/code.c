#include <stdio.h>

int main() {
    int n;
    scanf("%i", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
    scanf("%i", &a[i]);
}
int even = 0; int odd = 0;
    for(int i = 0; i< n; ++i)
    {
        a[i]%2 == 0 ? ++even : ++odd;
    }
    printf("%i %i", even, odd);
    return 0;
}