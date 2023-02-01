#include <stdio.h>

int main(void)
{
    int length1 = 0;
    printf("Length of the array: ");
    scanf("%d",&length1);
    int array[length1];

    printf("Elements to store in array: \n");

    for(int i = 0; i < length1; i++)
    {
        scanf("%d",&array[i]);
    }
    int reverse[length1];

    for(int i = length1-1, j = 0 ; i >= 0 || j < length1 ; i-- , j++)
    {
        reverse[i] = array [j];
    }

    for(int i = 0; i < length1; i ++)
    {
        printf("%i ", reverse[i]);
    }
    printf("\n");
}