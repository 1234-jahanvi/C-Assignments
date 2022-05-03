/*INPUT:To store output of the date command into a file say file1. Make another call to date after 5 seconds and store its output in another file say file2.
  OUTPUT:read the contents of these two files and output the same
  REMARKS: Usage of system()
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1;
	FILE *fp2;
	fp1=fopen("file1.txt","w");		/*Creating file1.txt in write mode*/
	fp2=fopen("file2.txt","w");		/*Creating file2.txt in write mode*/
	system("date > file1.txt");		/*puts the date into file1.txt*/
	system("sleep 5");			/*system sleeps for 5 seconds*/
	system("date > file2.txt");		/*puts the date into file2.txt*/		
	fclose(fp1);
	fclose(fp2);
	char buff[50];
	FILE *fptr1,*fptr2;
	fptr1=fopen("file1.txt","r");		/*Opens file1.txt in read mode*/
	fptr2=fopen("file2.txt","r");		/*Opens file2.txt in read mode*/
	printf("%s",fgets(buff,50,fptr1));	/*Prints the contents of file1.txt*/
	fclose(fptr1);				/*Closes file1.txt*/
	printf("%s",fgets(buff,50,fptr2));	/*Prints the contents of file2.txt*/
	fclose(fptr2);				/*Closes file2.txt*/
	return 0;
	
}
