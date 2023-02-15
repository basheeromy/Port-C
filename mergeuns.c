#include <stdio.h>

int main(void)
{
    // take input
    int length = 0;
    printf("length of array : ");
    scanf("%d",&length);
    int array[length];
    printf("input array elements :\n");
    for(int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    // take details to insert value
    int value, position;
    printf("Input the value to be inserted : ");
    scanf("%d", &value);
    printf("Input the position : ");
    do
    {
        scanf("%d", &position);
    }
    while(position > length+1);
    

    // insert the new element in desired position

    int narray[length+1];
    int a = 0;

    for(int j = 0; j <= length; j++)
    {
        if(j == position-1)
        {
            narray[j] = value;
        }
        else
        {
            narray[j] = array[a];
            a++;
        }
    }

    // print new array

    printf("Elements in new array are : ");
    for(int l = 0; l <= length; l++)
    {
        printf("%i ",narray[l]);
    }
    printf("\n");
}