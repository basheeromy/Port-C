#include <cs50.h>
#include <stdio.h>

const int N = 4;

float average(int length, int array[]);

int main(void)
{
    int scores[N];

    for(int i; i < N; i ++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(N, scores));

}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0;i < length; i++)
    {
        sum += array[i];
    }
    //printf("%i\n",length);
    //printf("%i\n",sum);
    return sum/(float)length;
}