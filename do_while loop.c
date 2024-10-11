/*A do-while loop progaram.
Aothur: Maijos8109.
Date of coding: 09/10/2024*/
#include<stdio.h>
#include<math.h>

int main(){
    int i;
    int start;
    int stop;
    printf("Enter the value to start:\n");
    scanf("%d",&start);
    printf("Enter the value to stop\n");
    scanf("%d",&stop);
    i=start;
do{
    printf("%d\n",i);
    int square=pow(i,2);
    float squareroot=sqrt(i);
    int cube =pow(i,3);
    float cuberoot=cbrt(i);
    printf("square is %d\n", square);
    printf("squareroot is %.3f\n", squareroot);
    printf("cube is %d\n", cube);
    printf("cuberoot is %.3f\n", cuberoot);
    i++;
}
while(i<=stop);
return 0;
}
