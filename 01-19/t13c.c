// t13c
// 外部テキストファイルtensuuには下記のようなデータが書き込まれている。1列目が学籍番号(#1~10)、2~6列目は5教科の点数を示している。このデータに各生徒の5教科の平均点と成績順位を加えた表(下記)を出力するプログラムを作成せよ。
// ただし、以下の関数を自作して用いること。
// heikin(A, n):一次元配列A(要素数:n)の内容の平均値を戻り値として返す関数。
//  例) A[5]={1,2,3,4,5}のとき heikin(A, 5)=3.0
// jyuni(A, B, n):一次元配列A(要素数:n)の内容の順位を一次元配列B(要素数:n)に書き込む関数。
//  例) A[5]={5,3,6,4,5}のとき B[5]={2,5,1,4,2}
// ※main()とheikin()とjyuni()は一つのファイル内に定義すること。
// 
// データ
// 1 75 80 88 74 82
// 2 72 65 68 74 88
// 3 80 82 89 90 84
// 4 92 95 96 89 90
// ...
// 
// 出力
// 1 75 80 88 74 82 79.8 5
// 2 72 65 68 74 88 73.4 8
// 3 80 82 89 90 84 85.0 3
// 4 92 95 96 89 90 92.4 1
// ...

#include <stdio.h>

float heikin(int A[], int n) {
  int i;
  float S;

  for (i=0; i<n; i++) {
    S += A[i];
  }
  
  return S / n;
}

jyuni(float A[], int B[], int n) {
  int i, k;
  int j = 1;
  int l = 0;  
  float max = 0;
  float Max[n];

  while (1) {
     for (i=0; i<n; i++) {
       if (max < A[i]) {
	 printf("%d\n", A[i]);
	 for (k=0; k<n; k++) {
	   if (A[i] == Max[k]) {
	     continue;
	   }
	 }

	 max = A[i];
	 Max[l] = max;
	 l++;
       }
     }
     for (i=0; i<n; i++) {
       if (A[i] == max) {
	 B[i] = j;
	 j++;
       }
     }
     
     if (l == n) {
       break;
     }
  }
}

main() {
  int n = 10;
  int m = 6;
  int i, j, k, data[n][m];
  int T[5], B[n];
  float A[5];
  FILE *fp;
  fp = fopen("tensuu", "r");

  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {	
      fscanf(fp, "%d", &data[i][j]);
    }
    k = 0;
    for (j=1; j<m; j++) {
      T[k] = data[i][j];
      k++;
    }
    A[i] = heikin(T, 5);
  }

  jyuni(A, B, n);

  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      printf("%3d", data[i][j]);
    }
    printf("%5.1f", A[i]);
    printf("%3d", B[i]);
  }

  fclose(fp);
}


