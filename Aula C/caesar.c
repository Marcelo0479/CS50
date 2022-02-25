#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Checking if the number of arguments is correct
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Checking if argv is formed only number
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Asking for the text that will be cypher
    string s = get_string("plaintext: ");
    printf("ciphertext: ");

    // Converting argv from string to integer
    int key = atoi(argv[1]);

    // Creating a loop to change the letter one by one
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Checking if the char is alphabetic
        if (isalpha(s[i]))
        {
            int cypher = s[i] + key;
            // Calculating the new character if lowercase
            if (islower(s[i]))
            {
                while(cypher > 'z')
                {
                    cypher -= 26;
                }
            }
            // Calculating the new character if uppercase
            else
            {
                while (cypher > 'Z')
                {
                cypher -= 26;
                }
            }

            // char new_char = cypher;
            printf("%c", cypher);
        }

        // Keeping the non alphabetic character
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
