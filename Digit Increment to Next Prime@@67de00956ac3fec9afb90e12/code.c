

int nextPrimeDigit(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    if (n == 4 || n == 3) return 5;
    if (n == 6 || n == 5) return 7;
    if (n == 0 || n == 8 || n == 9) return 2;
    return 2;
}

int incrementToPrimeDigits(int N) {
    int newNumber = 0;
    int place = 1;
    if(N == 0) N = 9; //Handle case for N = 0
    while (N > 0) {
        int digit = N % 10;
        int newDigit = nextPrimeDigit(digit);
        newNumber += newDigit * place;
        place *= 10;
        N /= 10;
    }
    return newNumber;
}