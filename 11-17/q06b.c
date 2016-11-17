// q06b
// コンソール上から2つのN×N行列を入力し、それらの積を出力するプログラムを作成してください。ただし、次数Nはマクロ定義することとします。

#include <stdio.h>

#define N 3

main() {
  int i, j, k, p;
  int A[N][N];
  int B[N][N];

  printf("A=\n");
  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  printf("B=\n");
  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  printf("A*B=\n");
  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      p = 0;
      for (k=0; k<N; k++) {
	p += A[i][k] * B[k][j];
      }
      printf("%5d", p);
      if (j == (N-1)) {
	printf("\n");
      }
    }
  }
}
