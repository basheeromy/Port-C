#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
    // take input array to find unique elements.

    int length = 0;

    printf("Length of array: ");
    scanf("%d", &length);

    int array[length];

    printf("Input elements of array to find unique elements: \n");

    for(int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    // declare array with name uniq to store unique elements.

    int uniq[length];

    // find unique elements and store in to uniq array.

    int b = 1;

    for(int i = 1; i < length; i++ )
    {
        bool exit = false;

        for(int j = i-1; j >= 0; j--)
        {
            if(array[i] == array[j])
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
                exit = true;
                break;
            }
        }

        if(exit == true)
        {
            continue;
        }

        // as array[i] is a unique element. add to uniq array.
        uniq[b] = array[i] ;
        b++;

        

    }
    bool unq = true;

    for(int s = 1; s < length; s++)
    {
        if( array[s] == array[0])
        {
            unq = false;
            break;
        }

    }

    if(unq == true)
    {
        uniq[0] = array[0];
    }

    // print unique elements.

    printf("Unique elements in given array are : ");
    for(int l = 0; l < length; l++)
    {
        printf("%i ",uniq[l]);
    }
    printf("\n");
    return 0;
}