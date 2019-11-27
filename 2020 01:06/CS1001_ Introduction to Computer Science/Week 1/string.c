#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("Hello, \n%s\n", name);
}

// command to compile: gcc -lcs50-9.0.1 <filename with extension>
// command to compile: clang -o <output filename> <filename with extension> -lcs50.9.0.1
// command to compile: make <filename without extension>
