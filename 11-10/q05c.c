// q05c
// 下記のようなレシート作成プログラムを作成してください。
//■メニューは以下の５種類
//	menu:0 100円
//	menu:1 200円
//	menu:2 300円
//	menu:3 400円
//	Menu:4 500円
//■注文順にメニュー番号を順次入力し、最後に-1を入力すると、各メニューの単価、個数、小計、および合計が出力される。

#include <stdio.h>

main() {
  int i;
  int menu[5] = {100, 200, 300, 400, 500};
  int count[5] = {};
  int total = 0;

  while (1) {
    scanf("%d", &i);
    count[i] += 1;
    if (i == -1) {
      break;
    }
  }

  for (i=0; i<5; i++) {
    printf("menu:%d %d %d %6d\n", i, menu[i], count[i], count[i] * menu[i]);
    total += count[i] * menu[i];
  }
  printf("Total: %d\n", total);
}
