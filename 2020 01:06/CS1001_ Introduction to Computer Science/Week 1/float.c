#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float f = get_float("Float X: ");
    float g = get_float("Float Y: ");
    // printf("Hello, %f\n", f);
    printf("This is X+Y: %f\n", f + g);
    printf("This is the remainder of X/Y: %.3f\n", f / g);
    printf("And this is the product of X/Y: %f\n", f * g);
}