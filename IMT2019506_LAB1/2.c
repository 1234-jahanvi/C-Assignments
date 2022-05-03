#include <stdio.h>

int main()
{
    int a,b,rem;
    scanf("%d %d",&a,&b);
    if(a>0 && b>0)
   {
    if(a>=b)
    {
        rem=a%b;
    }
    else if(b>a)
    {
        rem=b%a;
    }
    printf("%d",rem);
   }
    else
   {
       printf("Invalid input\n");
   }
    return 0;
}
