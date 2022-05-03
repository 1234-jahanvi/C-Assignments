#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 double a,b,c,D,root1,root2;
 scanf("%lf %lf %lf",&a,&b,&c);
 D=b*b-4*a*c;
 if(D>=0)
 {
   root1 = (-b + sqrt(D))/(2.0*a);
   root2 = (-b - sqrt(D))/(2.0*a);
   printf("%.2lf %.2lf",root1,root2);
 }
else 
 { 
  double real,imag;
  real=-b/(2.0*a);
  imag = sqrt(-D)/(2.0*a);
  printf("%.2lf+i%.2lf %.2lf-i%.2lf",real,imag,real,imag);
}
 return 0;
}

