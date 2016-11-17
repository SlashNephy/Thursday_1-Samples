// q02b
// 実数x（ 0≦x≦10 ）の5乗 x5 をxの刻みNで算出するプログラムを作成してください。ここで、xy は下記の2つの方法により算出できます。
//	①　forループを用いてxをy回掛け合わせる方法
//	②　ライブラリ関数pow(x,y)を用いる方法
//N=100として上記①、②の両方を用いて算出し、解を並べて出力してください。
//※Nはマクロ定義を用いて記述すること

#include <stdio.h>
#include <math.h>

#define N 100

// 5乗
#define power 5 

// forループで5乗
double calc_with_for(double x) {
    int n;
    double result = 1.0;

    for (n = 1; n <= power; n++) {
        result *= x;
    }
    return result;
}

// pow関数で5乗
double calc_with_pow(double x) {
    return pow(x, power);
}

main() {
    printf(" x         for loop      pow()\n");

    // xの定義域
    double min = 0.0;
    double max = 10.0;

    // maxのN分割
    double split = max / N;

    double x = min;
    while (x <= max) {
        double result1 = calc_with_for(x);
        double result2 = calc_with_pow(x);

        printf("%9.6lf %13.6lf %13.6lf\n", x, result1, result2);

        x += split;
    }
}
