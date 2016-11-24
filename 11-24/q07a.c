#include <stdio.h>

main() {
  FILE *fp;
  double lmd, n, k;
 
  fp = fopen("SiO2", "r");
 
  fscanf(fp, "%lf %lf %lf", &lmd, &n, &k);

  printf("%f %f %f\n", lmd, n, k);

  fclose(fp);
}
