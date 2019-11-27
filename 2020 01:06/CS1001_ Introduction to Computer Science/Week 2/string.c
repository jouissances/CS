#include <cs50.h>
#include <stdio.h>

// string-related library
#include <string.h>

int main(void)
{
    string s = get_string("String: ");
    // int length = strlen(s);
    // initiating two variables at once — this is to stop the for loop from calculating the strlen(s) at every iteration
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }
}

// command to compile:
// gcc -lcs50-9.0.1 string.c