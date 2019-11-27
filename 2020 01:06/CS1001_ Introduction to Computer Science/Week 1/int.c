#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = get_int("Integer: ");

    printf("Hello, %i\n", i);

    if (i % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

// %i indicates the variable name to be placed, i
// second argument of printf is the variable name itself