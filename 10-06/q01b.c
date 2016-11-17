// q01b
// 身長(cm)と体重(kg)を入力し，体格指数（BMI）と標準体重（SW）を算出するプログラムを作成してください．ここで，身長: h (m)，体重：w (kg)とすると，BMIとSW(kg)は次式より算出されます．
//				BMI=w/h^2
//				SW=h^2×22
//※出力は小数点以下を切り捨てした整数で表示させるものとします． 

#include <stdio.h>
#include <math.h>

main()
{
  float height_cm;
  float height_m;
  float weight;

  printf("height(cm)?\n");
  scanf("%f", &height_cm);
  printf("weight(kg)?\n");
  scanf("%f", &weight);

  height_m = height_cm / 100;

  int bmi;
  int sw;

  bmi = (int)(weight / pow(height_m, 2.0));
  sw = (int)(pow(height_m, 2.0) * 22);

  printf("BMI=%d\nSW(kg)=%d\n", bmi, sw);
}
