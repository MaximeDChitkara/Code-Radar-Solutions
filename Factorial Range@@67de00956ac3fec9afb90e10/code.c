int factorial(int n)
{
    return (n == 0 ? 1 : n*factorial(n-1)); 
}

void factorialRange(int start, int end)
{
    for(int i = start; i < end; ++i)
    printf("%i\n",factorial(i));
}