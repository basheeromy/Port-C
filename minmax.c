#include <stdio.h>

int main(void)
{
    // take inputs

    int length = 0;
    printf("Length of array: ");
    scanf("%d",&length);
    int array[length];
    printf("Input elements to array : \n");
    for(int i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
    }

    // find minimum and maximum  elements in array.

    int min = array[0];
    int max = array[0];

    for(int i = 1; i < length; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    // Print maximum and minimum elements

    printf("The minimum element of the array is %i\n", min);
    printf("The maximum element of the array is %i\n", max);
}