/*INPUT:Comma seperated ten integers into an array and an integer to be searched .
  OUTPUT: To print whether the number is found or not and the number of comparisions made while searching for that number.
  REMARKS:If the number is found in the array then the output is 1 and the number of comparisions.If the number is not found in the list then the output is 0 amd the number of comparisions
*/

#include <stdio.h>
int main()
{
	int numbers[10];			/*Declaration of the array of ten integers*/
	int x;					/*x=the number to be searched*/
	scanf("%d",&numbers[0]);		/*Taking the input of the first integer element of the array*/
	for(int i=1;i<10;i++)
	{
		scanf(", %d",&numbers[i]);	/*Taking the input of elements of the array except the first element*/
	}
	scanf("%d",&x);				/*Taking the number to be searched as the input*/
	int count=0;				/*count=number of comparisions done while searching*/
	int flag=0;				/*flag=for checking if the number is found or not*/
	for(int i=0;i<10;i++)
	{
		count+=1;
		if(numbers[i]==x)
		{
			printf("%d %d",1,count);		/*Prints 1 if the number to be searched is found* and the count*/
			flag=1;		
			break;					/*Terminates the current loop and resumes execution at the next statement*/
		}
	}
	if(flag==0)
	{
		printf("%d %d",0,count);			/*Prints 0 if the number to be searched is not found and the count*/
	}			
	return 0;
}
