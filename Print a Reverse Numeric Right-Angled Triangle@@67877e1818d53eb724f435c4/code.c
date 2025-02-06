#include <stdio.h>

int main()
{
        int n;
        scanf("%i",&n);
        int cpt = 0;
        for(int i = n; i >0 ; --i)
        {
            cpt = 1;
            for(int j = 0; j < i; ++j)
            {
                printf("%i ",cpt);
                ++cpt;
            }
            printf("\n");
        }
        return 0;
}