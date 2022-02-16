#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int coins = 0;

    do change = get_float("What is the change due? ");
    // Checking if the value is valid
    while (change <= 0);

    // Converting the value for cents
    int cents = round(change * 100);

    // Calculating the number of coins
    do
    {
        if (cents > 24)
        {
            cents -=25;
            coins++;
        }
        else if (cents > 9)
        {
            cents -=10;
            coins++;
        }
        else if (cents > 4)
        {
            cents -=5;
            coins++;
        }
        else
        {
            cents -=1;
            coins++;
        }
    }
    while (cents > 0);

    // Telling the quantity of coins needed
    printf("%i\n", coins);
}
