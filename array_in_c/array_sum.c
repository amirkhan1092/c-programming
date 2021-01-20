#include<stdio.h>
#define N 5
void main()
{
int marks[N],sum=0,average=0;
int i;
for(i=0;i<N;i++)
{
        printf("enter the value at index %d",i);
    scanf("%d",&marks[i]);
    
}
for(i=0;i<N;i++)
{
    sum += marks[i];
}
    average=sum/N;
    printf("Sum:- %d ,Average:- %d", sum, average);

}