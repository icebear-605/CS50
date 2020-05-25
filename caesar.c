#include <stdio.h>
#include <cs50.h>
/* these are the standard packages that I need in pretty much every project */
/* stdio is to get input from  user and print to the screen */
/* cs50 is to run the check, debugger, style tools from the cs50 class */
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
        /* the program terminated on a failure*/
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!(isdigit(argv[1][i])))
        {
            return 1;
        }
    }

    int key = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");

    /* initialize ciphertext */
    int str_len = strlen(plaintext);
    string ciphertext = plaintext;
    for (int i = 0; i < str_len; i++)
    {
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            ciphertext[i] = (char)(97 + (plaintext[i] + key - 97) % 26);
        }
        else if (plaintext[i] >= 'A' && plaintext [i] <= 'Z')
        {
            ciphertext[i] = (char)(65 + (plaintext[i] + key - 65) % 26);
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }

    printf("ciphertext: %s\n", ciphertext);

}