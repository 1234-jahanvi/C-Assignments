#include <stdio.h>
int main()
{
  double centi,fahren;
  scanf("%lf",&centi);
  fahren = (centi*1.8) + 32;
  printf("%.2lf",fahren);
  return 0;
}

