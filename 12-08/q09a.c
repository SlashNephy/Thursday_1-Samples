#include <stdio.h>

#define N 15
int count = 0;

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

main() {
    int n;
    for (n=0; n<=N; n++) {
        printf("%d!=%.0f\n", n, fact(n));
        count++;
    }

    printf("count=%d\n", count);
}
