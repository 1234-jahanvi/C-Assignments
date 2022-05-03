/*INPUT:Read two polynomials, first the degree (max 10) followed by their respective coefficients (of type double).
  OUPUT:Print out the result of polynomial addition and multiplication with the coefficient followed by the list of coefficients.
  REMARKS:None
*/
#include<stdio.h>
#include<stdlib.h>
void add(int d1,double *c1,int d2,double *c2)
{
	printf("Addition:%d ",(d1>d2)?d1:d2);
	if(d1==d2)
	{
		for(int i=0;i<(d1+1);i++)
		{
			printf("%.0lf ",*(c1+i)+*(c2+i));			/*Adds the coefficients if the degrees are the same*/
		}
	}
	else if (d1>d2)
	{
		for(int i=0;i<(d1-d2);i++)
		{
			printf("%.0lf ",*(c1+i));				/*prints d1-d2 coefficients if the first polynomial as d1>d2*/
		}
		for(int i=0;i<(d2+1);i++)
		{
			printf("%.0lf ",*(c1+i+2)+*(c2+i));			/*Adds the rest of the coefficientsof the same degree of the two polynomials*/
		}
	}
	else
	{
		
		for(int i=0;i<(d2-d1);i++)
		{
			printf("%.0lf ",*(c2+i));				/*prints d2-d1 coefficients if the second polynomial as d2>d1*/
		}
		for(int i=0;i<(d1+1);i++)
		{
			printf("%.0lf ",*(c2+i+2)+*(c1+i));			/*Adds the rest of the coefficientsof the same degree of the two polynomials*/
		}
	}
	printf("\n");	
}
void multiply(int d1,double *c1,int d2,double *c2)
{
		printf("Multiplication:%d ",d1+d2);
		double coeffs[d1+d2+1];
		for(int i=0;i<(d1+d2+1);i++)
		{
			coeffs[i]=0;
		}
		int k1=d1;
		int k2=d2;
		for(int i=0;i<(d1+1);i++)
		{
			for(int j=0;j<(d2+1);j++)
			{
				coeffs[i+j]+=(*(c1+i))*(*(c2+j));
				k2--;
			}
			k1--;
		}
		for(int i=0;i<(d1+d2+1);i++)
		{
			printf("%.0lf ",coeffs[i]);
		}
}
int main()
{
	int degree1;
	int degree2;
	scanf("%d",&degree1);
	double *coeff1=(double *)malloc((degree1+1)*sizeof(double));		/*Dynamic memory allocation to store coefficients of the first polynomial*/
	for(int i=0;i<(degree1+1);i++)
	{
		scanf("%lf",coeff1+i);
	}
	scanf("%d",&degree2);
	double *coeff2=(double *)malloc((degree2+1)*sizeof(double));		/*Dynamic memory allocation to store coefficients of the second polynomial*/
	for(int i=0;i<(degree2+1);i++)
	{
		scanf("%lf",coeff2+i);
	}
	add(degree1,coeff1,degree2,coeff2);
	multiply(degree1,coeff1,degree2,coeff2);
	return 0;
}	
