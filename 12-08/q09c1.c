#include <stdio.h>

extern double fact(int n);
extern double P(int n, int r);
extern double C(int n, int r);

main () {
    int n, r;

    printf("n=");
    scanf("%d", &n);
    printf("r=");
    scanf("%d", &r);

    printf("nPr=%.0f\n", P(n, r));
    printf("nCr=%.0f\n", C(n, r));
}
