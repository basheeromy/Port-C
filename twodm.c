#include <stdio.h>

int main(void)
{
    // take input

    int a,b,i,j,answer;
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

    printf("values after subtraction : \n");
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            answer = array1[i][j] - array2[i][j];
            printf("%i ", answer);
        }
        printf("\n");
    }

}