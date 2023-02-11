#include <stdio.h>

int main(void)
{
    // take inputs
    
    int length = 0;
    printf("Enter the length of array: ");
    scanf("%d",&length);
    int array[length];
    printf("Enter inputs to array: \n");
    for(int i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
    }

    // find odds and evens and assign to new array
    int b = 0;
    int c = 0;
    int evens[length];
    int odds[length];
    int o = 0;
    int e = 0;

    for(int j = 0; j < length; j++ )
    {
        if ((array[j] % 2) == 0 )
        {
            evens[b] = array[j];
            b++;
            e++;
        }
        else
        {
            odds[c] = array[j];
            c++;
            o++;
        }
    }

    // print both new arrays.

    printf("Elements in odds array are : ");
    for(int h = 0; h < o; h++)
    {
        printf("%i ",odds[h]);
    }

    printf("\n");

    printf("Elements in evens array are : ");
    for(int h = 0; h < e; h++)
    {
        printf("%i ",evens[h]);
    }
    
    printf("\n");
}