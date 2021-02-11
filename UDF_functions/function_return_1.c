#include<stdio.h>
void my_info(void);
void swap(int*, int*);

void main()
{
    int a, b;
    a = 29;
    b = 30;
    printf("Before calling Value of a:%d\nValue of b:%d\n", a, b);
    swap(&a, &b);
    printf("After Calling Value of a:%d\nValue of b:%d\n", a, b);

    
}

void swap(int a, int b)
{
    printf("Value of a: %d", b);

}

void my_info(void)
{
    printf("My name is Amir khan\n");
    printf("Department: T&D\n");
    printf("Department: T&D\n");
}












