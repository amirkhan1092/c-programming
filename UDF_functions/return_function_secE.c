#include<stdio.h>

int cube(int);

void main()
{
    int num, out;
    printf("Enter the number ");
    scanf("%d", &num);
    out = cube(cube(num)-1);
    printf("Cube of number %d is %d", num, out);

}


int cube(int x)
{   
    return x*x*x;
}