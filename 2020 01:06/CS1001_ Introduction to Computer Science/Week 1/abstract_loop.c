#include <stdio.h>

void cough(int n);

int main(void)
{
    cough(5);
}

void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Cough\n");
    }
}

// first void means that it will not return any value
// second void means that it will not take in any arguments or inputs