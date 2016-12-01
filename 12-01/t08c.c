// 外部テキストファイルuriageには下記のようなデータが書き込まれている。各列がそれぞれ商品番号(#1~#50)、単価(円)、売り上げ個数(個)を示すとき、売り上げ金額順にランキングを出力するプログラムを作成せよ。
// ``` データ
// 1    300    12
// 2    340    34
// 3    100   128
//      ...
// ```
//
// ``` 出力
// jyuni  #  tanka  kosuu  uriage
//    1    20    840       52    43680
//    2    44    170      256    43520
//    3    34    640       56    35840
//                  ...
// ```

#include <stdio.h>

main() {
  FILE *fp;
  int i, j, k, l, m, n;
  m = 50;
  n = 3;
  int A[m][n];
  int T[n];

  fp = fopen("uriage", "r");

  for (i=0; i<m; i++) {
    for (j=0; j<n; j++) {
      fscanf(fp, "%d", &A[i][j]);
    }
  }
  
  while (1) {
    for (i=0; i<m; i++) {
      k = A[i][1] * A[i][2];
      if (i != 0) {
	l = A[i-1][1] * A[i-1][2];
	if (k > l) {
	  for (j=0; j<n; j++) {
	    T[j] = A[i-1][j];
	  }
	  for (j=0; j<n; j++) {
	    A[i-1][j] = A[i][j];
	  }
	  for (j=0; j<n; j++) {
	    A[i][j] = T[j];
	  }
	}
      }
    }

    j = 0;
    for (i=0; i<m; i++) {
      k = A[i][1] * A[i][2];
      if (i != 0) {
	l = A[i-1][1] * A[i-1][2];
	if (k > l) {
	  j = 1;
	}
      }
    }
    if (j == 0) {
      break;
    }
  }

  printf("jyuni  #  tanka  kosuu  uriage\n");
  for (i=0; i<m; i++) {
    printf(" %2d    ", i + 1);
    printf("%2d ", A[i][0]);
    printf("%5d  ", A[i][1]);
    printf("%5d  ", A[i][2]);
    printf("%6d\n", A[i][1] * A[i][2]);
  }
}
