// q12c
// 下記の関数を作成し、要素数n(<100)のベクトルAからN列の行列Bの指定した要素を参照するプログラムを作成してください。
//
// makevec(A,n)    :要素数nのベクトルAを作る関数
// makemat(A,B,n,N):要素数nのベクトルAからN列の行列Bを作る関数
//                  ※Aの要素数がNの倍数でない場合、Bの最後の行に0を付加する。
//                  ※行列Bの行数Mを戻り値として返す
// matout(B,M,N) :M行N列の行列Bを出力する。 

#include <stdio.h>

makevec(int A[1][100], int n) {
  int i;

  printf("A=");
  for (i=0; i<n; i++) {
    scanf("%d", &A[1][i]);
  }
}

int makemat(int A[1][100], int B[100][100], int n, int N) {
  int i, j, M;
  int k = 0;
  int l;

  if (n % N == 0) {
    M = n / N;
  } else {
    M = (n / N) + 1;
  }

  for (i=0; i<M; i++) {
    for (j=0; j<N; j++) {
      if (k < n) {
	l = A[1][k];
      } else {
	l = 0;
      }
      B[i][j] = l;
      k++;
    }
  }

  return M;
}

matout(int B[100][100], int M, int N) {
  int i, j;

  printf("B=\n");
  for (i=0; i<M; i++) {
    for (j=0; j<N; j++) {
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }
}

main () {
  int A[1][100] = {};
  int i, j, n, N, M, x, y;

  printf("n=");
  scanf("%d", &n);
  printf("N=");
  scanf("%d", &N);

  makevec(A, n);

  int B[100][100];

  M = makemat(A, B, n, N);

  matout(B, M, N);

  printf("yousoshitei:");
  scanf("%d %d", &x, &y);
  printf("B(%d, %d) = %d\n", x, y, B[x - 1][y - 1]);
}
