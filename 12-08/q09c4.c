extern double fact(int n);
extern double P(int n, int r);

double C(int n, int r) {
    return P(n, r) / fact(r);
}
