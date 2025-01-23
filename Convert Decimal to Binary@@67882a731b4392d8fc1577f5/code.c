#include <stdio.h>

int main()
{
    int n;
    scanf("%i",&n);
    for(int i = 31; i >=0; --i)
    printf("%d", (n>>1)&1);
    return 0;
}