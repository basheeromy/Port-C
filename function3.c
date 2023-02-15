#include <stdio.h>

// declare function with return values and without arguments.
int sum(void);

int main(void)
{
    // call function, take return value and store returned value in a variable 
    int total = sum();
    printf("Sum : %i\n", total);
    return 0;
}

// function definition.

int sum(void)
{
    int a,b,total;
    printf("Input two numbers to see sum :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    total = a+b;
    return total;
    
}

