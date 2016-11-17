// q05a
// 多項式において、10以下の次数n、係数a0～ an  および x の値を入力し、y を出力するプログラムを作成してください。

#include <stdio.h>
#include <math.h>

main() {
  int n, i;
  printf("jisuu:");
  scanf("%d", &n);

  printf("keisuu:");
  double a[11];
  for (i=0; i<=n; i++) {
    scanf("%lf", &a[i]);
  }

  double x;
  printf("x=");
  scanf("%lf", &x);

  double y = 0;
  for (i=0; i<=n; i++) {
    y += a[i] * pow(x, i);
  }
  printf("y=%lf\n", y);
}
