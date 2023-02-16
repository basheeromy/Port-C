#include <stdio.h>

int main(void)
{
    // take input

    int a,b,i,j,sum;
    printf("Input size of 2d array :\n");
    scanf("%d%d",&a,&b);
    int array1[a][b];
    int array2[a][b];

    // create 2d arrays

    printf("Elements to array1 :\n");
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Elements to array2 :\n");
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
    
    // add both arrays and print

    printf("sum of two arrays are : \n");
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            sum = array1[i][j] + array2[i][j];
            printf("%i ", sum);
        }
        printf("\n");
    }

}