#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    for(int i = 0; i < n; ++i)
    {
        printf("*");
    }
    for(int i = 0; i < n-2;++i)
    {
        printf("*");
        for(int j = 0; j < n-1;++j)
        {
            printf(" ");
        }
        printf("*");
    }
    return 0;
}