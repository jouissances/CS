#include <stdio.h>

void cough(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        cough();
    }
}

void cough(void)
{
    printf("Cough\n");
}

// first void means that it will not return any value
// second void means that it will not take in any arguments or inputs
