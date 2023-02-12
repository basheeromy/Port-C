#include <stdio.h>

int main(void)
{
    // take inputs.

    int length = 0;
    printf("length of array : ");
    scanf("%d",&length);
    int array[length];
    printf("elements in array to sort :-\n");
    for(int i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
    }

    // program to sort

    for(int j = 0; j < length-1; j++)
    {
        for(int k = j+1; k < length; k++)
        {
            if(array[j] < array[k])
            {
                int temp = array[j];
                array[j] = array[k];
                array[k] = temp;
            }
             
        }
    }

    // print sorted array
    printf("Array sorted in descending order :- ");
    for(int m = 0; m < length; m++ )
    {
        printf("%i ",array[m]);
    }
    printf("\n");
}