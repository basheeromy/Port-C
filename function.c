#include <stdio.h>
#include <stdlib.h>

// function declaration (function without arguments and return values)
void sum(void);

int main(void)
{
    // calling function
    sum();
    return 0;
}

// function definition

void sum(void)
{
    int a,b,sum;
    printf("Input two digits to add together. \n");
    scanf("%d",&a);
    scanf("%d",&b);
    sum = a+b;
    printf("Sum is : %i\n",sum);
    
}
