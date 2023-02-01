#include <stdio.h>

int main(void)
{
    printf("Enter the length of array: ");
    int length = 0;
    scanf("%d",&length);
    int array[length];
    int array1[length];
    printf("Elements to store in the array: \n");
    for(int i = 0; i < length; i++ )
    {
        scanf("%d", &array[i]);
        array1[i] = array[i];
    } 

    printf("The first array is :");
    for(int i = 0; i < length; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
    printf("The copy created is : ");
    for(int i = 0; i < length; i++)
    {
        printf("%i ", array1[i]);
    }
    printf("\n");
}