#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * You can only use `putchar` to print to console.
 * putchar to be used twice only
 * Return: 0
 */

int main(void)
{
	int  x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
