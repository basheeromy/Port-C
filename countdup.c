#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    printf("Length of array to do duplicate check : ");
    int length = 0;
    scanf("%d",&length);

    printf("Array elements: \n");
    int array[length];
    for(int i =0; i < length; i++)
    {
        scanf("%d",&array[i]);
    }
    int duplicate = 0;

    // first loop
    for(int i = 1; i < length; i++)
    {
        int s = i-1;
        

        bool exit = false;

        // second loop.

        for(int j = s; j >= 0; j--)
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
        for(int k = i+1; k < length; k++)
        {
            if(array[k] == array[i])
            {
                duplicate += 1;

                
            }
        }
        

    }
    for(int i = 1; i < length; i++)
    {
        if (array[0] == array[i])
        {
            duplicate += 1;
        }
    }
    printf("the number of duplicate elements is : %i\n", duplicate);

    return 0;
}