#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask user
    char c = get_char("Do you agree? ");
    
    // Check the choice
    if (c == 'y' || c == 'Y')
    {
        printf("Agree.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}