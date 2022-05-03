/*INPUT:A number
  OUTPUT:Number of prime numbers till the inputted number
  REMARKS:If the inputted number is less than or equal to 1, then the output is 0.
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int fact=0;
	int c=0;
	if(n>1)
	{
		for(int i=1;i<=n;i++)
	 	{
			for(int j=1;j<=i;j++)
		  	{
		    		if(i%j==0)
				{
				     fact+=1;
				}
		        }
		        if(fact==2)
		        {
		        	c+=1;
		        }
		        fact=0;
		 }
		 printf("%d",c);
	}
	else
        {
		 printf("0");
	}
	return 0;
}
