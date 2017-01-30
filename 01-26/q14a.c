// q14a
// 外部ファイルのtextにテキスト形式の文章が書き込まれている。コンソール上で任意のアルファベットを入力し、指定したアルファベットの個数を出力するプログラムを作成してください。
// ※文章の読み込みにはライブラリ関数のfgets()を用いること。
// ※全てmain関数内に作成すること。

#include <stdio.h>

main() {
  int i = 0;
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

  for (i=0; i<length; i++) {
    if (text[i] == 0) {
      break;
    }
    if (text[i] == p) {
      j++;
    }
  }
  printf("%d\n", j);
}
