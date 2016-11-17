// q05b
// 下記の整数を小さい順に並べ替えて出力するプログラムを作成してください。
// {9,4,8,2,5,6,1}

#include <stdio.h>

main() {
  int i, t, isFinished;
  int a[7] = {9, 4, 8, 2, 5, 6, 1};

  for (i=0; i<7; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  while (1) {
    isFinished = 1;
    for (i=0; i<6; i++) {
      if (a[i+1] < a[i]) {
	t = a[i];
	a[i] = a[i+1];
	a[i+1] = t;
	isFinished = 0;
      }
    }
    if (isFinished == 1) {
      break;
    }
  }
  

  for (i=0; i<7; i++) {
    printf("%d ", a[i]); 
  }
  printf("\n");
}
