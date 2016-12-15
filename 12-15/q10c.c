#include <stdio.h>

int sosuu(int n) {
    switch (n) {
        case 1:
            return 2;
        case 2:
            return 3;
    }

    int i = sosuu(--n) + 2;
    int j, k;
    for (;; i += 2) {
        k = 1;
        for (j = 3; j <= i / 2 && k; j += 2) {
            if (i % j == 0) {
                k = 0;
            }
        }
        if (k) {
            return i;
        }
    }
}

main() {
    int n;
    printf("n=");
    scanf("%d", &n);

    printf("sosuu(n)=%d\n", sosuu(n));
}
