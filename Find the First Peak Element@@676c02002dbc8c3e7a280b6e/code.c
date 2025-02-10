#include <stdio.h>

int main() {
    int n;
    int a[n];
    scanf("%i %i", &n, &a);
    if(n <= 1){printf("-1");return 0;}
    if(n == 2){ printf("%i",a[0] > a[1] ? a[0] : a[1]);return 0;}
    for(int i = 1; i < n-2; ++i)
    {
        if(a[i-1] < a[i] && a[i+1] < a[i])
        { 
        printf("%i",a[i]);
        return 0;
        }
    }
    printf("%i",a[n-1] > a[n-2] ? a[n-1] : -1;)
    return 0;
}