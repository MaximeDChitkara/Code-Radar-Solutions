#include <stdio.h>

int main()
{
        int n;
        scanf("%i",&n);
        int c = 'A';
        for(int i = 0 ; i < n ; ++i)
        {
            c = 'A';
                for(int j = 0; j <= i; ++j)
                {        
                    printf("%c ", c);
                    ++c;
                    if(c > 'Z')
                    c = 'A';
                }
                printf("\n");
        }
}