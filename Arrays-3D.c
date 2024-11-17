#include<stdio.h>
int main()
{
    int i;
    int j;
    int k;
    int marks[2][3][5] = {{{1,0,2,4,8},{30,40,50,60,70},{10,20,30,80,90}},{{3,4,5,2,7},{7,8,9,5,6},{5,7,6,8,9}}};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<5;k++){
            printf("marks[%d][%d][%d] = %d]\n",i,j,k, marks[i][j][k]);
            }
        }
    }
    return 0;
}
