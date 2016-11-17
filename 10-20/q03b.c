// q03b
// q03aのコードをfor文を用いたコードに変更してください。

#include <stdio.h>

main() {
  int n;
  int result = 0;

  for(;;) {
    scanf("%d", &n);
    if (n < 0) {
      break;
    }
    result += n;
  }
  printf("souwa=%d\n", result);
}
