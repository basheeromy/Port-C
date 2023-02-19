#include <stdio.h>

int length(void);

int main(void)
{
    // take input.

    int len = length();

    // program to print diamond star pattern

    int s = len-1;
    int s1 = 1;
    int u = 1;
    int l = len-1;


    for (int i = 0; i < (len*2)-1; i++)
    {
        if(i < len) 
        {
            // loop to print space till half of diagram
            for(int j = 0; j < s; j++)
            {
                printf(" ");
            }
            s--;

            // loop to print stars with space

            for(int k = 0; k < u; k++)
            {
                printf("* ");
            }
            u++;
            printf("\n");
        }
        else
        {
            // loop to print spaces

            for(int j = 0; j < s1; j++)
            {
                printf(" ");
            }
            s1++;

            // loop to print star with spaces

            for(int k = 0; k < l; k++)
            {
                printf("* ");
            }
            printf("\n");
            l--;
        }
        


    }


}

int length(void)
{
    printf("Input the length of desired diamond's middle line : ");
    int n = 0;
    scanf("%d",&n);
    return n;
}