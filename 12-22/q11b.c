// q11b
// ２つのint型の変数に格納された値を交換する関数swap()を作成し、作成した関数swap()を用いて、配列a[5]={1,4,8,4,3}を値の大きい順に並べなおすプログラムを作成してください。

#include <stdio.h>

void swap(int *a, int *b) {
    int tmp;
    if (*a > *b) {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
}

main() {
    int a[5] = {1, 4, 8, 4, 3};
    int i, j;

    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            swap(&a[i], &a[j]);
        }
    }

    for (i=0; i<5; i++) {
        printf("%d ", a[i]);
    }
}
