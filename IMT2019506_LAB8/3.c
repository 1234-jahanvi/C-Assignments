/*INPUT:Two real numbers n1 and n2 and an operator which is one of +,-,*,/
 OUTPUT:Print the result according to the operation specified in the input.
 REMARKS:The two real numbers should be in the range -2^31 to 2^31 and the result should be a floating point number with a precision of 4 decimal digits.The concept of Function Pointer is used to call  appropriate functions.
*/

#include <stdio.h>
float Add(float a,float b)
{
	return a+b;
}
float Sub(float a,float b)
{
	return a-b;
}
float Multiply(float a,float b)
{
	return a*b;
}
float Division(float a,float b)
{
	return a/b;
}
int main()
{
	float n1,n2;
	char op;
	scanf("%f %f %c",&n1,&n2,&op);
	float (*funcptr)(float,float);			/*a function pointer is declared to a function which takes two float arguments and returns a float value*/
	if(op=='+')
	{
		funcptr=&Add;				/*the function pointer points to function Add() if the operator is '+' */
	}
	else if(op=='-')
	{
		funcptr=&Sub;				/*the function pointer points to function Sub() if the operator is '-' */
	}
	else if(op=='*')
	{
		funcptr=&Multiply;			/*the function pointer points to function Multiply() if the operator is '*' */
	}
	else
	{
		funcptr=&Division;			/*the function pointer points to function Division() if the operator is '/' */
	}
	printf("%.4f",(*funcptr)(n1,n2));
	return 0;
}
