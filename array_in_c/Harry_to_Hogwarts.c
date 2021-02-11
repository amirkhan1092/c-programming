#include <stdio.h>
#include <string.h>

int sort(int, int);

int main() {
    unsigned int num;
    scanf("%d", &num);
    unsigned int x, y;
    int count = 0;
    while(num != 6174)
    {
        x = sort(num, 1);
        y = sort(num, 0);
        num = x > y? x-y: y-x;
        count++;
    }    
    printf("%d", count);
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
int sort(int x, int flag)
{
    char arr[20], tmp;
    sprintf(arr, "%d", x);
    int len = strlen(arr);
    for(int j=0; j<len-1; j++)
    for(int i=0; i<len-1-j; i++)
    {   if(flag)
        {
            if(arr[i] > arr[i+1])
            {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
        else
        {
            if(arr[i] < arr[i+1])
            {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }
    sscanf(arr, "%d", &x);
    return x;
}