#include <stdio.h>

int main()
{
        int n;
        scanf("%i",&n);
        for(int i = 0 ; i < n ; ++i)
        {
                for(int j = 0; j <= i; ++j)
                        printf("%i ", j%2);
                printf("\n");
        }
}