#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;
    /* need to put the height here first in order for the do-while loop to work */
    do
    {
        height = get_int("How high?\n");
    }
    while (height < 1 || height > 8);
    for (int i = 1; i < height + 1; i++)
    {
        for (int j = 1; j < height - i + 1; j++)
            /* style points - put spaces between () and - + etc */
        {
            printf(" ");
        }
        for (int j = 1; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
        /* this is to skip to the next line */

    }
}