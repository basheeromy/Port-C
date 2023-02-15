#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int length = 0;
    printf("Length of the array : ");
    scanf("%d",&length);
    int array[length];
    
    printf("Elements :\n");
    for(int i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
    }
    // find the second largest element 
    int small = 0;
    int smallest = array[0];
    bool second = false;

    for(int j = 1; j < length; j++)
    {
        if(array[j] < smallest)
        {
            small = smallest;
            smallest = array[j];
            second = true;
        }
        else if (array[j] == smallest)
        {
            continue;
        }
        else if(second == false)
        {
            small = array[j];
            second = true;
        }
        else if ( array[j] < small)
        {
            small = array[j];
        }
    }

    // print second small element from array
    if(second == true)
    {
        printf("Second smallest element is : %i\n", small);
    }
    else
    {
        printf("all elements are identical or there is only one element.\n");
    }
}