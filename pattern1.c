#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter the side of X box : ");
    scanf("%d",&n);
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if( i == 0 || i == n-1 || j == 0 || j == n-1 || j == i || j == (n-1)-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}