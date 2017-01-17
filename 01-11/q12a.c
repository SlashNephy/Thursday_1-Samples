// q12a
// 配列の先頭アドレスaを受け取り，配列要素の和を返す関数sum()を作成し、その動作を確認してください。
// ※関数sum()内では[]を用いずにポインタ表記で演算を行うこと。

#include <stdio.h>

int sum(int *a, int n) {
  int i = 0;
  int S = 0;

  for (i=0; i<n; i++) {
    S += *(a + i);
  }

  return S;
}

main() {
  int a[100] = {0};
  int i, n;

  printf("n=");
  scanf("%d", &n);

  printf("a=");
  for (i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }

  printf("sum(a)=%d\n", sum(a, n));
}
