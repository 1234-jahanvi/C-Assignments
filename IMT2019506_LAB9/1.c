/*INPUT:Two integers and an operator
  OUTPUT:The result of the operation performed according to the operator inputed
  REMARKS:Use command line arguments, namely, argc and argv, to read in the operators and operand.And the name of the program is expr which evaluates an operation from command line inputs, where each operator or operand is a separate argument.
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	
	int op1=atoi(argv[1]);			//Converts the input string into integer
	int op2=atoi(argv[2]);			//Converts the input string into integer
	char op=*argv[3];
	switch(op)
	{
		case '+':
			printf("%d",op1+op2);
			break;
		case '-':
			printf("%d",op1-op2);
			break;
		case '/':
			printf("%d",op1/op2);
			break;
		case '*':
			printf("%d",op1*op2);
			break;
		default:
			break;
	}
	return 0;
	
}

