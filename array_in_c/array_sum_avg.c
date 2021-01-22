#include<stdio.h>
void main()
{
    int i,c=0;
    int arr[100] ,N;
    printf("enter the number");
    scanf("%d" ,&N);
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    
for(i=0;i<N;i++)
    c=c+arr[i];

printf("the sum is - %d \n and  the average is %.2f",c,(float)c/N );
}