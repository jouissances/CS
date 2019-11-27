#include <cs50.h>
#include <stdio.h>

const int COUNT = 7;

void chart(int count, int scores[]);

int main(void)
{
    int scores[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }

    for (int i = 0; i < COUNT; i++)
    {
        printf("Score %i: ", i + 1);
        chart(COUNT, scores[i]);
    }
}

void chart(int count, int scores[])
{
    for (int i = 0; i < scores[i]; i++)
    {
        printf("#");
    }
    printf("\n");
}

// command to compile:
// gcc -lcs50-9.0.1 scores3.c