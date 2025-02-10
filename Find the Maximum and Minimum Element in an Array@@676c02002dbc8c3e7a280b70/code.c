#include <stdio.h>

int main() {
    int n;
    scanf("%i", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
    scanf("%i", &a[i]);
}
int mini = a[0]; int maxi = a[0];
    for(int i = 0; i < n; ++i)
    {
        if(a[i] < mini) mini = a[i];
        if(a[i] > maxi) maxi = a[i];
    }
    printf("%i %i",mini,maxi);
    return 0;
}