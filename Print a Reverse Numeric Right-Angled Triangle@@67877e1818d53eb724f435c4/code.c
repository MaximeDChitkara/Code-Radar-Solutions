#include <stdio.h>

int main()
{
        int n;
        scanf("%i",&n);
        int cpt = 0;
        for(int i = 0; i <= n; ++i)
        {
            cpt = 1;
            for(int j = i; j > 0; --j)
            {
                printf("%i ",cpt);
                ++cpt;
            }
            printf("\n");
        }
        return 0;
}