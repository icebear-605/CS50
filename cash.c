#include <stdio.h>
#include <cs50.h>
#include <math.h>
/* need to add math.h */

int main(void)
{

    /* float has decimasl */
    float dollars;
    int count;
    count = 0;

    /* here I'm checking the input */
    do
    {
        dollars = get_float("How much?\n");
    }
    while (dollars <= 0);

    /* switching dollars to cents */
    int amount = round(dollars * 100);

    /* main part of the code */
    while (amount > 0)
    {
        if (amount >= 25)
        {
            count++;
            amount = amount - 25;
        }
        else if (amount >= 10)
        {
            count++;
            amount = amount - 10;
        }
        else if (amount >= 5)
        {
            count++;
            amount = amount - 5;
        }
        else
        {
            count++;
            amount = amount - 1;
        }
    }
    /* don't forget to add the %i for the int I want to print */
    printf("%i", count);

}


