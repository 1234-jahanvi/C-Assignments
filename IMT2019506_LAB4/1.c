/*INPUT:An array of comma seperated ten integers.
  OUTPUT:Array elements in reverse order seperated by space. 
  REMARKS:None*/

#include<stdio.h>
int main()
{
	int numbers[10];			/*Declaration of the array of ten integers*/
	scanf("%d",&numbers[0]);		/*Taking the input of the first array integer*/
	for(int i=1;i<10;i++)
	{
		scanf(", %d",&numbers[i]);	/*Taking the input of array integers except the first element*/
	}
	for(int j=9;j>=0;j--)
	{
		printf("%d ",numbers[j]);	/*Printing the array elements in the reverse order*/

	}
	return 0;
}

