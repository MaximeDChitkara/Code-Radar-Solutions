#include <stdio.h>

char* isPrime(int a)
{
    char* rep;
    int haschanged = 0;
    for(int i = 0; i < a;++i)
        a % i == 0 ? haschanged++ : a = a;
    return  haschanged > 0 ? "Not Prime" : "Prime";
}

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", isPrime(a));
    return 0;
}