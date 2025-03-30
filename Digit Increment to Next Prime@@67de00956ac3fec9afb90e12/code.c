int nextPrimeDigit(int n)
{
    if(n == 1 || 2) return 2;
    if(n == 3) return 3;
    if(n == 4 || 5) return 5;
    if(n == 6 || 7) return 7;
    if(n == 0 || 8 || 9) return 2;
}
int incrementToPrimeDigits(int n)
{
    int newNumber = 0;
    int place = 1;
    while(N > 0)
    {
        int digit = N % 10;
        int newDigit = nextPrimeDigit(digit);
        newNumber += newDigit * place;
        N/=10; 
    }
    return newNumber;
}