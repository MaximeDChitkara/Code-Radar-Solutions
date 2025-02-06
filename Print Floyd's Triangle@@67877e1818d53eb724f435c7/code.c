#include <stdio.h>

#include <stdio.h>

int main()
{
        int n;
        scanf("%i",&n);
        int cpt = 1;
        for(int i = 0 ; i < n ; ++i)
        {
                for(int j = 0; j <= i; ++j)
                {        
                    printf("%i",cpt);
                    ++cpt;
                }
                printf("\n");
        }
}
