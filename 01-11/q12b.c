// q12b
// q12aのコードにおいて、関数sum()を、[]を用いて配列表記で実現してください。

#include <stdio.h>

int sum(int a[], int n) {
  int i = 0;
  int S = 0;

  for (i=0; i<n; i++) {
    S += a[i];
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
