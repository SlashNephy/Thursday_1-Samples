#include <stdio.h>

main() {
  int x, y;
  scanf("%d %d", &x, &y);

  int m, n;
  if (x > y) {
    m = x;
    n = y;
  } else {
    m = y;
    n = x;
  }

  int i = 1;
  int r1, r2;
  while (1) {
    r1 = m % i;
    r2 = n % i;
    if (r1 == 0 && r2 == 0) {
      printf("%d ", i);
    }

    i++;
    if (i > m || i > n) {
      printf("\n");
      break;
    }
  }
}
