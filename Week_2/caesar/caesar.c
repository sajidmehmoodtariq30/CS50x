#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Make sure every character in argv[1] is a digit
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert argv[1] from a `string` to an `int`
    int key = atoi(argv[1]);

    // Prompt user for plaintext
    string plaintext = get_string("Plaintext: ");

    // Encrypt plaintext
    printf("Ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];

        if (isalpha(c))
        {
            if (isupper(c))
            {
                printf("%c", (c - 'A' + key) % 26 + 'A');
            }
            else if (islower(c))
            {
                printf("%c", (c - 'a' + key) % 26 + 'a');
            }
        }
        else
        {
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
