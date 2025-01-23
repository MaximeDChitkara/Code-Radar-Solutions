#include <stdio.h>

char* isPrime(int a)
{
    for(int i = 0; i < a;++i)
        a % i == 0 ? return "No" : a = a;
    return "Yes";
}

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", isPrime(a));
    return 0;
}