/*INPUT:Two complex numbers (real and imaginary parts)
  OUTPUT:The result of addition , subtraction and multiplication of the two input complex numbers
  REMARKS:None
*/
#include<stdio.h>
int main()
{
	struct					//A structure is created
	{
		float real;
		float img;
	}comp1,comp2,comp3;			//Structure variables are declared

	scanf("%f %f %f %f",&comp1.real,&comp1.img,&comp2.real,&comp2.img);

	comp3.real=comp1.real+comp2.real;				//Addition is performed 
	comp3.img=comp1.img+comp2.img;
	printf("%.2f + %.2fi\n",comp3.real,comp3.img);

	comp3.real=comp1.real-comp2.real;				//Subtraction is performed
	comp3.img=comp1.img-comp2.img;
	printf("%.2f + %.2fi\n",comp3.real,comp3.img);

	comp3.real=(comp1.real*comp2.real)-(comp1.img*comp2.img);	//Multiplication is performed
	comp3.img=(comp1.real*comp2.img)+(comp2.real*comp1.img);
	printf("%.2f + %.2fi\n",comp3.real,comp3.img);a
	
	return 0;
}
	
