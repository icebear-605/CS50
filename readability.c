#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

/* This program will determine how difficult a group of sentences are to read.
The user will input a few sentences and the program will tell them what grade
reading-level the writing is, based on the Coleman-Liau index */

int main(void)
{
    string s;
    do
    {
        s = get_string("Input your writing:\n");
    }
    while (strlen(s) == 0);

    /* get length of string */
    int len = strlen(s);

    /* count number of letters 65-122*/
    int letter_count = 0;
    for (int i = 0; i < len; i++)
    {
        /*char c = s[i]; */
        if (s[i] > 64 && s[i] < 123)
        {
            letter_count++;
        }
    }
    /* count number of words */
    float word_count = 1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 32)
        {
            word_count++;

        }
    }


    /* count number of sentences */
    int sentence_count = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 46 || s[i] == 33 || s[i] == 63)
        {
            sentence_count++;

        }
    }

    /* Calculate L */
    float L = letter_count * 100 / word_count;

    /* Calculate S */
    float S = sentence_count * 100 / word_count;

    /* calculate index */
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int answer = round(index);

    /* print out answer */
    if (answer < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (answer > 15)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", answer);
    }
}