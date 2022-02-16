#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int initial_number;
    int final_number;
    int year;

    // Asking the values for user
    do
    {
        initial_number = get_int("Enter the initial number of llamas: ");
    }
    while(initial_number < 9);

    do
    {
        final_number = get_int("Enter the final number of llamas: ");
    }
    while(final_number < initial_number);

    // Calculating the growing rate.
    for(year = 0; initial_number < final_number; year++)
    {
        initial_number = initial_number + (initial_number / 3) - (initial_number / 4);
    }
    printf("Years: %i\n", year);
}
