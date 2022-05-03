/*INPUT:An integer n and a base integer b 
 OUTPUT:Printing the string after converting the integer n into a base b character representation 
 REMARKS:To allocate memory dynamically for a string to hold the output of the function called
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void itob(int n,char *s,int b)
{
	int i=0;
	while(n!=0)
	{
		int rem=n%b;				/*rem=holds each digit of the input number in each iteration of the while loop*/
		if(rem>9)
		{
			*(s+i)=rem+87;			
		}
		else
		{
			*(s+i)=(char)(rem+'0');
		}
		i++;
		n=n/b;
	}
	for(int j=i-1;j>=0;j--)
	{
		printf("%c",*(s+j));
	}
}
int main()
{
	int n,b;
	scanf("%d",&n);					/*Taking the integer as input*/
	scanf("%d",&b);					/*Taking the base integer as input*/
	char *s=(char *)malloc(256*sizeof(char));	/*String s is allocated dynamically using malloc function*/
	itob(n,s,b);
	return 0;
}
		
