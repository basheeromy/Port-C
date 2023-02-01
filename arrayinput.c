#include <stdio.h>

int main(void)
{
    int elements = 10;
    printf("Number of elements to store: ");
    scanf("%d",&elements);

    printf("Numbers: \n");

    int array[elements];

    for(int i = 0;i < elements;i++)
    {

        scanf("%d",& array[i]);
        
    }
    
    for (int i = 0; i < elements; i++)
    {
        printf("%i ",array[i]);
    }
    printf("\n");
}