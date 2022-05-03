/* INPUT:A string S and an integer L which specifies the length of each substring.
   OUTPUT:Number of DISTINCT substrings of the string S of length L.
   REMARKS:If L is greater than the length of the string S , then the output is 0.
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char S[2000];         
	int L,len;

	/*S= an array storing the string
	  L=length of each substring
          len=length of the string inputted by the user.*/

	scanf("%s %d",S,&L);                   			/*Taking the inputs from the user*/
	len=strlen(S);
	char str[100][100];		       			/*str=2-dimensional array storing the substrings*/
	if(L>len)
	{
		printf("%d",0);					/*output is 0 if L>length of the string*/
	}
	else
	{
		for(int i=0;i<(len-L+1);i++)
		{
			for(int j=i;j<i+L;j++)
			{
				str[i][j-i]=S[j];	
			}
		}
		int count=0;					/*count=calculating the number of identical substrings*/
		for(int k=0;k<len-L;k++)
		{
			for(int p=k+1;p<len-L+1;p++)
			{
				if((strcmp(str[k],str[p]))==0)
				{
					count++;
					break;			/*breaks from the inner for loop as soon as two strings are found to be identical*/

				}
			}
			
		}
		printf("%d",(len-L+1)-count);                   /*Prints the number if distinct number of substrings by subtracting number of identical strings from the total number of substrings*/
	}
	return 0;
}
