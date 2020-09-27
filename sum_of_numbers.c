#include<stdio.h>
#include<conio.h>

// for fix values
// void main()
// {
//     int a, b, c;
//     a = 10;
//     b = 20;
//     c = a + b;
//     printf("Sum of two value is %d", c);
// }

// values from user
void main()
{

    int a, b, c;
    // a = 19
    printf("Enter value of a: \n");
    scanf("%d",&a);
    printf("Enter value of b: \n");
    scanf("%d",&b);

    c = a + b;

    printf("The sum of two number is %s", c);

}