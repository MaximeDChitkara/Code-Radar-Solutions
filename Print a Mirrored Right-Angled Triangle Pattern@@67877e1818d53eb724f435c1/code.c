#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    int a = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n-a;++j)
        pritnf(" ");
        for(int j = 0; j < a; ++j)
        printf("*");       
    }

    return 0;
}