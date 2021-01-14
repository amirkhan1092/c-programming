#include<stdio.h>
#define a 5

void main()
{
    
    int arr[a] = {1, 3, 4, 8, 78, 56};
    arr[5] = 100;
    printf("%d %d", &arr[4], &arr[5]);

}