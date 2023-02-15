#include <stdio.h>

// function declaration
int sum(int num1, int num2);

int main(void)
{
    int a,b,total;
    printf("Input two numbers.\n");
    scanf("%d",&a);
    scanf("%d",&b);

    //call function with arguments and save returned value.

    total = sum(a,b);
    printf("sum is : %i\n", total);
    return 0;
}

// function definition.

int sum(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}