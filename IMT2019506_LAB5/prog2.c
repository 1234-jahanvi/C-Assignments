/*INPUT: Comma separated 20 integers
  OUTPUT: Sorted numbers in the increasing order by Selection sort technique,the number of swaps and comparisions while performing the sorting
  REMARKS: None
*/
#include <stdio.h>
void selection_sort(long int []);
int swaps=0,comparisions=0;				/*swaps=the number of swaps while sorting ; comparisions= number of comparisions done while sorting*/
void selection_sort(long int n[20])			/*this function sorts an array by repeatedly finding the minimum element from unsorted part and putting it at the beginning.*/
{
	for(int i=0;i<19;i++)
	{
		int pos=i;			
		int min=n[i];				/*For each iteration, min is assigned to the value at index i*/
		for(int j=i+1;j<20;j++)
		{
			if(n[j]<min)
			{
				pos=j;			
				min=n[j];		/*The minimum is found out from the unsorted part*/
			}
			comparisions++;		
		}
		n[pos]=n[i];				/*The value at index i is assigned at index pos*/
		n[i]=min;				/*The minimum value is assigned at index i of the array*/
		swaps++;
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
	selection_sort(numbers);			/*Calling the function*/
	for(int i=0;i<20;i++)
	{
		printf("%ld ",numbers[i]);		/*Printing the sorted list*/
	}
	printf("\n");
	printf("%d %d",swaps,comparisions);
	return 0;
}
