#include<stdio.h>

void main()
{
    int arr[100];
    int N, i, num, flag=0;
    printf("Enter the number of elements ");
    scanf("%d", &N);
    for(i=0; i<N; i++)
        scanf("%d", &arr[i]);

    printf("Enter the item ");
    scanf("%d", &num);

    for(i=0; i<N; i++)
    {
        if(num == arr[i])
        {
            flag = 1;
            break;
        }
    }    

    printf("\nOutput section \n");
    if(flag)
        printf("\nitem %d found in array at index %d\n", num, i);
    else
        printf("\nitem not found\n");


}