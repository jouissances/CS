#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int i = 0;
    do
    {
        n = get_int("Height: ");
        while (n < 9 && i < n)
        {
            int number_of_spaces = n - i;
            int number_of_hashes = i + 1;
            printf("%.*s", number_of_spaces, "        ");
            printf("%.*s", number_of_hashes, "########");
            printf("  ");
            printf("%.*s\n", number_of_hashes, "########");
            i++;
        }
    } while (n < 1 || n > 8);
}
