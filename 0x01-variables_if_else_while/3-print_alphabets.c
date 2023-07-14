#include <stdio.h>

/**
 * main - Entry point
 * Description: Using putchar to ouptut lowercase and then uppercase alphabet.
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
