#include<stdio.h>
#define max 100
void main()
{
    int A[max];
    int N, i, positive=0, negative=0, zero=0;
    printf("Enter the value of elements");
    scanf("%d",&N);

    for( i=0;i<N;i++)
        scanf("%d",&A[i]);

    for(i=0; i<N; i++)
    {
        if(A[i]>0)
            positive++;
        else if(A[i]==0)
            zero++;
        else
            negative++;            
    }
    printf("Positive number count %d\n", positive);
    printf("negative number count %d\n", negative);
    printf(" Zero count %d\n", zero);

}