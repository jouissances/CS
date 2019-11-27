#include <cs50.h>
#include <stdio.h>

// if we need to change the size of the array, we only need to change it HERE! 🎉 Instead of changing the size in 3 places (3, even with such a short program)
// const means the same way as in JS — we cannot change the value of COUNT anywhere below this line
// COUNT being uppercase signifies that it's a global variable, which it is
const int COUNT = 7;

// implicit declaration
void chart(int score);

// looooopy loop
int main(void)
{
    int scores[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        // "indexing into an array" with scores[i] — think of it as indexing the squares on the chip grid (square 0, square 1, ... == scores[0], scores[1], ...)
        scores[i] = get_int("Score %i: ", i + 1);
    }

    for (int i = 0; i < COUNT; i++)
    {
        printf("Score %i: ", i + 1);
        chart(scores[i]);
    }

    // despite block L19 and L22 looping the same amount of time, if we combine the two blocks — we would see user being asked a score, and then directly after the hashes would print, followed by the score input, then score hash, and so on — which is also perfectly valid, but by postponing the drawing of the hashes, we can see all the hashes together at the end (sort of bars-like)
}

// draw hashes with argument
void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}

// command to compile:
// gcc -lcs50-9.0.1 scores2.c