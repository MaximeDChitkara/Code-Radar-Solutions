#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    int a = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n-a;++j)
        printf(" ");
        for(int j = 0; j < a; ++j)
        printf("*");
        printf("\n");
        ++a;       
    }
    return 0;
}