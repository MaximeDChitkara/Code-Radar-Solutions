#include <stdio.h>

int main() {
    int n;
    int b;
    scanf("%i %i", &n, &b);
    int a[n];
    for(int i = 0; i < n; i++) {
    scanf("%i", &a[i]);
}
for(int i =0;i < n; ++i)
{
    if(a[i] == b)
    {printf("%i",i);return 0}
}
printf("-1");
    return 0;
}