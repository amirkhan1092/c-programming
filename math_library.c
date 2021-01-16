#include<stdio.h>
#include<math.h>

void main()
{
    int a, b, c;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    c = pow(a, b);
    c = sqrt(c);
    printf("Result of %d raise to the power %d is %d ",a, b, c );
}