#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int x;
	do x = get_int("What is the pyramid height: ");
	while (x < 1 || x > 8);
	// Building the pyramid
	for(int i = 0; i < x; i++)
	{
		// Building the first part of pyramid
		for(int j = x - 1; j > i ; j--) // 7x
		{
			printf(" ");
		}
		for(int k = 0; k < i + 1; k++)
		{
			printf("#");
		}

		printf(" ");

		// building the second part of pyramid
		for(int k = 0; k < i + 1; k++)
		{
			printf("#");
		}
		for(int j = x - 1; j > i ; j--) // 7x
		{
			printf(" ");
		}
		printf("\n");
	}
}
