/*INPUT:Two numbers
  OUTPUT:GCD of the two numbers
  ReEMARKS:If one of the two numbers inputted is zero then the ouput is the non zero number.If both the numbers inputted are zero then the output is "Invalid input".
*/
#include<stdio.h>
#include<math.h>
int main()
{       /* a=the first number 
           b=the second number
           hcf=stores the hcf of the two numbers
        */
	int a,b,temp,hcf;
	scanf("%d %d",&a,&b);
	a=fabs(a);
	b=fabs(b);
	if (a>b)
	{
		temp=a;         //*temp is a temperory variable used for swapping the two numbers*//
		a=b;
		b=temp;
	}
	if (a!=0 && b!=0)
	{
		for(int i=1;i<=a;i++)
	  	{
	     		if(a%i==0 && b%i==0)
	     		{
	     			hcf=i;
	     		}        
	  	}
	  	printf("%d",hcf);
	}
	else if(a==0 && b==0)
	{
		printf("Invalid input");
	}
	else if(a==0 && b!=0)
	{
		printf("%d",b);
	}
	else if(b==0 && a!=0)
	{
		printf("%d",a);
	}
	return 0;
}

