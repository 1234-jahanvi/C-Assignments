/*INPUT:Two strings str1 and str2 as input.
  OUTPUT:Print the new concatenated string with first string is followed by the second string.
  REMARKS: There is the use of dynamic memory allocation to store strings and use pointers while concating the two input strings .Also, there is allocation of new memory big enough to hold both the  strings together. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void my_strcat(char *str1,char *str2)
{
	int i;
	int len1=strlen(str1);				
	int len2=strlen(str2);
	char *str3=(char *)malloc(512*sizeof(char));	/*Using malloc function to dynamically allocate a block of memory to store the characters in the new concatenated string*/
	for(i=0;i<len1;i++)				/*A for loop is run to store the first string in the third string*/
	{
		*(str3+i)=*(str1+i);			
	}
	for(int k=0;k<len2;k++)				/*A for loop is run to concatenate the second string to the first string in the third string*/
	{
		*(str3+i)=*(str2+k);
		i++;
	}
	printf("%s",str3);				/*Prints the new concatenated string*/
}
int main()
{
	char *str1=(char *)malloc(256*sizeof(char));	/*Using malloc function to dynamically allocate a block of memory to store the characters of the first input string*/
	char *str2=(char *)malloc(256*sizeof(char));	/*Using malloc function to dynamically allocate a block of memory to store the characters of the second input string*/
	scanf("%s",str1);
	scanf("%s",str2);
	my_strcat(str1,str2);
	return 0;
}
