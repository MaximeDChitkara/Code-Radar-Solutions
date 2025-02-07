#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    for(int i = 0; i < n; ++i)
    {
        char a = 'A';
        for(int j = 1; j < i; ++j)
        {
            printf("%c ", a);
            ++a;
            if(a > 'Z')
            a = 'A';
        }
        printf("\n");
    }
    return 0;
}