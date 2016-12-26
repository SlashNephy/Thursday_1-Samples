// q11c
// ３次関数ｆ（ｘ）=ax3+bx2+cx+dが極値を持つときに、gnuplotでグラフの概形を描くためのデータを出力するプログラムを作成してください。

#include <stdio.h>
#include <math.h>

// ax^2+bx+c=0の解の小さい方を求める
double get_answer_minus(int a, int b, int c) {
    return (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
}

// ax^2+bx+c=0の解の大きい方を求める
double get_answer_plus(int a, int b, int c) {
    return (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
}

// f(x)の係数の入力
void func1(int *a, int *b, int *c, int *d) {
    scanf("%d %d %d %d", a, b, c, d);
}

// f'(x)の係数算出
void func2(int a, int b, int c, int *e, int *f, int *g) {
    *e = 3 * a;
    *f = 2 * b;
    *g = c;
}

// f'(x)の判別式Dの算出
void func3(int e, int f, int g, double *D) {
    *D = pow(f, 2) - 4 * e * g;
}

void func4(int e, int f, int g, double *x1, double *x2) {
    *x1 = get_answer_minus(e, f, g);
    *x2 = get_answer_plus(e, f, g);
    printf("%.lf %.lf\n", *x1, *x2);
}

void func5(double x1, double x2, int *x_min, int *x_max) {
    *x_min = (int)x1;
    *x_max = (int)x2 + 1;
}

void func6(int a, int b, int c, int d, int x_min, int x_max) {
    printf("plot %d*x^3+%d*x^2+%d*x+%d with lines linetype 1\n", a, b, c, d);
    printf("set xrange [%d:%d]\n", x_min, x_max);
}

main() {
    // 3次関数 f(x)=ax^3+bx^2+cx+d の係数
    int a, b, c, d;
    // f'(x)=3ax^2+2bx+cの係数
    int e, f, g;
    // f'(x)の判別式 D=4(b^2-3ac)=f^2-4eg
    double D;
    // 解
    double x1, x2;
    // 定義域
    int x_min, x_max;

    func1(&a, &b, &c, &d);
    func2(a, b, c, &e, &f, &g);
    func3(e, f, g, &D);
    if (D > 0) {
        func4(e, f, g, &x1, &x2);
        func5(x1, x2, &x_min, &x_max);
        func6(a, b, c, d, x_min, x_max);
    } else {
        printf("No extreme value");
    }
}
