#include<stdio.h>

void main()
{
    int arr[100];
    int N, i, tmp;
    printf("Enter te number ");
    scanf("%d", &N);
    int flag;
    for(i=0; i<N; i++)
        scanf("%d", &arr[i]);
    for(int j=0; j<N-1; j++)
    {
    // logic section 
    flag = 1;
    for(i=0; i<N-1-j; i++)
    {
        if(arr[i] > arr[i+1])
        {
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] =tmp;
            flag=0;

        }
    }
    if(flag)
        break;
    }
     // output section
     printf("\nOut sorted array\n");
     for(i=0; i<N; i++)
        printf("%d ", arr[i]);   


}