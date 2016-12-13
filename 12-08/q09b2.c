extern int count;

double fact(int n) {
    double b = 1;
    int i = 1;

    while (i <= n) {
        b *= i;
        ++i;
        count++;
    }
    return b;
}