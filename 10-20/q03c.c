// q03c
// 下記のような数当てゲームを作成してください．
//  999以下の整数を入力する。
//  入力した数が答えより大きい場合 “Too big !”、　小さい場合 ”Too small !”、　一致した場合 “Good ! Right number !”　と表示する。
//  上記を答えと一致するか、10回施行するまで繰り返す。10回施行しても当たらなかった場合には“Game over !”を表示する。
//  ※答えは乱数により自動的に決定するようにすること．

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
  int n, i;
  int answer = getRand();

  for (i=0; i < 10; i++) {
    printf("Input number : ");
    scanf("%d", &n);

    if (n > answer) {
      printf("Too big !\n");
    } else if (n < answer) {
      printf("Too small !\n");
    } else {
      printf("Good ! Right number !\n");
      break;
     }
  }

  if (i == 10) {
    printf("Game over !\n");
  }
}

int getRand() {
  srand(time(NULL));
  return rand() % 1000;
}
