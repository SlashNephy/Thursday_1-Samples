// q11a
// 変数a,b,cを指すポインタp,q,rを用いてaとbの積をcに格納する動作を間接参照により実現してください。

#include <stdio.h>

main() {
    int a, b, c, *p, *q, *r;

    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;
    r = &c;

    *r = *p * *q;

    printf("%d\n", c);
}
