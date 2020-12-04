#include<stdio.h>   // header file for standard input and output 

int square(int n);  // function declaration 

void main()
{
    int num, res;
    printf("Enter the Number ");
    scanf("%d",&num);
    res = square(num);   // function call 
    printf("Result is %d", res);

}
int square(int n)    // function body 
{
    return n*n;
}
