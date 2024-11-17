#include<stdio.h>
int main()
{
    int i;
    int j;
    int marks[3][5] = {{1,0,2,4,8},{30,40,50,60,70},{10,20,30,80,90}};
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("marks[%d][%d] = %d]\n",i,j, marks[i][j]);
        }
    }
    return 0;
}
