// t04c
// f(x)=e^x, g(x)=-xとおく。y=f(x)とy=g(x)のグラフの交点を小数点10桁以上の精度で求めよ。ただし、指数関数はmath.hライブラリのexp(double x)関数を用いてよい。

#include <stdio.h>
#include <math.h>

double func1(double x) {
  return exp(x);
}

double func2(double x) {
  return -1 * x;
}

double getabs(double x) {
  if (x < 0) {
    x *= -1;
  }
  return x;
}

main() {
  // -1 < x < 0
  double x = -1.0;

  int i = 1;
  int sign;
  double y1, y2, delta, currentDelta;
  double previousDelta = 1.0;
  double finalDelta = pow(10, -12);
  while (1) {
    currentDelta = pow(10, -1 * i);

    y1 = func1(x);
    y2 = func2(x);

    delta = getabs(y1 - y2);
    if (delta < finalDelta) {
      printf("%.12lf\n", y1);
      break;
    }

    if (delta < currentDelta) {
      i++;
    }

    if (previousDelta > delta) {
      sign = 1;
    } else {
      sign = -1;
    }

    x += sign * pow(10, -1 * (i + 1));
    previousDelta = delta;
    if (x > 0) {
      break;
    }
  }
}

