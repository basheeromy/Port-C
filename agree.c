#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = get_char("Do you aree? ");
    if(c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if(c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("wrong input.\n");
    }
}

/* here we used single quotes for 'y' and double quotes 
for "Agreed", because we have to specifically use double quotes 
with strings and single quotes with characters in c. computer can 
recognise a string from double quotes and a char as char from 
single quotes. also double vertical bar (||)is used for "or" condition. */