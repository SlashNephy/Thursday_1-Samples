extern double fact(int n);

double P(int n, int r) {
    return fact(n) / fact(n - r);
}
