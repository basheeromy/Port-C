#include <stdio.h>
#define MAX 15

// this simple program is meant to try fgets function 

int main(void)
{
    char sample[MAX];
    printf("Give the input: ");
    fgets(sample, MAX, stdin);
    printf("String is : %s\n", sample);

    return 0;
}

/* in second line (#define MAX 15), we are defining the length of string we are expecing.*/