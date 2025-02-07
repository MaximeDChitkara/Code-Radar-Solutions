#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    for(int i = 0; i < n; ++n)
    {
        int a = 'A';
        for(int j = 0; j < i; ++j)
        {
            printf("%c ", (char)a);
            ++a;
            if(a > 'Z')
            a = 'A';
        }
        printf("\n");
    }
    return 0;
}