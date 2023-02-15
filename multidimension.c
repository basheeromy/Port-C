#include <stdio.h>

int main(void)
{
    // take input in to three dimensional array
    int array[5][5];
    printf("Input elements to 3d array :\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    // print elements in a 3d array

    printf("Elements in 3d array are: \n");

    for(int k =0; k<5; k++)
    {
        for(int l = 0; l < 5; l++)
        {
            printf("%i ",array[k][l]);
        }
        printf("\n");
    }

}