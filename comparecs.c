#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");
    
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y \n");
    }
}

/* CS50 AND CLANG COMMAND 

 CS50 library for c programing language is developed by 
 David J.Malan and his team at Harvard university for academic 
 purposes of computor science courses. this library contains 
 simplified commands for regular programming tasks like taking
 inputs, sorting etc. it's an open source library which we can
 use with multiple platforms like windows,linux or mac 
 
 clang 
 
 clang is compilor command used to compile programming languages
 like c,c++. and there are multiple other use cases too. here we
 are using the clang command to compile this program as we used 
 commands from cs50 library to avoid errors like undefined
 reference to `get_int'  while we try to compile with make command.
 the following is the syntax of command we used to compile this par
 ticular program.
 
 $ clang comparecs.c -o comparecs -lcs50
 
 */