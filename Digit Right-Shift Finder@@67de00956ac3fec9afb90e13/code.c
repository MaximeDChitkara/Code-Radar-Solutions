int digitRightShift(int n)
{
    int lastDigit = n % 10;
    int rest = n / 10;

    int acc = 1;
    int temp = rest;
    while(temp > 0)
    {
        acc *= 10;
        temp /= 10;
    }

    return lastDigit * acc + rest;
}
