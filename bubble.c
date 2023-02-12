#include <stdio.h>

int main(void)
{
    // take inputs 

    int length = 0;
    printf("Length of array : ");
    scanf("%d",&length);
    int array[length];
    printf("Input elements to array : \n");
    for(int i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
    }

    //sort array


    for(int j = 0; j < length-1; j++)
    {
        for(int k = (j+1); k < length; k++)
        {
            if(array[k] < array[j])
            {
                int temp = array[j];
                array[j] = array[k];
                array[k] = temp;
            }
        }
    }

    // print sorted array

    printf("Elements of sorted array in ascending order :- ");

    for(int s = 0; s < length; s++)
    {
        printf("%i ",array[s]);
    }
    printf("\n");
}