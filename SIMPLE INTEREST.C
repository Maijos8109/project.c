/*Program to calculate simple interest.
It accepts and compute principal,rate and time.
Author: Maijos8109.
Ref No: CT101/G/22636/24
Date: 26/09/2024*/
#include <stdio.h>

int main()
{
    //initialization and declaration
        int principal;
        int time;
        float rate;
        int SI;

        printf("Enter principal\n");
        scanf("%d",&principal);
        printf("Enter time\n");
        scanf("%d",&time);
        printf("Enter rate\n");
        scanf("%f",&rate);
        printf("rate is%f\n", rate);

//calculation of simple interest
        SI =(principal*rate*time)/100;
        rate=rate/100;
        printf("simple interest is %d",SI);

        return 0;
}
