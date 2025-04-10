int digitRightShift(int n)
{
    int temp = 0;
    int lastDigit = 0;
    int acc = 1;
    while(n > 9)
    {
        temp += n % 10;
        temp *= acc;

        acc *= 10;
        n /= 10;
    }
    lastDigit = n;
    return lastDigit * acc + temp;
}