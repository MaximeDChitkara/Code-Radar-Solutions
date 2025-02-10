#include <stdio.h>


int main() {
    int n;
    scanf("%i", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
    scanf("%i", &a[i]);
}
if(n <= 1)
{
    printf("-1");
    return 0;
}
    int maxi = a[0];int dmaxi = a[1];
    for(int i = 0; i < n; ++i)
    {
        if(a[i] > maxi)
        {
            dmaxi = maxi;
            maxi = a[i];
        }
    }
    printf("%i",dmaxi);
    return 0;
}