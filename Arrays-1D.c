#include<stdio.h>
int main ()
{
    int i;
    int marks[6] = {30,40,50,60,70,80};
    for(i=0;i<6;i++){
        printf("marks[%D] = %d\n",i, marks[i]);
    }
    return 0;
}
