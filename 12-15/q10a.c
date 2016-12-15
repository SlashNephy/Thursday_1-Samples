#include <stdio.h>

int f(int n) {
    int i;
    int x = 1;
    
    for (i=1; i<n; i++) {
        x += f(i);
    }

    return x;
}

main () {
    int n;
    printf("n=");
    scanf("%d", &n);

    printf("f(n)=%d\n", f(n));
}
