#include <stdio.h>
int main()

{

    float rad=0.0,area=0.0;

    scanf("%f",&rad);

    if(rad>=0)

    {

    area=3.14*rad*rad;

    printf("%.2f ",area);

    }

    else if(rad<0)

    {

        printf("Invalid Input\n");

    }

    return 0;

}

