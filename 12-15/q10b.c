#include <stdio.h>

int f(n) {
    switch (n) {
        case 1:
        case 2:
            return n;
        default:
            return 4 * f(n-1) - 3 * f(n-2);
    }
}

main () {
    int n;
    printf("n=");
    scanf("%d", &n);

    printf("f(n)=%d\n", f(n));
}
