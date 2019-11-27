#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("String: ");

    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }

    printf("That was %i characters long!\n", n);
}

// command to compile:
// gcc -lcs50-9.0.1 strlen.c
