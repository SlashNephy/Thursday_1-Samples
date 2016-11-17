// q02a
// 1からnまでの整数の和（1+2+3+・・・+n）を算出するプログラムを作成してください。
// n=1からn=10までの場合について出力すること。

#include <stdio.h>

main()
{
  int n = 1;
  while (n <= 10) {
    printf("n=%d wa=%d\n", n, sum(n));
    n++;
  }
}

int sum(int n)
{
  return n * (n + 1) / 2;
}
