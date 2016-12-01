// 0以上N以下の整数をランダムに任意の個数入力し、それぞれの整数を入力した回数を出力するプログラムを作成せよ。ただし、不の整数により入力は終了するものとし、N(<100)の値はマクロ定義すること。
// ``` (N=2のとき)
// 0 1 2 1 0 2 1 1 1 2 -1                ←入力
// count(0)=2 count(1)=5 count(2)=3 ←出力
// ```
#include <stdio.h>

#define N 2

main() {
  int i, j, k, l, m, n;
  i = 0;
  l = 1000;
  int A[l];

  while (1) {
    scanf("%d", &n);
    A[i] = n;
    if (n < 0) {
      break;
    }
    
    i++;
  }

  for (i=0; i<=N; i++) {
    m = 0;
    for (j=0; j<l; j++) {
      k = A[j];
      if (k < 0) {
	break;
      }
      if (k == i) {
	m++;
      }
    }
    printf("count(%d)=%d ", i, m);
  }
  printf("\n");
}
