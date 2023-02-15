#include <stdio.h>

int main(void)
{
    // take input 

    int length = 0;
    printf("Length of array : ");
    scanf("%d",&length);
    int array[length];
    int largest = 0;
    int Slarg = 0;
    printf("Elements : \n");
    for(int i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
        if(array[i] > largest)
        {
            Slarg = largest;
            largest = array[i];
        }
        else if (array[i] < largest && array[i] > Slarg)
        {
            Slarg = array[i];
        }


    }

    // print second largest element
    
    printf("Second largest element is : %i\n",Slarg );

}