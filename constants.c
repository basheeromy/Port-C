#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    printf("%d\n", num);
    num = 4;
    printf("%d\n", num);
    /* here, by declairing a variable with 
    int command, we are declaring a variabale 
    that can change it's value whenever we 
    re-assign any other value*/

    const int num1 = 6;
    printf("%d\n", num1);
    /* the bellow given assignment statement will throw an error 
    because we are trying to change value of a variable that we 
    declared as const variable which can't be changed. (assignment of read-only variable 'num1')*/
    //num1 = 3;

    return 0;
}


/* constants are datas in a program which can't be changed and 
 */