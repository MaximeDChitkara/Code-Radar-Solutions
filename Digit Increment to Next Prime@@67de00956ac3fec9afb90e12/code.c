

int nextPrimeDigit(int n) {
    if (n == 1 || n == 2) return 2;
    if (n == 3) return 3;
    if (n == 4 ) return 5;
    if (n == 6 || n == 5) return 7;
    if (n == 0 || n == 8 || n == 9) return 2;
    return 2;
}

int incrementToPrimeDigits(int N) {
    int newNumber = 0;
    int place = 1;
    while (N > 0) {
        int digit = N % 10;
        int newDigit = nextPrimeDigit(digit);
        newNumber += newDigit * place;
        place *= 10;
        N /= 10;
    }
    return newNumber;
}