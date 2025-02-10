#include <stdio.h>

int main() {
    int n;
    int a[n];
    scanf("%i %i", &n, &a);
    if(n <= 1) return -1;
    if(n == 2) return a[0] > a[1] ? a[0] : a[1];
    for(int i = 1; i < n-2; ++i)
    {
        if(a[i-1] < a[i] && a[i+1] < a[i]) return a[i];
    }

    return a[n-1] > a[n-2] ? a[n-1] : -1;
}