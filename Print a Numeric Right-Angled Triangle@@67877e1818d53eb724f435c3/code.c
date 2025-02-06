#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    int cpt = 1;
    for(int i = 1; i < n; ++i)
    {
        for(int j = 1; j < i; ++j)
        {
            printf("%i",cpt);
            ++cpt;
        }
        printf("\n");
        cpt = 1;
    }
    return 0;
}