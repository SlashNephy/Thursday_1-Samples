// t04a
// 10次の単位行列を出力せよ

#include <stdio.h>

main() {
  int x, y;
  for (x=0; x<10; x++) {
    for (y=0; y<10; y++) {
      if (x == y) {
	printf("1");
      } else {
	printf("0");
      }
      if (y == 9) {
	printf("\n");
      }
    }
  }
}
