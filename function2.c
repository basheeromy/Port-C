#include <stdio.h>

// declare a function wich takes arguments and not pass return value.
void sum(int num1,int num2);

int main(void)
{
    int a,b;
    printf("Input two numbers to see sum : \n");
    scanf("%d",&a);
    scanf("%d",&b);

    // call function with arguments passed

    sum(a,b);
    return 0;
}

// function definition and recieving arguments.
void sum(int num1,int num2)
{
    int total = num1 + num2;
    printf("The sum of number given is : %i\n", total);
    
}