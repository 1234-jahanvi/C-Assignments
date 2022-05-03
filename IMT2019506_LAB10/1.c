/*INPUT:Variable number of integer arguments to be passed from command line
  OUPUT: Print the number of arguments passed and their sum
  REMARKS:Usage of command line arguments
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int sum=0;
	printf("%d ",argc-1);	        /*Printing the number of arguments*/
	for(int i=1;i<argc;i++)
	{
		sum+=(atoi(argv[i]));	/*Sum of the integer argumenets*/
	}
	printf("%d",sum);
	return 0;
}
