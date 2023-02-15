#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // take first step inputs
    int length,i;
    printf("Length of array : ");
    scanf("%d",&length);
    int array[length];
    printf("Elements in array in ascending order : \n");
    for( i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
    }

    // take input to insert into array

    printf("Number of elements to insert : ");
    int nlength,j;
    scanf("%d",&nlength);
    int insert[nlength];
    printf("Elements to insert in ascending order :\n");
    for(j = 0; j < nlength; j++)
    {
        scanf("%d",&insert[j]);
    }

    // merge two sorted arrays in sorted order

    int nleng = length + nlength;

    int narray[nleng];
    bool exit = false;
    int a = 0;
    int b = 0;
    

    for(int k = 0; k < nleng; k++)
    {
       
        while(b < nlength && a < length )
        {
            if(array[a] > insert[b])
            {
                narray[k] = insert[b];
                b++;
                exit = true;
                break;
            }
            else
            {
                narray[k] = array[a];
                a++;
                exit = true;
                break;
            }

        }
        if(exit == true)
        {
            exit = false;
            continue;
        }
        if(a < length)
        {
            narray[k] = array[a];
            a++;
        }
        if(b < nlength)
        {
            narray[k] = insert[b];
            b++;
        }
        
    } 

    // print new array
    printf("New array is : ");

    for(int s = 0; s < nleng; s++)
    {
        printf("%i ",narray[s]);
    }   
    printf("\n");
    
}