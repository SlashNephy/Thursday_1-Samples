// q09a
// 例題1で定義した関数fact()を用いて、0!~N!の値を出力するプログラムを作成してください。
// ここで、グローバル変数countを宣言し、繰り返し演算の総回数（main()とfact()内でforまたはwhileを回した回数の総和）を出力してください。
// ※Nはマクロ定義すること。

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
