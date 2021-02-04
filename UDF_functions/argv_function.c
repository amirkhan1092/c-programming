#include<stdio.h>
int power(int, int);
void main()
{
    int a, b;
    a = 5;
    b = 3;
    printf("Power result %d\n", power(a, b));
}

int power(int x,int y )
{
    int i;
    int pw = 1;
    for(i=0; i<y; i++)
        pw *= x;

    return pw;    

}
