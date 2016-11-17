// q06a
// N×N単位行列Eとコンソール上から入力した任意のN×N行列Aの和を計算し出力するプログラムを作成してください。ここで、次数Nはマクロ定義することとします。

#include <stdio.h>

#define N 3

main() {
  int i, j;
  int A[N][N];
  int E[N][N];

  printf("A=\n");
  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      if (i == j) {
	E[i][j] = 1;
      } else {
	E[i][j] = 0;
      }
    }
  }

  printf("A+E=\n");
  for (i=0; i<N; i++) {
    printf("  ");
    for (j=0; j<N; j++) {
      printf("%2d ", A[i][j] + E[i][j]);
      if (j == (N - 1)) {
	printf("\n");
      }
    }
  }
}
