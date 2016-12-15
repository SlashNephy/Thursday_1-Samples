// q10a
// 関数f(n)は自然数nを引数とする関数であり、下記のように再帰的に定義される。f(n)を再帰的関数呼び出しにより実現し、main関数により入出力を確認してください。
//
// f(0)は1である。
// f(n)はf(0)からf(n-1)までの和である。
//
// ※f(n)とmain()は同じファイル内に定義すること。

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
