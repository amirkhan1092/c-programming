#include<stdio.h>

void main()
{
    int arr[100];
    int N, i, tmp, flag;
    printf("Enter the number of element ");
    scanf("%d", &N);

    for(i=0; i<N; i++)
        scanf("%d", &arr[i]);
    // logic section
    for(int j=0; j<N-1; j++)
    {
    flag = 1;    
    for(i=0; i<N-1-j; i++)
    {
        if(arr[i] > arr[i+1])
        {
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
            flag = 0;
        }
    }
    if(flag)
        break;
    }

    // output section 
    printf("\nOutput sorted array\n");
    for(i=0; i<N; i++)
        printf("%d ", arr[i]);   

}