#include<stdio.h>

void main()
{
    

    int num=10;

    int *pt1 = &num;

    int **pt2 = &pt1;

    **pt2 = 0;

    printf("value is %d", **pt2);

    


}
