// t13b
// 以下のような動作をする関数を作成し、それぞれmain関数によりその動作を確認せよ。
// diag(A, B, n)
// n行n列の行列Aの主体各要素のベクトルBを作る関数。
// ※main()とdiag()は一つのファイル内に定義すること。
// 
// n=4          ←nの入力
// A[][]=       ←A[]の入力
// 1 2 3 4
// 5 6 7 8
// 1 2 3 4
// 5 6 7 8
// B[]=1 6 3 8  ←B[]の出力

#include <stdio.h>

int n;

diag(int A[][n], int B[], int n) {
  int i, j;
  int k = 0;
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      if (i == j) {
	B[k] = A[i][j];
	k++;
      }
    }
  }
}

main() {
  printf("n=");
  scanf("%d", &n);

  int A[n][n], i, j;
  printf("A[][]=\n");
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  int B[n];
  printf("B[]=");
  diag(A, B, n);
  for (i=0; i<n; i++) {
    printf("%d ", B[i]);
  }
  printf("\n");
}
