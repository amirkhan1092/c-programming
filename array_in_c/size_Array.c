#include<stdio.h>

void main()
// {   const int size = 5;
{
    int arr[5] = {2, 54, 23, 13, 15};

    for (int i = 0; i < sizeof arr/sizeof arr[0] ; i++)
    {
        printf("%d \t", arr[i]);
    }
    
}


