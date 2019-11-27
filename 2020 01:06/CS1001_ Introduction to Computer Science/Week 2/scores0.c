#include <cs50.h>
#include <stdio.h>

void chart(int score);
// declaration, to prevent errors during compile

int main(void)
{
    int score1 = get_int("Score 1: ");
    // when initialised, variable int score1 occupies an array of squares (a list) on the RAM chip
    int score2 = get_int("Score 2: ");
    int score3 = get_int("Score 3: ");

    // for (int i = 0; i < 3; i++)
    // {
    //     // focus
    //     printf("Score %i: ", i + 1);
    //     // draw hashes with focus
    //     chart(score1);
    // }

    printf("Score 1: ");
    chart(score1);

    printf("Score 2: ");
    chart(score2);

    printf("Score 3: ");
    chart(score3);
}

// command to compile:
// gcc -lcs50-9.0.1 scores0.c

void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}