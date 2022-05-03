/*INPUT:The x and y co-ordinates of the first circle;The x and y co-ordinates of the second circle;The radius of the first circle;The radius of the second circle.
 OUPUT:Prints whether the two circles are intersecting or not.
 REMARKS:If one of the radius values is negative, the output is 'Invalid Input'. 
*/

#include <stdio.h>
#include <math.h>
int main()
{ 
	
      	int x1,y1,x2,y2,r1,r2;
	float distance,sum,diff;

	/*x1=x co-ordinate of the first circle
	y1=y co-ordinate of the first circle
	x2=x co-ordinate of the second circle
	y2=y co-ordinate of the second circle 
	r1=radius of the first circle
	r2=radius of the second circle	   
	distance=distance between the centres
	sum=sum of the radius of the two circles
	diff=difference of the radius of the two circles */



	scanf("%d %d %d %d %d %d",&x1, &y1, &x2, &y2, &r1, &r2);		/*Taking input from the user*/	
	if(r1>=0 && r2>=0)
	{
		distance=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
		sum=r1+r2;
		diff=r1-r2;
		diff=fabs(diff);						/*Returns the absolute value of the difference of the two radii. */			      
		if(distance>sum)
		{
			printf("NO");
		}
		else if(distance<diff)
		{
			printf("NO");
		}
		else
		{
			printf("YES");
		}


	}
	else 
	{
		printf("Invalid input");					/*When the one of the radius values is negative*/		
	}
	return 0;
}
