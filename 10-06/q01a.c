// q01a
// 指定のプログラムをエディタに書き写し、正しく動作することを確認してください。

#include <stdio.h>

main()
{
  int x, y;
  int wa, sa, seki, syou;

  printf("x=");
  scanf("%d", &x);
  printf("y=");
  scanf("%d", &y);

  wa = x + y;
  sa = x - y;
  seki = x * y;
  syou = x / y;

  printf("wa=%d, sa=%d, seki=%d, syou=%d\n", wa, sa, seki, syou);
}
