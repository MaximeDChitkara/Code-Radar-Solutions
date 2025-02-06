#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    int cpt;
    for(int i = 1; i <= n; ++i)
    {
        cpt = 1;
        for(int j = 0; j < n - i; ++j)
        {
            printf(" ");
        }
        for(int o = 0; o <2* i-1;++o)
        {
            printf("%i", cpt);
        }
        printf("\n");
    }
    return 0;
}