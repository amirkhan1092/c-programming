#include<stdio.h>
#include<string.h>

int main(){
    char arr1[100],arr2[100];
    int a,b,c,d=0;

    gets(arr1);
    // gets(arr2);

    for(int i=0; i<strlen(arr1); i++)
    {
        printf("[%c] : [%d]\n", arr1[i], i);
    
    }
    printf(i);

    // a=strlen(arr1);
    // b=strlen(arr2);

    // for(c=0;c<b;c++)
    //     arr1[a+c]=arr2[c];

    // arr1[a+c] = '\0';
    // printf("Output String %s", arr1);

    return 0;
}
