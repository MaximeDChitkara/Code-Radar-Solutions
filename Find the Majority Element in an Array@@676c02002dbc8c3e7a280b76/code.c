#include <stdio.h>

int main() {
    int n;
    scanf("%i", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
    scanf("%i", &a[i]);
}
    int p[n];
    for(int i = 0; i < n; ++i)p[i] = 0;
    for(int i = 0; i < n; ++i)
    {
        p[a[i]]++;
        if(p[a[i]] > n/2)
        {printf("%i", p[a[i]]); return 0;}
    }
    printf("-1");
    return 0;
}