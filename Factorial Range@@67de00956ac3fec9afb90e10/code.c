int factorial(int n)
{
     if(n == 0) return 1; return n* factorial(n-1);
}

void factorialRange(int start, int end)
{
    for(int i = start; i < end; ++i)
    printf("%i\n",factorial(i));
}