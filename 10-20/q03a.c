// q03a
// 入力した正の整数の総和を算出するプログラムをwhile文を用いて実現してください。

#include <stdio.h>

main() {
  int n;
  int result = 0;

  while(1) {
    scanf("%d", &n);
    if (n < 0) {
      break;
    }
    result += n;
  }
  printf("souwa=%d\n", result);
}
