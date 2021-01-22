#include<stdio.h>

void main()
{
    int arr[100];
    int tta[100];
    int N, i;
    int flag=0, k=0;
    printf("Enter the number of elements ");
    scanf("%d", &N);
    for(i=0; i<N; i++)
        scanf("%d", &arr[i]);

    for ( i = 0; i < N; i++)
    {
        flag = 0;        
        for (int j = 0; j < k; j++)
        {   
            if(arr[i]== tta[j])
                flag = 1;
        }
        if(!flag)
            tta[k++] = arr[i];
        
    }
    for(i=0; i<k; i++)
        printf("%d ", tta[i]);
    

}