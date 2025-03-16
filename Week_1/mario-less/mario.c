#include <cs50.h>
#include <stdio.h>

int main()
{
    int h;
    // Prompt the user for the pyramid's height
    do
    {
        h = get_int("Height: ");
    }
    while (h <= 0);
    // Print a pyramid of that height
    for (int i = 0; i < h; i++)
    {
        for (int j = i; j < h - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
