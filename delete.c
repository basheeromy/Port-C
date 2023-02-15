#include <stdio.h>

int main(void)
{
    // take input 

    int length = 0;
    printf("Length of array : ");
    scanf("%d",&length);
    printf("Elements in arry: \n");
    int array[length];
    for(int i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
    }

    // take input for correction

    int position;
    printf("Desired position to delete element : ");
    do
    {
        scanf("%d",&position);
    }
    while(position >= length);
    
    // program to delete input from desired position

    int narray[length-1];

    for(int j = 0; j < length-1; j++)
    {
        if(j >= position - 1 )
        {
            narray[j] = array[j+1];
        }
        else
        {
            narray[j] = array[j];
        }
    } 

    // print new array

    printf("Elements in array after deletion are : ");
    for(int k = 0; k < length-1; k++)
    {
        printf("%i ",narray[k]);
    }
    printf("\n");
}