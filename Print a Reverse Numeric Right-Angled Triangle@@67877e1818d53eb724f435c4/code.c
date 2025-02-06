#include <stdio.h>

int main()
{
        int n;
        scanf("%i",&n);
        int cpt = n;
        for(int i = 0 ; i < n ; ++i)
        {
            cpt = n;
                for(int j = 0; j <= i; ++j)
                        {
                            printf("%i ",cpt);
                            --cpt;
                        }
                printf("\n");
        }
}