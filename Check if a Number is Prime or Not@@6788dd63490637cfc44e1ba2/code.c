#include <stdio.h>

char* isPrime(int a)
{
    a < 2 ? return "Not Prime" :((
    for(int i ; i < a; i)
    {
        a % i == 0 ? return "Not Prime" : ++i;
    }));

}

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", isPrime(a));
    return 0;
}