#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations for a single-digit numbers.
 * You can `putchar` up to four times only.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
