#include<stdio.h>
int perfect(int);
int prime(int);
int armstrong(int);

void main()
{

    int num, pm, pr, am;
    printf("enter the number: ");
    scanf("%d", &num);

    pm = prime(num);
    pr = perfect(num);
    am = armstrong(num);



}


int prime(int x)
{
    int c=0;
    if(c==2)
        return 1;
    else
        return 0;    

}