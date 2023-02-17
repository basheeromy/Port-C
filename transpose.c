#include <stdio.h>

int main(void)
{
    // take inputs

    int rows,columns,i,j;
    printf("Enter number of rows and columns :\n");
    scanf("%d%d",&rows,&columns);

    // declare matrix of input size
    printf("Enter elements : \n");

    int matrix[rows][columns];

    for(i = 0; i < rows ; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    // print the matrix

    printf("\nGiven matrix is : \n\n");

    for(i = 0; i < rows ; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%i ",matrix[i][j]);
        }
        printf("\n");
    }

    // transpose matrix
    /* to find transpose of a given matrix; we just have to switch raws and columns in a
    particular order. 

    rows of transpose matrix  = columns of original matrix;
    columns of transpose matrix  = rows of original matrix;
    
    
    */

    

    int transpose[columns][rows];

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // print transpose
    printf("\nTranspose of Given matrix is : \n\n");

    for(i = 0; i < columns ; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%i ",transpose[i][j]);
        }
        printf("\n");
    }



}