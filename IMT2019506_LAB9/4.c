/*INPUT:First to input the number of integers and then inputting all the integers 
  OUTPUT:Print the integers in the linked list and also print the list after deleting all the odd valued integers
  REMARKS:To create a node structure which has atleast two fields :one to store the integer value, another as a pointer to a neighboring node that contains the next integer and so on. The last node points to a NULL pointer indicating end of the list.*/

#include<stdio.h>
#include<stdlib.h>
struct node				/*A structure is created*/
	{
		int num;
		struct node *nextptr;
	};
int main()
{
	int n,inp;
	scanf("%d",&n);
	struct node *headptr,*tmp,*ptr;
	headptr=(struct node*)malloc(sizeof(struct node));		//Dynamic allocation of memory
	scanf("%d",&inp);          
	headptr->num=inp;
	headptr->nextptr=NULL;
	tmp=headptr;
	for(int i=2;i<=n;i++)
	{
		ptr=(struct node*)malloc(sizeof(struct node));		//Dynamic allocation of memory
		scanf("%d",&inp);
		ptr->num=inp;
		ptr->nextptr=NULL;
		
		tmp->nextptr=ptr;
		tmp=tmp->nextptr;
	}
	struct node *temp;
	temp=headptr;
	while(temp!=NULL)
	{
		printf("%d-->",temp->num);				//Printitng the integers of the linked list
		temp=temp->nextptr;
	}
	printf("NULL\n");
	temp=headptr;
	for(int i=1;i<=n;i++)
	{
		if(((temp->num)%2)==0)
		{
			printf("%d-->",temp->num);			//Printing the even valued integers after deleting the odd valued integers of the linked list
		}
		temp=temp->nextptr;
	}
	printf("NULL\n");
	return 0;
}
		
		
