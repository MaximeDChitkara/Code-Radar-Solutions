#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    for(int i = 0; i <= n; ++i)
    {
        for(int j = 0; j < n / i;++j)
        {
            printf(' ');
        }
        printf('*');
        for(int w = 0; w < n / i;++w)
        {
            printf(' ');
        }
        printf("\n");
    }
    return 0;
}