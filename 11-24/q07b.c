#include <stdio.h>
#include <math.h>

main() {
  FILE *fp, *fp2;
  double lmd, n, k, ref;
 
  fp = fopen("SiO2", "r");
  fp2 = fopen("REF", "w");
 
  while(1) {
    if (fscanf(fp, "%lf %lf %lf", &lmd, &n, &k) == EOF) {
      break;
    }

    ref = pow((1 - pow(k, 2) - pow(n, 2)) / (pow(1 + n, 2) + pow(k, 2)), 2) + pow(2*k / (pow(1 + n, 2) + pow(k, 2)), 2);

    fprintf(fp2, "%f %f\n", lmd, ref);
  }

  fclose(fp);
  fclose(fp2);
}
