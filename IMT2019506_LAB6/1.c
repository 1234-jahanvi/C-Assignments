/*INPUT:Takes as input the number of integers to read, say n.
  OUTPUT:Print the numbers after reading them and allocate dynamic memory to store the n integers.	
  REMARKS:There is the use of dynamic memory allocation but not arrays.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);				/*Takes the number of integers as input*/
	int *ptr;
	ptr=(int *)malloc(n*sizeof(int)); 	/*Using malloc function to dynamically allocate a single large block of memory to store n integers*/
	for(int i=0;i<n;i++)
	{
		scanf("%d",&(*ptr));
		ptr++;
	}
	ptr=ptr-n;				
	for(int i=0;i<n;i++)
	{
		printf("%d ",*ptr);		/*Printing the integers using pointers*/
		
		ptr++;
	}
	ptr=ptr-n;
	free(ptr);				/*To free the allocated memory space*/
	return 0;
}

