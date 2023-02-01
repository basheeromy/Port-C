#include <stdio.h>

int main(void)
{
    printf("Number of elements: ");
    int length = 0;
    scanf("%d",&length);
    printf("Numbers to store in the array: \n");
    int array[length];
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
        sum += array[i];
    } 
    printf("The sum of all elements in array is %i \n", sum);
}