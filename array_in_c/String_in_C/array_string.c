#include<string.h>
#include<stdio.h>

void main()
{
    char names[20][30];
    int N;
    N = 5;
    for(int i=0; i<N; i++)
        gets(names[i]);

    for(int i=0; i<N;i++ )
    printf("%d name %s\n", i+1, names[i]);    


}