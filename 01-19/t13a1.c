// t13a
// 以下のような動作をする関数を作成し、それぞれmain関数によりその動作を確認せよ。
// 
// even(A, B, n)
// int型の一次元配列A(要素数:n)の内容から偶数を選び出し、順番に配列Bに格納し、格納した配列Bの要素数を戻り値として返す関数。
// ※main()とeven()は別々のファイルに定義し、分割コンパイルを行えるようにすること。
// ※B[]の出力はmain()内で行い、必要であればeven()の戻り値を利用すること。
// 
// n=5            ←nの入力
// A[]=1 2 3 4 5  ←A[]の入力
// B[]=2 4        ←B[]の出力

#include <stdio.h>

extern int even(int A[], int B[], int n);

main() {
  int n;
  printf("n=");
  scanf("%d", &n);

  int A[n];
  int i;
  printf("A[]=");
  for (i=0; i<n; i++) {
    scanf("%d", &A[i]);
  }

  int B[n];
  int m;
  m = even(A, B, n);
  printf("B[]=");
  for (i=0; i<m; i++) {
    printf("%d ", B[i]);
  }
  printf("\n");
}
