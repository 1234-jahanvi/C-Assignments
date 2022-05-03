/*INPUT:Two strings s and t are taken as an input from the user
 OUTPUT: Prints the string s if the string t appears at the end of string t or else prints '0'
 REMARKS:The function strend() returns '1' if string s if the string t appears at the end of string t or else returns '0'.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strend(char *s,char *t)
{
	int len2=strlen(t);
	int diff=strlen(s)-len2;
	int count=0;						/*count=to count the number of characters similar in string t and end of string s*/
	int i;
	for(i=0;i<len2;i++)
	{
		if(*(s+diff+i)==*(t+i))
		{
			count++;
		}
	}
	if(count==len2)
	{
		return 1;					/*Returns 1 if the string t is found to appear at the end of string s*/
	}
	else
	{
		return 0;					/*Returns 0 if the string t is not found to appear at the end of string s*/
	}
}
int main()
{
	char *s=(char *)malloc(256*sizeof(char));		/*Using malloc function to dynamically allocate a block of memory to store the characters of the first input string*/
	char *t=(char *)malloc(256*sizeof(char));		/*Using malloc function to dynamically allocate a block of memory to store the characters of the second input string*/
	scanf("%s",s);
	scanf("%s",t);
	if(strend(s,t)==1)
	{
		printf("%s",t);					/*Prints the string s if the function strend() returns 1*/
	}
	else
	{
		printf("%d",0);					/*Prints 0 if the function strend() returns 0*/
	}				
	return 0;
}
