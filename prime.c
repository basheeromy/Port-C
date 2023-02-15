#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n = 0;
    bool prime = true;
    printf("Number to check : ");
    scanf("%d",&n);
    for( int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if(prime == true)
    {
        printf("Prime number.\n");
    }
    else
    {
        printf("Non prime number\n");
    }
}