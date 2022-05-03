/*INPUT:Read the contents of the two files
  OUTPUT:To create a new file containing the contents of the of first file followed by the second file
  REMARKS:None
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr1,*fptr2,*fptr3;
	fptr1=fopen("file1.txt","r");		/*Opens file1.txt in read mode*/
	fptr2=fopen("file2.txt","r");		/*Opens file2.txt in read mode*/
	fptr3=fopen("file3.txt","w");		/*Creating a new file file3.txt in write mode*/		
	char buff[50];				/*Defining a buffer array*/
	fgets(buff,50,fptr1);			/*Stores the contents of file1.txt in buff array*/
	fputs(buff,fptr3);			/*Stores the contents of buff array in file3.txt*/
	fgets(buff,50,fptr2);			/*Stores the contents of file2.txt in buff array*/
	fputs(buff,fptr3);			/*Stores the contents of buff array in file3.txt*/
	fclose(fptr1);				/*Closes file1.txt*/
	fclose(fptr2);				/*Closes file2.txt*/
	fclose(fptr3);				/*Closes file3.txt*/
	return 0;
}
	
