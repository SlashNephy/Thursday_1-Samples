// q10c
// 素数は下記のように再帰的に定義することができる。
//
// 2は最小（1番目）の素数である
// 任意の正の整数で、自身より小さい素数で割り切れない数は素数である。
//
// n番目の素数を求める関数sosuu(n)を再帰的関数呼び出しにより実現し、main関数により入出力を確認してください。
// ※sosuu(n)とmain()は同じファイル内に定義すること。

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
