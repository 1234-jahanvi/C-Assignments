/*INPUT:Number of students and details of each student
  OUTPUT:Details of each student
  REMARKS:None
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	struct				//A structure is created
	{
		char name[256];
		char rollno[256];
		int age;
		int marks;
	}student[n];			//An array of structures is declared
	for(int i=0;i<n;i++)
	{
		scanf("%s %s %d %d",student[i].name,student[i].rollno,&student[i].age,&student[i].marks);
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n%s\n%d\n%d\n",student[i].name,student[i].rollno,student[i].age,student[i].marks);
	}
	return 0;
}
		
