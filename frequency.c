#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    // take input 

    int leng = 0;
    
    printf("Length of the array: ");
    scanf("%d", &leng);

    int array[leng];

    printf("Input elements to arry: \n");
    
    for(int i = 0; i < leng; i++)
    {
        scanf("%d",&array[i]);
    }

    // check frequency of each element and print

    // check frequency of first element.
    
    int count = 0;

    for(int j = 0; j < leng; j++)
    {
        if(array[0] == array[j])
        {
            count += 1;
        }
    }
    printf("%i occurs %i times\n",array[0],count); 
    
    // check frequency of other elements

    for(int i = 1; i < leng; i++)
    {
        
        bool exit = false;
        for(int j = i-1; j >= 0; j--)
        {
            if(array[j] == array[i])
            {
                exit = true;
                break;
            }
        }
        if(exit == true)
        {
            continue;
        }
        count = 1;
        for(int k = i+1; k < leng; k++)
        {
            if(array[i] == array[k])
            {
                count += 1;
            }
        }
        printf("%i occurs %i times.\n", array[i],count);

    }
}