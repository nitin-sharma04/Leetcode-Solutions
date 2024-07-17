double myPow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }
    if (n == INT_MIN) {
        x = 1.0 / x;
        n = INT_MAX;
        return myPow(x, n) * x;
    }
    if (n < 0) {
        x = 1.0 / x;
        n = -n;
    }
    double result = 1.0;
    while (n > 0) {
        if (n % 2 == 1) {
            result *= x;
        }
        x *= x;
        n /= 2;
    }
    return result;
}