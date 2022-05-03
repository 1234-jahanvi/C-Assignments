/*INPUT: n= number of integers to be sorted and n comma separated integers.
  OUTPUT: Sorted numbers in the increasing order and the number of times merge function was called.
  REMARKS: None
*/
#include <stdio.h>
void merge_sort(long int [],int,int);			
void merge(long int [],int,int,int);
int merges=0;						/*merges=the number of times merge function was called.*/
int len;
void merge_sort(long int arr[len],int l,int u)		/*the function divides the array passed as parameter into two halves.*/
{
	if(l<u)						
	{
		int m=(l+u)/2;
		merge_sort(arr,l,m);			/*Calling the merge_sort function for the left half of the array passed*/
		merge_sort(arr,m+1,u);			/*Calling the merge sort function for the right half of the array passed*/
		merge(arr,l,m,u);			/*Calling the merge function to merge the two sorted arrays*/
		merges++;				/*Increments as in when the merge function is called*/
	}
}
void merge(long int arr[len],int l,int m,int u)		/*this function merges the two sorted arrays*/
{
	int len1=m-l+1;
	int len2=u-m;
	long int left[len1];				/*left=array having elements of the left half of the array passed*/
	long int right[len2];				/*right=array having elements of the right half of the array passed*/
	for(int i=0;i<len1;i++)
	{
		left[i]=arr[l+i];
	}
	for(int i=0;i<len2;i++)
	{
		right[i]=arr[m+i+1];
	}
	int i=0,j=0,k=l;
	while(i<len1 && j<len2)				
	{
		if(left[i]<=right[j])			/*The smaller out of element of left array and right array is assigned at the index k of the array passed */
		{
			arr[k]=left[i];			
			i++;
		}
		else
		{
			arr[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<len1)
	{
		arr[k]=left[i];				/*Appending the remaining elements of left[]*/
		k++;
		i++;
	}
	while(j<len2)
	{
		arr[k]=right[j];			/*Appending the remaining elements of right[]*/
		k++;
		j++;
	}
	
}
int main()
{
	scanf("%d",&len);
	long int numbers[len];
	scanf("%ld",&numbers[0]);			/*Taking the first element of the array as input*/
	for(int k=1;k<len;k++)
	{
		scanf(",%ld",&numbers[k]);		/*Taking the other elements of the array as input*/
	}
	int low=0;
	int upper=len-1;
	merge_sort(numbers,low,upper);			/*Calling the function*/
	for(int i=0;i<len;i++)
	{
		printf("%ld ",numbers[i]);		/*Printing the sorted list*/
	}
	printf("\n");
	printf("%d",merges);				/*Printing the number of times the merge function was called*/
	return 0;
}
			




















			
	
		
	
	
