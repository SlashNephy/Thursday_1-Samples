// q15a
// 下記のような鬼退治ゲームを作成してください。
// 
// ①プレイヤーは桃太郎、猿、犬、キジの4キャラクターから鬼と戦う者1名を選択する。
// ②選ばれた者は鬼と対戦し、攻撃と防御を1回ずつ行う。
// ③味方のいずれかの体力が尽きるか、鬼の体力が尽きるまで①②を繰り返す。
// 
// ※各キャラクターの名前・攻撃力・防御力・体力は構造体に格納すること。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct charactor {
    char name[8];
    int strength;
    int defense;
    int health;
};

int damage (int strength, int defense) {
    srand(time(NULL));
    int rnd = rand() % 3;

    return strength * rnd / defense;
}

main () {
    int i;
    struct charactor charactors[5] = {
        {"momotaro", 4, 2, 15},
        {"saru", 3, 2, 15},
        {"inu", 3, 1, 15},
        {"kiji", 2, 2, 15},
        {"oni", 5, 3, 15}
    };

    printf("鬼が現れた！\n\n");

    while (1) {
        printf("誰が戦う？ 1:桃太郎(%d) 2:猿(%d) 3:犬(%d) 4:キジ(%d)\n", charactors[0].health, charactors[1].health, charactors[2].health, charactors[3].health);

        scanf("%d", &i);
        if (i < 0 || i > 4) {
            printf("入力が不正です。\n");
            continue;
        }

        printf("%sの攻撃→\n", charactors[i-1].name);
        charactors[4].health -= damage(charactors[i-1].strength, charactors[4].defense);
        if (charactors[4].health > 0) {
            printf("%sの体力が %d になった\n", charactors[4].name, charactors[4].health);
        } else {
            printf("鬼を倒しました！めでたしめでたし\n");
            break;
        }

        printf("%sの攻撃→\n", charactors[4].name);
        charactors[i-1].health -= damage(charactors[4].strength, charactors[i-1].defense);
        if (charactors[i-1].health > 0) {
            printf("%sの体力が %d になった\n", charactors[i-1].name, charactors[i-1].health);
        } else {
            printf("鬼に倒されてしまった！\n");
            break;
        }
        printf("\n");
    }
}
