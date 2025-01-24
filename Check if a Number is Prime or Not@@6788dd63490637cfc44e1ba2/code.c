#include <stdio.h>

char* isPrime(int a)
{
    int i = 2;
    for(i ; i < &a; ++i)
    {
        return "oui";
    }

}

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", isPrime(a));
    return 0;
}