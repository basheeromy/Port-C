#include <stdio.h>

int main(void)
{
    int height = 0;
    printf("Height of the triangle : ");
    scanf("%d",&height);
    
    // print pattern

    for(int i = 1; i <= height; i++ )
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}