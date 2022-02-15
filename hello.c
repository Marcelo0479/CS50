#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asc fpr user name
    string answer = get_string("What's is your name? ");

    printf("hello, %s\n", answer);
}
