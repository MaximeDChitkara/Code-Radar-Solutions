#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 0; j < n - i; ++j)
        {
            printf(" ");
        }
        for(int o = 0; o <2* i-1;++o)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n; i >= 1; --i)
    {
        for(int j = 0; j < n - i; ++j)
        {
            printf(" ");
        }
        for(int o = 0; o <= 2* i-1;++o)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}