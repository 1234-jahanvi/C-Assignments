/*INPUT:Take variable number of arguments just like printf.
  OUTPUT:Printing of integer and char by calling the putchar function.
  REMARKS:Do not call printf in this program but Implement a minimal functionality minprintf function
*/
#include<stdio.h>
#include<stdarg.h>
void printint(int n)						/*A function implemented to print the integer by using putchar()*/
{
	if((n/10)!=0)
	{
		printint(n/10);
	}
	putchar(n%10 + '0');
}
void minprintf(char *fmt,...)
{
	va_list arg;						/*Points to each unnamed argument in turn*/
	va_start(arg,fmt);					/*Makes arg point to the first unnamed argument*/
	char *ptr;
	int ival;
	char ch;
	for(ptr=fmt;*ptr;ptr++)
	{
		if(*ptr!='%')
		{
			putchar(*ptr);				/*Prints the charracter if it is nt '%'*/
		}
		else
		{
			switch(*++ptr)
			{
				case 'd':
					ival=va_arg(arg,int);
					printint(ival);		/*Prints the integer by calling the printint() function*/
					break;
				case 'c':
					ch=va_arg(arg,int);
					putchar(ch);		/*Prints the character*/
					break;
				default:
					break;
			}
		}
	}
}
int main()
{
	minprintf("%d\n",10);
	minprintf("%c\n",'a');
	minprintf("%d %c %d",23,'k',25);
}
