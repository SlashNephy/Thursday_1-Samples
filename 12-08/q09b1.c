#include <stdio.h>

#define N 15
int count = 0;

extern double fact(int n);

main() {
    int n;
    for (n=0; n<=N; n++) {
        printf("%d!=%.0f\n", n, fact(n));
        count++;
    }

    printf("count=%d\n", count);
}