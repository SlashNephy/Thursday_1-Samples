// q06c
// 下記のベクトルAをN列の行列Bに変換し、行列Bの指定した要素を参照するプログラムを作成してください。ただし、Aの要素数がNの倍数でない場合、Bの最後の行に0を付加すること。

#include <stdio.h>

main() {
  int N, i, j, k;
  int end = 0;
  int A[17] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8};

  printf("A=");
  for (i=0; i<17; i++) {
    printf("%d ", A[i]);
  }

  printf("\nN=");
  scanf("%d", &N);
  
  int B[N][N];

  printf("B=\n");
  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      k = N*i + j;
      if (k < 17) {
	B[i][j] = A[k];
      } else {
	B[i][j] = 0;
      }
    }
  }
  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      printf("%2d", B[i][j]);
      if (j == (N-1)) {
	printf("\n");
      }
    }
    if (B[i][j] == 0) {
      break;
    }
  }

  printf("yousositei:");
  scanf("%d %d", &i, &j);
  printf("B(%d,%d)=%d\n", i, j, B[i-1][j-1]);
}
