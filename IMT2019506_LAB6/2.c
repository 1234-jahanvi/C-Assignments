/*INPUT:Two strings str1 and str2 as input
  OUTPUT:Output should be ‘0’ if the two input strings are equal or should be ‘1’ if they are unequal.
  REMARKS: There is the use of dynamic memory allocation to store strings and use pointers while comparing the strings.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void my_strcmp(char *str1,char *str2)
{
	int len1=strlen(str1);
	int len2=strlen(str2);
	if(len1==len2)
	{
		int count=0;					/*count= To count the number of same characters in the two strings*/
		for(int i=0;i<len1;i++)
		{
			if(*(str1+i)==*(str2+i))
			{
				count++;
			}
		}
		if(count==len1)
		{
			printf("%d",0);				/*Prints '0' if the strings are equal*/
		}
		else
		{
			printf("%d",1);				/*Prints '1' if the strings are unequal*/
		}
	}
	else
	{
		printf("%d",1);					/*Prints '1' if the strings are of unequal length*/
	}
}
int main()
{
	char *str1=(char *)malloc(256*sizeof(char));		/*Using malloc function to dynamically allocate a block of memory to store the characters of the first input string*/
	char *str2=(char *)malloc(256*sizeof(char));		/*Using malloc function to dynamically allocate a block of memory to store the characters of the second input string*/
	scanf("%s",str1);
	scanf("%s",str2);
	my_strcmp(str1,str2);				
	return 0;
}
	
