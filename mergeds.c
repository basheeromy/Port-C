#include <stdio.h>

int main(void)
{
    // take inputs

    int leng = 0;
    printf("Number of elements : ");
    scanf("%d", &leng);
    int array1[leng];
    int array2[leng];
    printf("Elements in array 1 : \n");
    for(int i = 0; i < leng; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Elements in array 2 : \n");
    for(int i = 0; i < leng; i++)
    {
        scanf("%d",&array2[i]);
    }

    // merge two arrays into new array. both arrays are same in size.

    int length = leng*2;
    int array3[length];
    for(int i = 0; i < leng;i++)
    {
        array3[i] = array1[i];
        array3[i+leng] = array2[i];
    }

    // sort new array in decending order
    int temp = 0;

    for(int i = 0; i < (length - 1); i++)
    {
        for(int j = (i+1); j < length; j++)
        {
            if(array3[i] < array3[j])
            {
                temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }

    // print the sorted and merged array.
    printf("The merged array elements after sorted : ");
    for(int i = 0; i < length; i++)
    {
        printf("%i ",array3[i]);
    }
    printf("\n");

}