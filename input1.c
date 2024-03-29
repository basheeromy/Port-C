#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    /* scanf command used to take input to our program.
     & sign used as pointer. it points the input age to variable age */

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f \n",gpa);

    char grade;
    printf("Enter your grade: ");
    scanf("%s", &grade);
    printf("Your grade is %c\n", grade);

    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("your name is %s\n", name);

    /* scanf is a command using to take input from user. we have to 
    specify the expected length of input and  we don't have to use & 
    with variable name as pointer. But, there is a problem with using
    scanf to take input, if we give "Muhammed Basheer" as input, scanf
    will only take letters until the first blank space. it means ,
    actual input will be only "Muhammed". so, we can't feed sentences
    with scanf. as a solution, there is one more method to take input
    as a string contains blank spaces.(fgets). but this method doesn't
    take input as different data types like integer, double etc..
    fgets just take input as a general string. let's check it out...
     */
    char names[MAX];
    printf("Enter your name: ");
    fgets(names, MAX, stdin);
    printf("your name is %s\n", names);

    /* here fgets will not work as it comes after multiple scanf functions,
    scanf fuction is not buffer over flow proteced and it will write a new 
    line character each time in buffer and whenever we call it. also even scanf
    not take values after space. it will write those values in buffer. we can see 
    this by giving space included input for name scanf taking as input. fgets will
    take that value and write to names.*/

    


    return 0;
}