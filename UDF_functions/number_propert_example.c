// number property perfect, prime, armstrong;


#include<stdio.h>
int perfect(int);
int armstrong(int);
int prime(int);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(perfect(num))
        printf("Number is Perfect\n");
    if(prime(num))
        printf("Number is Prime\n");
    if(armstrong(num))
        printf("Number is Armstrong\n");
}

int perfect(int x)
{
    int sum=0;
    //
    for(int i=1; i<x; i++)
        if(!x%i)
            sum += i;

    if(sum == x)
        return(1);
    else    
        return(0);        
        
    
}