#include<stdio.h>
void add(int*, int*, int*);
void main()
{
    int a, b, sum;
    

    scanf("%d %d", &a, &b);

    add(&a, &b, &sum);

    printf("Result is %d", sum);


}
void add(int*p1, int*p2, int*s)
{
    *s = *p1+*p2;
}