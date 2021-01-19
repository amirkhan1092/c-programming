#include<stdio.h>
void main()
{
    int arr[10] = {2, 43, 43, 3, 22, 43, 2, 4, 54, 3};
    // unsigned int count;
    // for(int i=0; i<10; i++)
    // {   
    //     printf("Enter the values at %d Interger ", i);
    //     scanf("%d", &arr[i]);
    // }

    for (int i = 0; i < 10; i++)
    {   
        for (int j = i+1; j < 10; j++)
        {
                if((arr[i] == arr[j]))
                {
                    printf("\n%d\n", arr[i]);
                    break;
                }
        }
        
    }
    
}