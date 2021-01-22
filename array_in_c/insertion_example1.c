#include<stdio.h>
// #define s 5
void main()
{
    int i, s=5;
    int arr[100]={1, 43, 5, 7, 3};
    printf("\nInput array\n");
    for(i=0; i<s; i++)
        printf("%d ", arr[i]);
    int ele, pos;
    printf("\nEnter the element ");
    scanf("%d", &ele);
    printf("\nenter the index ");
    scanf("%d", &pos);

    s++;
    for(i=s-1; i>pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos]=ele;



    //output section
    printf("\nOutput array\n");
    for(i=0; i<s; i++)
        printf("%d ", arr[i]);

}