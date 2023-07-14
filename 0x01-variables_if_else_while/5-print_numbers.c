#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all numbers of base 10, starting from 0.
 * followed by a newline
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}

	printf("\n");
	return (0);
}
