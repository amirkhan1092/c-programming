#include<stdio.h>

// void main()
// {
//     int n;
//     int sum=0;
//     scanf("%d", &n);
 
//     while (n>0)
//     {
//         sum += n%10;
//         n /= 10;

//     }
//     printf("Sum is %d", sum);
// }

void main()
{
    int n, sum=0;
    scanf("%d", &n);
    sum += n%10;
    n /= 10;
    sum += n%10;
    n /= 10;
    sum += n%10;
    n /= 10;
    sum += n%10;
    n /= 10;
    sum += n%10;
    n /= 10;
    sum += n%10;

    printf("%d", sum);    
}


// int main()
// {
//     int x=40;
//     {
//         int x = 20;
//         printf("\n%d", x);
//     }
//     printf("%d", x);
// }