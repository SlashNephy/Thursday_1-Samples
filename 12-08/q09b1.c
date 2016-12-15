// q09b
// 演習問題1(q09a)のソースコードをmain関数が書かれたファイルと関数fact()が書かれたファイルに分割し、動作を確認してください。
// ※グローバル変数はどちらかのファイル内で定義すること。
// ■提出ファイル名： main()→ q09b1.c，fact()→q09b2.c）

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
