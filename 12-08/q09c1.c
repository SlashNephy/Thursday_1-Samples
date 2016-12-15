// q09c
// コンソール上で異なる整数n,rを入力し，順列nPrと組合せnCrを算出するプログラムを作成してください。
// ただし、n!を計算する関数fact(n)、順列nPrを計算する関数P(n,r)、組合せnCrを計算する関数C(n,r)、入出力を行う関数main()はそれぞれ異なるファイルに保存し、分割コンパイルを行うものとします。
// ■提出ファイル名： main()→ q09c1.c，fact(n)→q09c2.c, P(n,r)→q09c3.c, C(n,r)→p09c4.c

#include <stdio.h>

extern double fact(int n);
extern double P(int n, int r);
extern double C(int n, int r);

main () {
    int n, r;

    printf("n=");
    scanf("%d", &n);
    printf("r=");
    scanf("%d", &r);

    printf("nPr=%.0f\n", P(n, r));
    printf("nCr=%.0f\n", C(n, r));
}
