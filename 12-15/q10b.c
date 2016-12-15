// q10b
// 下記の三項間漸化式で表される数列の第n項を求める関数f(n)を再帰的関数呼び出しを用いて実現し、main関数により入出力を確認してください。
// ※f(n)とmain()は同じファイル内に定義すること。
//
// an+2 - 4an+1 + 3an = 0, a1 = 1, a2 = 2

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
