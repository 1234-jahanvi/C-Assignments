/*INPUT: Comma separated 20 integers
  OUTPUT: Sorted numbers in the increasing order by Bubble sort technique,the number of swaps and comparisions while performing the sorting
  REMARKS: None
*/
#include <stdio.h>
void bubble_sort(long int []);
int swaps=0,comparisions=0;				/*swaps=the number of swaps while sorting ; comparisions= number of comparisions done while sorting*/
void bubble_sort(long int n[20])			/*This function is used to to compare adjacent elements and swap them if they satisfy the 'if' condition*/
{
	for(int i=0;i<19;i++)
	{
		for(int j=0;j<19-i;j++)
		{
			if(n[j]>n[j+1])				
			{
				long int temp;		/*temp=a temporary variable used for swapping*/
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
				swaps++;		/*Increments the number of swaps*/
			}
			comparisions++;			/*Increments the number of comparisions*/
		}
	}	
}
int main()
{
	long int numbers[20];
	scanf("%ld",&numbers[0]);			/*Taking the first element of the array as input*/
	for(int k=1;k<20;k++)
	{
		scanf(",%ld",&numbers[k]);		/*Taking the other elements of the array as input*/
	}
	bubble_sort(numbers);				/*Calling the function*/
	for(int i=0;i<20;i++)
	{
		printf("%ld ",numbers[i]);		/*Printing the sorted list*/
	}
	printf("\n");
	printf("%d %d",swaps,comparisions);		
	return 0;
}
