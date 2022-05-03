/*INPUT: n= number of integers to be sorted and n comma separated integers.
  OUTPUT: Sorted numbers in the increasing order and the pivot index of the last element of the input array. 
  REMARKS: The last element is used as the pivot.
*/
#include <stdio.h>
void quick_sort(long int [],int,int);	 
int partition(long int [],int,int);      
int len,pIndex,p;					/*len=length of the input array; pIndex=the index of the pivot element ; p=index of the last element of the input array*/
void quick_sort(long int arr[len],int start,int end)
{
	if(start<end)					
	{
		pIndex=partition(arr,start,end);	/*partition function returns the pivot index*/
		if(start==0 && end==(len-1))
		{
			p=pIndex;
		}
		quick_sort(arr,start,pIndex-1);		
		quick_sort(arr,pIndex+1,end);		
	}
}
int partition(long int arr[len],int start,int end)	/*Function which does that elements smaller than pivot to the left of the pivot and elements larger than pivot to the right of the pivot*/
{
	long int pivot=arr[end];			/*Intializing the pivot with the last element of the array passed*/
	pIndex=start;					/*Intializing the pIndex with the first element of the array passed*/
	for(int i=start;i<=(end-1);i++)
	{
		if(arr[i]<pivot)			/*Comparing the element with pivot element(last element of the array passed)*/
		{
			long int temp;			/*temp=a temporary variable used for swapping*/
			temp=arr[i];			/*Swapping the element at i with the element at pIndex*/
			arr[i]=arr[pIndex];
			arr[pIndex]=temp;
			pIndex++;			
		}
	}
	long int temp1;					/*temp1=another temporary variable used for swapping*/
	temp1=arr[pIndex];				/*Swapping the element at pIndex with the element at end*/
	arr[pIndex]=arr[end];
	arr[end]=temp1;
	return pIndex;
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
	long int last=numbers[len-1];
	quick_sort(numbers,0,len-1);			/*Calling the function*/
	for(int i=0;i<len;i++)
	{
		printf("%ld ",numbers[i]);		/*Printing the sorted list*/
	}
	printf("\n");
	printf("%d",p);					/*Printing the pivot index of the last element of the input array*/
	return 0;
}
		
