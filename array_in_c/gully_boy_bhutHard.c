#include <stdio.h>
#include <string.h>


int main() {
    
    char arr[100];
    int s, n, i, j, len;
    gets(arr);
    len = strlen(arr);
    scanf("%d %d", &s, &n);
    
    for(i=0; i<n; i++)
    {
        for(j=s; j<len; j++)
        {
            if(arr[j] == 32)
                continue;
            else
                printf("%c ", arr[j]);
        }
        for(j=0; j<s; j++)
        {
            if(arr[j] == 32)
                continue;
            else
                printf("%c ", arr[j]);
        }
        
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}