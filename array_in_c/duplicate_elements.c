#include<stdio.h>
void main()
{
    int arr[10];
    // unsigned int count;
    for(int i=0; i<10; i++)
    {   
        printf("Enter the values at %d Interger ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {   
        for (int j = 0; i < 10; i++)
        {
            
                if(arr[i] == arr[j] && i!=j)
                    printf("%d", arr[i]);
                    break;
        }
        
    }
    
}