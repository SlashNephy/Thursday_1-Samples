// q14b
// q14aのコードを、文字列中の指定文字をカウントする関数count()と入出力を行うmain関数に分割してください。

#include <stdio.h>

int count(char *p1, char p2[], int length) {
  int i;
  int j = 0;

  for (i=0; i<length; i++) {
    if (p2[i] == 0) {
      break;
    }
    if (p2[i] == *p1) {
      j++;
    }
  }

  return j;
}

main() {
  int i;
  int j = 0;
  int length = 1000;
  char p, text[length];
  FILE *fp;
  
  fp = fopen("text", "r");
  fgets(text, length, fp);

  for (i=0; i<length; i++) {
    if (text[i] == 0) {
      printf("\n");
      break;
    }
    printf("%c", text[i]);
  }
  
  printf("mojisitei: ");
  scanf("%c", &p);

  printf("%d\n", count(&p, text, length));
}
