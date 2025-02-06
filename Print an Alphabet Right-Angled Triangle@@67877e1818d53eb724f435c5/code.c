#include <stdio.h>

int main()
{
        int n;
        scanf("%i",&n);
        int cpt = 'A';
        for(int i = 0 ; i < n ; ++i)
        {
            cpt = 'A';
                for(int j = 0; j <= i; ++j)
                        {
                            printf("%c ",cpt);
                            ++cpt;
                        }
                printf("\n");
        }
}